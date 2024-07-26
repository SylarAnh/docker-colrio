
**用docker镜像复现colrio**


进入docker-compose.yml
修改文件映射地址。

进入当前文件夹目录下
```
$ xhost + # 每次重启电脑都要运行这个
$ git clone https://github.com/PengYu-Team/Co-LRIO.git
# 第一次启动或者修改过代码将 start_colrio.sh 中colcon build --symlink-install的注释解除掉
$ docker-compose up 
```
在另一个终端中，进入容器并开始播放数据集
```
$ docker exec -it colrio-test bash
# cd dataset/s3e
# ros2 bag play S3E_College_robot/S3E_College_robot.db3
```

# 
