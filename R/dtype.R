torch_dtype <- R6::R6Class(
  classname = "torch_dtype", 
  public = list(
    ptr = NULL,
    initialize = function(ptr = NULL) {
      self$ptr <- ptr
    },
    print = function() {
      cat("torch_", cpp_dtype_to_string(self$ptr), sep = "")
    }
  ),
  active = list(
    is_floating_point = function() {
      if (cpp_dtype_to_string(self$ptr) %in% c("Float", "Double", "Half"))
        TRUE
      else
        FALSE
    }
  )
)

#' @export
as.character.torch_dtype <- function(x, ...) {
  cpp_dtype_to_string(x$ptr)
}

dtype_from_string <- function(str) {
  switch (tolower(str),
    "float" = torch_float(),
    "float32" = torch_float32(),
    "float64" = torch_float64(),
    "double" = torch_double(),
    "float16" = torch_float16(),
    "half" = torch_half(),
    "uint8" = torch_uint8(),
    "int8" = torch_int8(),
    "int16" = torch_int16(),
    "short" = torch_short(),
    "int32" = torch_int32(),
    "int" = torch_int(),
    "int64" = torch_int64(),
    "long" = torch_long(),
    "bool" = torch_bool(),
    "quint8" = torch_quint8(),
    "qint8" = torch_qint8(),
    "qint32" = torch_qint32()
  )
}

#' @export
torch_float32 <- function() torch_dtype$new(cpp_torch_float32())
#' @export
torch_float <- function() torch_dtype$new(cpp_torch_float32())

#' @export
torch_float64 <- function() torch_dtype$new(cpp_torch_float64())
#' @export
torch_double <- function() torch_dtype$new(cpp_torch_float64())

#' @export
torch_float16 <- function() torch_dtype$new(cpp_torch_float16())
#' @export
torch_half <- function() torch_dtype$new(cpp_torch_float16())

#' @export
torch_uint8 <- function() torch_dtype$new(cpp_torch_uint8())

#' @export
torch_int8 <- function() torch_dtype$new(cpp_torch_int8())

#' @export
torch_int16 <- function() torch_dtype$new(cpp_torch_int16())
#' @export
torch_short <- function() torch_dtype$new(cpp_torch_int16())

#' @export
torch_int32 <- function() torch_dtype$new(cpp_torch_int32())
#' @export
torch_int <- function() torch_dtype$new(cpp_torch_int32())

#' @export
torch_int64 <- function() torch_dtype$new(cpp_torch_int64())
#' @export
torch_long <- function() torch_dtype$new(cpp_torch_int64())

#' @export
torch_bool <- function() torch_dtype$new(cpp_torch_bool())

#' @export
torch_quint8 <- function() torch_dtype$new(cpp_torch_quint8())

#' @export
torch_qint8 <- function() torch_dtype$new(cpp_torch_qint8())

#' @export
torch_qint32 <- function() torch_dtype$new(cpp_torch_qint32())

#' @export
`==.torch_dtype` <- function(e1, e2) {
  cpp_dtype_to_string(e1$ptr) == cpp_dtype_to_string(e2$ptr)
}

is_torch_dtype <- function(x) {
  inherits(x, "torch_dtype")
}

#' Gets and sets the default floating point dtype.
#' 
#' @param d The default floating point dtype to set. Initially set to 
#'   `torch_float()`.
#' 
#' @rdname default_dtype
#'
#' @export
torch_set_default_dtype <- function(d) {
  cpp_set_default_dtype(d$ptr)
}

#' @rdname default_dtype
#' @export
torch_get_default_dtype <- function() {
  torch_dtype$new(cpp_get_default_dtype())
}
