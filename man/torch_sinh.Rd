% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_sinh}
\alias{torch_sinh}
\title{Sinh}
\arguments{
\item{input}{(Tensor) the input tensor.}

\item{out}{(Tensor, optional) the output tensor.}
}
\description{
Sinh
}
\section{sinh(input, out=None) -> Tensor }{


Returns a new tensor with the hyperbolic sine of the elements of
\code{input}.

\deqn{
    \text{out}_{i} = \sinh(\text{input}_{i})
}
}

\examples{

a = torch_randn(c(4))
a
torch_sinh(a)
}
