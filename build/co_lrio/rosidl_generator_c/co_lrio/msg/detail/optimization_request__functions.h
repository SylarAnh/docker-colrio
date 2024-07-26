// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from co_lrio:msg/OptimizationRequest.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__FUNCTIONS_H_
#define CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "co_lrio/msg/rosidl_generator_c__visibility_control.h"

#include "co_lrio/msg/detail/optimization_request__struct.h"

/// Initialize msg/OptimizationRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * co_lrio__msg__OptimizationRequest
 * )) before or use
 * co_lrio__msg__OptimizationRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
bool
co_lrio__msg__OptimizationRequest__init(co_lrio__msg__OptimizationRequest * msg);

/// Finalize msg/OptimizationRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
void
co_lrio__msg__OptimizationRequest__fini(co_lrio__msg__OptimizationRequest * msg);

/// Create msg/OptimizationRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * co_lrio__msg__OptimizationRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
co_lrio__msg__OptimizationRequest *
co_lrio__msg__OptimizationRequest__create();

/// Destroy msg/OptimizationRequest message.
/**
 * It calls
 * co_lrio__msg__OptimizationRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
void
co_lrio__msg__OptimizationRequest__destroy(co_lrio__msg__OptimizationRequest * msg);

/// Check for msg/OptimizationRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
bool
co_lrio__msg__OptimizationRequest__are_equal(const co_lrio__msg__OptimizationRequest * lhs, const co_lrio__msg__OptimizationRequest * rhs);

/// Copy a msg/OptimizationRequest message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
bool
co_lrio__msg__OptimizationRequest__copy(
  const co_lrio__msg__OptimizationRequest * input,
  co_lrio__msg__OptimizationRequest * output);

/// Initialize array of msg/OptimizationRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * co_lrio__msg__OptimizationRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
bool
co_lrio__msg__OptimizationRequest__Sequence__init(co_lrio__msg__OptimizationRequest__Sequence * array, size_t size);

/// Finalize array of msg/OptimizationRequest messages.
/**
 * It calls
 * co_lrio__msg__OptimizationRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
void
co_lrio__msg__OptimizationRequest__Sequence__fini(co_lrio__msg__OptimizationRequest__Sequence * array);

/// Create array of msg/OptimizationRequest messages.
/**
 * It allocates the memory for the array and calls
 * co_lrio__msg__OptimizationRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
co_lrio__msg__OptimizationRequest__Sequence *
co_lrio__msg__OptimizationRequest__Sequence__create(size_t size);

/// Destroy array of msg/OptimizationRequest messages.
/**
 * It calls
 * co_lrio__msg__OptimizationRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
void
co_lrio__msg__OptimizationRequest__Sequence__destroy(co_lrio__msg__OptimizationRequest__Sequence * array);

/// Check for msg/OptimizationRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
bool
co_lrio__msg__OptimizationRequest__Sequence__are_equal(const co_lrio__msg__OptimizationRequest__Sequence * lhs, const co_lrio__msg__OptimizationRequest__Sequence * rhs);

/// Copy an array of msg/OptimizationRequest messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_co_lrio
bool
co_lrio__msg__OptimizationRequest__Sequence__copy(
  const co_lrio__msg__OptimizationRequest__Sequence * input,
  co_lrio__msg__OptimizationRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__FUNCTIONS_H_
