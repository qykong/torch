// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "torch_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// cpp_device_type_to_string
std::string cpp_device_type_to_string(Rcpp::XPtr<torch::Device> device);
RcppExport SEXP _torch_cpp_device_type_to_string(SEXP deviceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Device> >::type device(deviceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_device_type_to_string(device));
    return rcpp_result_gen;
END_RCPP
}
// cpp_device_index_to_int
std::int64_t cpp_device_index_to_int(Rcpp::XPtr<torch::Device> device);
RcppExport SEXP _torch_cpp_device_index_to_int(SEXP deviceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Device> >::type device(deviceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_device_index_to_int(device));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_device
Rcpp::XPtr<torch::Device> cpp_torch_device(std::string type, Rcpp::Nullable<std::int64_t> index);
RcppExport SEXP _torch_cpp_torch_device(SEXP typeSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::int64_t> >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_device(type, index));
    return rcpp_result_gen;
END_RCPP
}
// get_device_index
std::int64_t get_device_index(Rcpp::XPtr<torch::Device> device);
RcppExport SEXP _torch_get_device_index(SEXP deviceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Device> >::type device(deviceSEXP);
    rcpp_result_gen = Rcpp::wrap(get_device_index(device));
    return rcpp_result_gen;
END_RCPP
}
// get_device_type
std::string get_device_type(Rcpp::XPtr<torch::Device> device);
RcppExport SEXP _torch_get_device_type(SEXP deviceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Device> >::type device(deviceSEXP);
    rcpp_result_gen = Rcpp::wrap(get_device_type(device));
    return rcpp_result_gen;
END_RCPP
}
// device_has_index
bool device_has_index(Rcpp::XPtr<torch::Device> device);
RcppExport SEXP _torch_device_has_index(SEXP deviceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Device> >::type device(deviceSEXP);
    rcpp_result_gen = Rcpp::wrap(device_has_index(device));
    return rcpp_result_gen;
END_RCPP
}
// device_is_cuda
bool device_is_cuda(Rcpp::XPtr<torch::Device> device);
RcppExport SEXP _torch_device_is_cuda(SEXP deviceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Device> >::type device(deviceSEXP);
    rcpp_result_gen = Rcpp::wrap(device_is_cuda(device));
    return rcpp_result_gen;
END_RCPP
}
// device_is_cpu
bool device_is_cpu(Rcpp::XPtr<torch::Device> device);
RcppExport SEXP _torch_device_is_cpu(SEXP deviceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Device> >::type device(deviceSEXP);
    rcpp_result_gen = Rcpp::wrap(device_is_cpu(device));
    return rcpp_result_gen;
END_RCPP
}
// device_equals
bool device_equals(Rcpp::XPtr<torch::Device> device1, Rcpp::XPtr<torch::Device> device2);
RcppExport SEXP _torch_device_equals(SEXP device1SEXP, SEXP device2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Device> >::type device1(device1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Device> >::type device2(device2SEXP);
    rcpp_result_gen = Rcpp::wrap(device_equals(device1, device2));
    return rcpp_result_gen;
END_RCPP
}
// device_set_index
void device_set_index(Rcpp::XPtr<torch::Device> device, std::int64_t index);
RcppExport SEXP _torch_device_set_index(SEXP deviceSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Device> >::type device(deviceSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type index(indexSEXP);
    device_set_index(device, index);
    return R_NilValue;
END_RCPP
}
// device_from_r
Rcpp::XPtr<torch::Device> device_from_r(std::string device, Rcpp::Nullable<std::int64_t> index);
RcppExport SEXP _torch_device_from_r(SEXP deviceSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type device(deviceSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::int64_t> >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(device_from_r(device, index));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_dimname
Rcpp::XPtr<torch::Dimname> cpp_torch_dimname(const std::string& str);
RcppExport SEXP _torch_cpp_torch_dimname(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_dimname(str));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_dimname_list
Rcpp::XPtr<std::vector<torch::Dimname>> cpp_torch_dimname_list(const Rcpp::List& x);
RcppExport SEXP _torch_cpp_torch_dimname_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_dimname_list(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dimname_to_string
std::string cpp_dimname_to_string(Rcpp::XPtr<torch::Dimname> x);
RcppExport SEXP _torch_cpp_dimname_to_string(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Dimname> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dimname_to_string(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dimname_list_to_string
std::vector<std::string> cpp_dimname_list_to_string(Rcpp::XPtr<std::vector<torch::Dimname>> x);
RcppExport SEXP _torch_cpp_dimname_list_to_string(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<std::vector<torch::Dimname>> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dimname_list_to_string(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dtype_to_string
std::string cpp_dtype_to_string(Rcpp::XPtr<torch::Dtype> dtype_ptr);
RcppExport SEXP _torch_cpp_dtype_to_string(SEXP dtype_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Dtype> >::type dtype_ptr(dtype_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dtype_to_string(dtype_ptr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_float32
Rcpp::XPtr<torch::Dtype> cpp_torch_float32();
RcppExport SEXP _torch_cpp_torch_float32() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_float32());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_float64
Rcpp::XPtr<torch::Dtype> cpp_torch_float64();
RcppExport SEXP _torch_cpp_torch_float64() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_float64());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_float16
Rcpp::XPtr<torch::Dtype> cpp_torch_float16();
RcppExport SEXP _torch_cpp_torch_float16() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_float16());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_uint8
Rcpp::XPtr<torch::Dtype> cpp_torch_uint8();
RcppExport SEXP _torch_cpp_torch_uint8() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_uint8());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_int8
Rcpp::XPtr<torch::Dtype> cpp_torch_int8();
RcppExport SEXP _torch_cpp_torch_int8() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_int8());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_int16
Rcpp::XPtr<torch::Dtype> cpp_torch_int16();
RcppExport SEXP _torch_cpp_torch_int16() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_int16());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_int32
Rcpp::XPtr<torch::Dtype> cpp_torch_int32();
RcppExport SEXP _torch_cpp_torch_int32() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_int32());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_int64
Rcpp::XPtr<torch::Dtype> cpp_torch_int64();
RcppExport SEXP _torch_cpp_torch_int64() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_int64());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_bool
Rcpp::XPtr<torch::Dtype> cpp_torch_bool();
RcppExport SEXP _torch_cpp_torch_bool() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_bool());
    return rcpp_result_gen;
END_RCPP
}
// cpp_layout_to_string
std::string cpp_layout_to_string(Rcpp::XPtr<torch::Layout> layout_ptr);
RcppExport SEXP _torch_cpp_layout_to_string(SEXP layout_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Layout> >::type layout_ptr(layout_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_layout_to_string(layout_ptr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_strided
Rcpp::XPtr<torch::Layout> cpp_torch_strided();
RcppExport SEXP _torch_cpp_torch_strided() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_strided());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_sparse_coo
Rcpp::XPtr<torch::Layout> cpp_torch_sparse_coo();
RcppExport SEXP _torch_cpp_torch_sparse_coo() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_sparse_coo());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_scalar
Rcpp::XPtr<torch::Scalar> cpp_torch_scalar(SEXP x);
RcppExport SEXP _torch_cpp_torch_scalar(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_scalar(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_tensor
Rcpp::XPtr<torch::Tensor> cpp_torch_tensor(SEXP x, std::vector<std::int64_t> dim, Rcpp::XPtr<torch::TensorOptions> options, bool requires_grad);
RcppExport SEXP _torch_cpp_torch_tensor(SEXP xSEXP, SEXP dimSEXP, SEXP optionsSEXP, SEXP requires_gradSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<std::int64_t> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::TensorOptions> >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type requires_grad(requires_gradSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_tensor(x, dim, options, requires_grad));
    return rcpp_result_gen;
END_RCPP
}
// cpp_as_array
Rcpp::List cpp_as_array(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_cpp_as_array(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_as_array(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_tensor_print
void cpp_torch_tensor_print(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_cpp_torch_tensor_print(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    cpp_torch_tensor_print(x);
    return R_NilValue;
END_RCPP
}
// cpp_torch_tensor_list
Rcpp::XPtr<std::vector<torch::Tensor>> cpp_torch_tensor_list(const Rcpp::List& x);
RcppExport SEXP _torch_cpp_torch_tensor_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_tensor_list(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_tensor_list_to_r_list
Rcpp::List cpp_tensor_list_to_r_list(Rcpp::XPtr<std::vector<torch::Tensor>> x);
RcppExport SEXP _torch_cpp_tensor_list_to_r_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<std::vector<torch::Tensor>> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_tensor_list_to_r_list(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_tensor_options
Rcpp::XPtr<torch::TensorOptions> cpp_torch_tensor_options(Rcpp::Nullable<Rcpp::XPtr<torch::Dtype>> dtype_ptr, Rcpp::Nullable<Rcpp::XPtr<torch::Layout>> layout_ptr, Rcpp::Nullable<Rcpp::XPtr<torch::Device>> device_ptr, Rcpp::Nullable<bool> requires_grad, Rcpp::Nullable<bool> pinned_memory);
RcppExport SEXP _torch_cpp_torch_tensor_options(SEXP dtype_ptrSEXP, SEXP layout_ptrSEXP, SEXP device_ptrSEXP, SEXP requires_gradSEXP, SEXP pinned_memorySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::XPtr<torch::Dtype>> >::type dtype_ptr(dtype_ptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::XPtr<torch::Layout>> >::type layout_ptr(layout_ptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::XPtr<torch::Device>> >::type device_ptr(device_ptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type requires_grad(requires_gradSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type pinned_memory(pinned_memorySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_tensor_options(dtype_ptr, layout_ptr, device_ptr, requires_grad, pinned_memory));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_torch_cpp_device_type_to_string", (DL_FUNC) &_torch_cpp_device_type_to_string, 1},
    {"_torch_cpp_device_index_to_int", (DL_FUNC) &_torch_cpp_device_index_to_int, 1},
    {"_torch_cpp_torch_device", (DL_FUNC) &_torch_cpp_torch_device, 2},
    {"_torch_get_device_index", (DL_FUNC) &_torch_get_device_index, 1},
    {"_torch_get_device_type", (DL_FUNC) &_torch_get_device_type, 1},
    {"_torch_device_has_index", (DL_FUNC) &_torch_device_has_index, 1},
    {"_torch_device_is_cuda", (DL_FUNC) &_torch_device_is_cuda, 1},
    {"_torch_device_is_cpu", (DL_FUNC) &_torch_device_is_cpu, 1},
    {"_torch_device_equals", (DL_FUNC) &_torch_device_equals, 2},
    {"_torch_device_set_index", (DL_FUNC) &_torch_device_set_index, 2},
    {"_torch_device_from_r", (DL_FUNC) &_torch_device_from_r, 2},
    {"_torch_cpp_torch_dimname", (DL_FUNC) &_torch_cpp_torch_dimname, 1},
    {"_torch_cpp_torch_dimname_list", (DL_FUNC) &_torch_cpp_torch_dimname_list, 1},
    {"_torch_cpp_dimname_to_string", (DL_FUNC) &_torch_cpp_dimname_to_string, 1},
    {"_torch_cpp_dimname_list_to_string", (DL_FUNC) &_torch_cpp_dimname_list_to_string, 1},
    {"_torch_cpp_dtype_to_string", (DL_FUNC) &_torch_cpp_dtype_to_string, 1},
    {"_torch_cpp_torch_float32", (DL_FUNC) &_torch_cpp_torch_float32, 0},
    {"_torch_cpp_torch_float64", (DL_FUNC) &_torch_cpp_torch_float64, 0},
    {"_torch_cpp_torch_float16", (DL_FUNC) &_torch_cpp_torch_float16, 0},
    {"_torch_cpp_torch_uint8", (DL_FUNC) &_torch_cpp_torch_uint8, 0},
    {"_torch_cpp_torch_int8", (DL_FUNC) &_torch_cpp_torch_int8, 0},
    {"_torch_cpp_torch_int16", (DL_FUNC) &_torch_cpp_torch_int16, 0},
    {"_torch_cpp_torch_int32", (DL_FUNC) &_torch_cpp_torch_int32, 0},
    {"_torch_cpp_torch_int64", (DL_FUNC) &_torch_cpp_torch_int64, 0},
    {"_torch_cpp_torch_bool", (DL_FUNC) &_torch_cpp_torch_bool, 0},
    {"_torch_cpp_layout_to_string", (DL_FUNC) &_torch_cpp_layout_to_string, 1},
    {"_torch_cpp_torch_strided", (DL_FUNC) &_torch_cpp_torch_strided, 0},
    {"_torch_cpp_torch_sparse_coo", (DL_FUNC) &_torch_cpp_torch_sparse_coo, 0},
    {"_torch_cpp_torch_scalar", (DL_FUNC) &_torch_cpp_torch_scalar, 1},
    {"_torch_cpp_torch_tensor", (DL_FUNC) &_torch_cpp_torch_tensor, 4},
    {"_torch_cpp_as_array", (DL_FUNC) &_torch_cpp_as_array, 1},
    {"_torch_cpp_torch_tensor_print", (DL_FUNC) &_torch_cpp_torch_tensor_print, 1},
    {"_torch_cpp_torch_tensor_list", (DL_FUNC) &_torch_cpp_torch_tensor_list, 1},
    {"_torch_cpp_tensor_list_to_r_list", (DL_FUNC) &_torch_cpp_tensor_list_to_r_list, 1},
    {"_torch_cpp_torch_tensor_options", (DL_FUNC) &_torch_cpp_torch_tensor_options, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_torch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
