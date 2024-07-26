FROM osrf/ros:foxy-desktop-focal
ARG DEBIAN_FRONTEND=noninteractive


RUN sed -i 's/archive.ubuntu.com/mirrors.ustc.edu.cn/g' /etc/apt/sources.list
RUN sed -i '/security.ubuntu.com/d' /etc/apt/sources.list

COPY 3rd_party/gtsam-4.2a8 /3rd_party/gtsam-4.2a8
RUN cd /3rd_party/gtsam-4.2a8/ && mkdir build && cd build && cmake .. && make -j4 && make install

RUN apt update && apt-get install -y --no-install-recommends vim ros-foxy-xacro
# RUN apt install -y --no-install-recommends ros-foxy-rosbag2-bag-v2-plugins ros-foxy-rosbag2-converter-default-plugins ros-foxy-rosbag2-storage ros-foxy-rosbag2-transport ros-foxy-rosbag2-storage-default-plugins ros-foxy-ros2bag

RUN echo 'source /opt/ros/foxy/setup.bash' >> /root/.bashrc

COPY Co-LRIO /ws_code/src/
# RUN /bin/bash -c "source /opt/ros/foxy/setup.bash" && cd /ws_code && colcon build --symlink-install

RUN echo "alias srcd='. install/setup.bash'" >> /root/.bashrc
RUN echo "alias ckm='colcon build --symlink-install'" >> /root/.bashrc

ENV NVIDIA_VISIBLE_DEVICES \
    ${NVIDIA_VISIBLE_DEVICES:-all}
ENV NVIDIA_DRIVER_CAPABILITIES \
    ${NVIDIA_DRIVER_CAPABILITIES:+$NVIDIA_DRIVER_CAPABILITIES,}graphics
