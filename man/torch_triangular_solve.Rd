% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_triangular_solve}
\alias{torch_triangular_solve}
\title{Triangular_solve}
\arguments{
\item{input}{(Tensor) multiple right-hand sides of size \eqn{(*, m, k)} where                \eqn{*} is zero of more batch dimensions (\eqn{b})}

\item{A}{(Tensor) the input triangular coefficient matrix of size \eqn{(*, m, m)}                where \eqn{*} is zero or more batch dimensions}

\item{upper}{(bool, optional) whether to solve the upper-triangular system        of equations (default) or the lower-triangular system of equations. Default: \code{True}.}

\item{transpose}{(bool, optional) whether \eqn{A} should be transposed before        being sent into the solver. Default: \code{False}.}

\item{unitriangular}{(bool, optional) whether \eqn{A} is unit triangular.        If True, the diagonal elements of \eqn{A} are assumed to be        1 and not referenced from \eqn{A}. Default: \code{False}.}
}
\description{
Triangular_solve
}
\section{triangular_solve(input, A, upper=True, transpose=False, unitriangular=False) -> (Tensor, Tensor) }{


Solves a system of equations with a triangular coefficient matrix \eqn{A}
and multiple right-hand sides \eqn{b}.

In particular, solves \eqn{AX = b} and assumes \eqn{A} is upper-triangular
with the default keyword arguments.

\code{torch_triangular_solve(b, A)} can take in 2D inputs \verb{b, A} or inputs that are
batches of 2D matrices. If the inputs are batches, then returns
batched outputs \code{X}
}

\examples{


}
