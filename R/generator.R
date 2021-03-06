Generator <- R6::R6Class(
  classname = "torch_generator",
  public = list(
    ptr = NULL,
    initialize = function(ptr = NULL) {
      
      if (!is.null(ptr)) {
        self$ptr <- ptr
        return(NULL)
      }
        
      self$ptr <- cpp_torch_generator()
      
    },
    print = function() {
      cat("torch_generator()")
    },
    current_seed = function() {
      if (!require(bit64))
        warning("bit64 is required to correctly show the seed.")
      
      cpp_generator_current_seed(self$ptr)
    },
    set_current_seed = function(seed) {
     
      if ((!is.integer(seed)) && (!inherits(seed, "integer64")))
        stop("Seed must an integer or integer64.")
      
      if (is.integer(seed))
        seed <- as.numeric(seed)
      
      cpp_generator_set_current_seed(self$ptr, seed)
    }
  )
)

#' Create a Generator object
#' 
#' A `torch_generator`  is an object which manages the state of the algorithm 
#' that produces pseudo random numbers. Used as a keyword argument in many 
#' In-place random sampling functions.
#' 
#' @examples
#' 
#' # Via string
#' generator <- torch_generator()
#' generator$current_seed()
#' generator$set_current_seed(1234567L)
#' generator$current_seed()
#' 
#'
#' @export
torch_generator <- function() {
  Generator$new()
}

is_torch_generator <- function(x) {
  inherits(x, "torch_generator")
}

