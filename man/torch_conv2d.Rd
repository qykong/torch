% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen-namespace-docs.R,
%   R/gen-namespace-examples.R
\name{torch_conv2d}
\alias{torch_conv2d}
\title{Conv2d}
\arguments{
\item{input}{NA input tensor of shape \eqn{(\text{minibatch} , \text{in\_channels} , iH , iW)}}

\item{weight}{NA filters of shape \eqn{(\text{out\_channels} , \frac{\text{in\_channels}}{\text{groups}} , kH , kW)}}

\item{bias}{NA optional bias tensor of shape \eqn{(\text{out\_channels})}. Default: \code{None}}

\item{stride}{NA the stride of the convolving kernel. Can be a single number or a      tuple \verb{(sH, sW)}. Default: 1}

\item{padding}{NA implicit paddings on both sides of the input. Can be a      single number or a tuple \verb{(padH, padW)}. Default: 0}

\item{dilation}{NA the spacing between kernel elements. Can be a single number or      a tuple \verb{(dH, dW)}. Default: 1}

\item{groups}{NA split input into groups, \eqn{\text{in\_channels}} should be divisible by the      number of groups. Default: 1}
}
\description{
Conv2d
}
\section{conv2d(input, weight, bias=None, stride=1, padding=0, dilation=1, groups=1) -> Tensor }{


Applies a 2D convolution over an input image composed of several input
planes.

See \code{~torch.nn.Conv2d} for details and output shape.

.. include:: cudnn_deterministic.rst
}

\examples{


}
