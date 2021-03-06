% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_pow}
\alias{torch_pow}
\title{Pow}
\arguments{
\item{input}{(Tensor) the input tensor.}

\item{exponent}{(float or tensor) the exponent value}

\item{out}{(Tensor, optional) the output tensor.}

\item{self}{(float) the scalar base value for the power operation}
}
\description{
Pow
}
\section{pow(input, exponent, out=None) -> Tensor }{


Takes the power of each element in \code{input} with \code{exponent} and
returns a tensor with the result.

\code{exponent} can be either a single \code{float} number or a \code{Tensor}
with the same number of elements as \code{input}.

When \code{exponent} is a scalar value, the operation applied is:

\deqn{
    \text{out}_i = x_i ^ \text{exponent}
}
When \code{exponent} is a tensor, the operation applied is:

\deqn{
    \text{out}_i = x_i ^ {\text{exponent}_i}
}
When \code{exponent} is a tensor, the shapes of \code{input}
and \code{exponent} must be broadcastable .
}

\section{pow(self, exponent, out=None) -> Tensor }{


\code{self} is a scalar \code{float} value, and \code{exponent} is a tensor.
The returned tensor \code{out} is of the same shape as \code{exponent}

The operation applied is:

\deqn{
    \text{out}_i = \text{self} ^ {\text{exponent}_i}
}
}

\examples{

a = torch_randn(c(4))
a
torch_pow(a, 2)
exp = torch_arange(1., 5.)
a = torch_arange(1., 5.)
a
exp
torch_pow(a, exp)


exp = torch_arange(1., 5.)
base = 2
torch_pow(base, exp)
}
