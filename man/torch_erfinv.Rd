% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_erfinv}
\alias{torch_erfinv}
\title{Erfinv}
\arguments{
\item{input}{(Tensor) the input tensor.}

\item{out}{(Tensor, optional) the output tensor.}
}
\description{
Erfinv
}
\section{erfinv(input, out=None) -> Tensor }{


Computes the inverse error function of each element of \code{input}.
The inverse error function is defined in the range \eqn{(-1, 1)} as:

\deqn{
    \mathrm{erfinv}(\mathrm{erf}(x)) = x
}
}

\examples{

torch_erfinv(torch_tensor(c(0, 0.5, -1.)))
}
