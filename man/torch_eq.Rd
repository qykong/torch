% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_eq}
\alias{torch_eq}
\title{Eq}
\arguments{
\item{input}{(Tensor) the tensor to compare}

\item{other}{(Tensor or float) the tensor or value to compare}

\item{out}{(Tensor, optional) the output tensor. Must be a \code{ByteTensor}}
}
\description{
Eq
}
\section{eq(input, other, out=None) -> Tensor }{


Computes element-wise equality

The second argument can be a number or a tensor whose shape is
broadcastable  with the first argument.
}

\examples{

torch_eq(torch_tensor(c(1,2,3,4)), torch_tensor(c(1, 3, 2, 4)))
}
