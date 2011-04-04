template void apply_0ary_functor<tensor<float,host_memory_space> >(tensor<float,host_memory_space>&, const NullaryFunctor&);
template void apply_0ary_functor<tensor<float,host_memory_space> >(tensor<float,host_memory_space>&, const NullaryFunctor&, const tensor<float,host_memory_space>::value_type&);
template void apply_0ary_functor<tensor<unsigned int,host_memory_space> >(tensor<unsigned int,host_memory_space>&, const NullaryFunctor&);
template void apply_0ary_functor<tensor<unsigned int,host_memory_space> >(tensor<unsigned int,host_memory_space>&, const NullaryFunctor&, const tensor<unsigned int,host_memory_space>::value_type&);
template void apply_0ary_functor<tensor<int,host_memory_space> >(tensor<int,host_memory_space>&, const NullaryFunctor&);
template void apply_0ary_functor<tensor<int,host_memory_space> >(tensor<int,host_memory_space>&, const NullaryFunctor&, const tensor<int,host_memory_space>::value_type&);
template void apply_0ary_functor<tensor<unsigned char,host_memory_space> >(tensor<unsigned char,host_memory_space>&, const NullaryFunctor&);
template void apply_0ary_functor<tensor<unsigned char,host_memory_space> >(tensor<unsigned char,host_memory_space>&, const NullaryFunctor&, const tensor<unsigned char,host_memory_space>::value_type&);
template void apply_0ary_functor<tensor<signed char,host_memory_space> >(tensor<signed char,host_memory_space>&, const NullaryFunctor&);
template void apply_0ary_functor<tensor<signed char,host_memory_space> >(tensor<signed char,host_memory_space>&, const NullaryFunctor&, const tensor<signed char,host_memory_space>::value_type&);
namespace detail{ template void apply_scalar_functor<tensor<float,host_memory_space>,tensor<float,host_memory_space>,float >(tensor<float,host_memory_space>&,const tensor<float,host_memory_space>&, const ScalarFunctor&,const int&, const float&, const float&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned int,host_memory_space>,tensor<unsigned int,host_memory_space>,unsigned int >(tensor<unsigned int,host_memory_space>&,const tensor<unsigned int,host_memory_space>&, const ScalarFunctor&,const int&, const unsigned int&, const unsigned int&);}
namespace detail{ template void apply_scalar_functor<tensor<int,host_memory_space>,tensor<int,host_memory_space>,int >(tensor<int,host_memory_space>&,const tensor<int,host_memory_space>&, const ScalarFunctor&,const int&, const int&, const int&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned char,host_memory_space>,tensor<unsigned char,host_memory_space>,unsigned char >(tensor<unsigned char,host_memory_space>&,const tensor<unsigned char,host_memory_space>&, const ScalarFunctor&,const int&, const unsigned char&, const unsigned char&);}
namespace detail{ template void apply_scalar_functor<tensor<signed char,host_memory_space>,tensor<signed char,host_memory_space>,signed char >(tensor<signed char,host_memory_space>&,const tensor<signed char,host_memory_space>&, const ScalarFunctor&,const int&, const signed char&, const signed char&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned char,host_memory_space>,tensor<float,host_memory_space>,float >(tensor<unsigned char,host_memory_space>&,const tensor<float,host_memory_space>&, const ScalarFunctor&,const int&, const float&, const float&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned char,host_memory_space>,tensor<unsigned int,host_memory_space>,unsigned int >(tensor<unsigned char,host_memory_space>&,const tensor<unsigned int,host_memory_space>&, const ScalarFunctor&,const int&, const unsigned int&, const unsigned int&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned char,host_memory_space>,tensor<int,host_memory_space>,int >(tensor<unsigned char,host_memory_space>&,const tensor<int,host_memory_space>&, const ScalarFunctor&,const int&, const int&, const int&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned char,host_memory_space>,tensor<signed char,host_memory_space>,signed char >(tensor<unsigned char,host_memory_space>&,const tensor<signed char,host_memory_space>&, const ScalarFunctor&,const int&, const signed char&, const signed char&);}
namespace detail{ template void apply_binary_functor<tensor<float,host_memory_space>,tensor<float,host_memory_space>,tensor<float,host_memory_space>,float >(tensor<float,host_memory_space>&,const tensor<float,host_memory_space>&,const tensor<float,host_memory_space>&, const BinaryFunctor&,const int&, const float&, const float&);}
namespace detail{ template void apply_binary_functor<tensor<unsigned int,host_memory_space>,tensor<unsigned int,host_memory_space>,tensor<unsigned int,host_memory_space>,unsigned int >(tensor<unsigned int,host_memory_space>&,const tensor<unsigned int,host_memory_space>&,const tensor<unsigned int,host_memory_space>&, const BinaryFunctor&,const int&, const unsigned int&, const unsigned int&);}
namespace detail{ template void apply_binary_functor<tensor<int,host_memory_space>,tensor<int,host_memory_space>,tensor<int,host_memory_space>,int >(tensor<int,host_memory_space>&,const tensor<int,host_memory_space>&,const tensor<int,host_memory_space>&, const BinaryFunctor&,const int&, const int&, const int&);}
namespace detail{ template void apply_binary_functor<tensor<unsigned char,host_memory_space>,tensor<unsigned char,host_memory_space>,tensor<unsigned char,host_memory_space>,unsigned char >(tensor<unsigned char,host_memory_space>&,const tensor<unsigned char,host_memory_space>&,const tensor<unsigned char,host_memory_space>&, const BinaryFunctor&,const int&, const unsigned char&, const unsigned char&);}
namespace detail{ template void apply_binary_functor<tensor<signed char,host_memory_space>,tensor<signed char,host_memory_space>,tensor<signed char,host_memory_space>,signed char >(tensor<signed char,host_memory_space>&,const tensor<signed char,host_memory_space>&,const tensor<signed char,host_memory_space>&, const BinaryFunctor&,const int&, const signed char&, const signed char&);}
template bool has_inf<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template bool has_nan<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template float minimum<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template float maximum<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template float sum<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template float norm1<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template float norm2<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template float mean<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template float var<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template typename tensor<float,host_memory_space>::index_type     arg_max<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template typename tensor<float,host_memory_space>::index_type     arg_min<tensor<float,host_memory_space> >(const tensor<float,host_memory_space>&);
template bool has_inf<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template bool has_nan<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template float minimum<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template float maximum<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template float sum<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template float norm1<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template float norm2<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template float mean<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template float var<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template typename tensor<unsigned int,host_memory_space>::index_type     arg_max<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template typename tensor<unsigned int,host_memory_space>::index_type     arg_min<tensor<unsigned int,host_memory_space> >(const tensor<unsigned int,host_memory_space>&);
template bool has_inf<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template bool has_nan<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template float minimum<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template float maximum<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template float sum<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template float norm1<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template float norm2<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template float mean<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template float var<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template typename tensor<int,host_memory_space>::index_type     arg_max<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template typename tensor<int,host_memory_space>::index_type     arg_min<tensor<int,host_memory_space> >(const tensor<int,host_memory_space>&);
template bool has_inf<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template bool has_nan<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template float minimum<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template float maximum<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template float sum<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template float norm1<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template float norm2<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template float mean<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template float var<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template typename tensor<unsigned char,host_memory_space>::index_type     arg_max<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template typename tensor<unsigned char,host_memory_space>::index_type     arg_min<tensor<unsigned char,host_memory_space> >(const tensor<unsigned char,host_memory_space>&);
template bool has_inf<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template bool has_nan<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template float minimum<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template float maximum<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template float sum<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template float norm1<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template float norm2<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template float mean<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template float var<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template typename tensor<signed char,host_memory_space>::index_type     arg_max<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template typename tensor<signed char,host_memory_space>::index_type     arg_min<tensor<signed char,host_memory_space> >(const tensor<signed char,host_memory_space>&);
template void apply_0ary_functor<tensor<float, dev_memory_space> >(tensor<float, dev_memory_space>&, const NullaryFunctor&);
template void apply_0ary_functor<tensor<float, dev_memory_space> >(tensor<float, dev_memory_space>&, const NullaryFunctor&, const tensor<float, dev_memory_space>::value_type&);
template void apply_0ary_functor<tensor<unsigned int, dev_memory_space> >(tensor<unsigned int, dev_memory_space>&, const NullaryFunctor&);
template void apply_0ary_functor<tensor<unsigned int, dev_memory_space> >(tensor<unsigned int, dev_memory_space>&, const NullaryFunctor&, const tensor<unsigned int, dev_memory_space>::value_type&);
template void apply_0ary_functor<tensor<int, dev_memory_space> >(tensor<int, dev_memory_space>&, const NullaryFunctor&);
template void apply_0ary_functor<tensor<int, dev_memory_space> >(tensor<int, dev_memory_space>&, const NullaryFunctor&, const tensor<int, dev_memory_space>::value_type&);
template void apply_0ary_functor<tensor<unsigned char, dev_memory_space> >(tensor<unsigned char, dev_memory_space>&, const NullaryFunctor&);
template void apply_0ary_functor<tensor<unsigned char, dev_memory_space> >(tensor<unsigned char, dev_memory_space>&, const NullaryFunctor&, const tensor<unsigned char, dev_memory_space>::value_type&);
template void apply_0ary_functor<tensor<signed char, dev_memory_space> >(tensor<signed char, dev_memory_space>&, const NullaryFunctor&);
template void apply_0ary_functor<tensor<signed char, dev_memory_space> >(tensor<signed char, dev_memory_space>&, const NullaryFunctor&, const tensor<signed char, dev_memory_space>::value_type&);
namespace detail{ template void apply_scalar_functor<tensor<float, dev_memory_space>,tensor<float, dev_memory_space>,float >(tensor<float, dev_memory_space>&,const tensor<float, dev_memory_space>&, const ScalarFunctor&,const int&, const float&, const float&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned int, dev_memory_space>,tensor<unsigned int, dev_memory_space>,unsigned int >(tensor<unsigned int, dev_memory_space>&,const tensor<unsigned int, dev_memory_space>&, const ScalarFunctor&,const int&, const unsigned int&, const unsigned int&);}
namespace detail{ template void apply_scalar_functor<tensor<int, dev_memory_space>,tensor<int, dev_memory_space>,int >(tensor<int, dev_memory_space>&,const tensor<int, dev_memory_space>&, const ScalarFunctor&,const int&, const int&, const int&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned char, dev_memory_space>,tensor<unsigned char, dev_memory_space>,unsigned char >(tensor<unsigned char, dev_memory_space>&,const tensor<unsigned char, dev_memory_space>&, const ScalarFunctor&,const int&, const unsigned char&, const unsigned char&);}
namespace detail{ template void apply_scalar_functor<tensor<signed char, dev_memory_space>,tensor<signed char, dev_memory_space>,signed char >(tensor<signed char, dev_memory_space>&,const tensor<signed char, dev_memory_space>&, const ScalarFunctor&,const int&, const signed char&, const signed char&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned char, dev_memory_space>,tensor<float, dev_memory_space>,float >(tensor<unsigned char, dev_memory_space>&,const tensor<float, dev_memory_space>&, const ScalarFunctor&,const int&, const float&, const float&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned char, dev_memory_space>,tensor<unsigned int, dev_memory_space>,unsigned int >(tensor<unsigned char, dev_memory_space>&,const tensor<unsigned int, dev_memory_space>&, const ScalarFunctor&,const int&, const unsigned int&, const unsigned int&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned char, dev_memory_space>,tensor<int, dev_memory_space>,int >(tensor<unsigned char, dev_memory_space>&,const tensor<int, dev_memory_space>&, const ScalarFunctor&,const int&, const int&, const int&);}
namespace detail{ template void apply_scalar_functor<tensor<unsigned char, dev_memory_space>,tensor<signed char, dev_memory_space>,signed char >(tensor<unsigned char, dev_memory_space>&,const tensor<signed char, dev_memory_space>&, const ScalarFunctor&,const int&, const signed char&, const signed char&);}
namespace detail{ template void apply_binary_functor<tensor<float, dev_memory_space>,tensor<float, dev_memory_space>,tensor<float, dev_memory_space>,float >(tensor<float, dev_memory_space>&,const tensor<float, dev_memory_space>&,const tensor<float, dev_memory_space>&, const BinaryFunctor&,const int&, const float&, const float&);}
namespace detail{ template void apply_binary_functor<tensor<unsigned int, dev_memory_space>,tensor<unsigned int, dev_memory_space>,tensor<unsigned int, dev_memory_space>,unsigned int >(tensor<unsigned int, dev_memory_space>&,const tensor<unsigned int, dev_memory_space>&,const tensor<unsigned int, dev_memory_space>&, const BinaryFunctor&,const int&, const unsigned int&, const unsigned int&);}
namespace detail{ template void apply_binary_functor<tensor<int, dev_memory_space>,tensor<int, dev_memory_space>,tensor<int, dev_memory_space>,int >(tensor<int, dev_memory_space>&,const tensor<int, dev_memory_space>&,const tensor<int, dev_memory_space>&, const BinaryFunctor&,const int&, const int&, const int&);}
namespace detail{ template void apply_binary_functor<tensor<unsigned char, dev_memory_space>,tensor<unsigned char, dev_memory_space>,tensor<unsigned char, dev_memory_space>,unsigned char >(tensor<unsigned char, dev_memory_space>&,const tensor<unsigned char, dev_memory_space>&,const tensor<unsigned char, dev_memory_space>&, const BinaryFunctor&,const int&, const unsigned char&, const unsigned char&);}
namespace detail{ template void apply_binary_functor<tensor<signed char, dev_memory_space>,tensor<signed char, dev_memory_space>,tensor<signed char, dev_memory_space>,signed char >(tensor<signed char, dev_memory_space>&,const tensor<signed char, dev_memory_space>&,const tensor<signed char, dev_memory_space>&, const BinaryFunctor&,const int&, const signed char&, const signed char&);}
template bool has_inf<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template bool has_nan<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template float minimum<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template float maximum<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template float sum<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template float norm1<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template float norm2<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template float mean<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template float var<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template typename tensor<float, dev_memory_space>::index_type     arg_max<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template typename tensor<float, dev_memory_space>::index_type     arg_min<tensor<float, dev_memory_space> >(const tensor<float, dev_memory_space>&);
template bool has_inf<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template bool has_nan<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template float minimum<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template float maximum<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template float sum<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template float norm1<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template float norm2<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template float mean<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template float var<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template typename tensor<unsigned int, dev_memory_space>::index_type     arg_max<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template typename tensor<unsigned int, dev_memory_space>::index_type     arg_min<tensor<unsigned int, dev_memory_space> >(const tensor<unsigned int, dev_memory_space>&);
template bool has_inf<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template bool has_nan<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template float minimum<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template float maximum<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template float sum<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template float norm1<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template float norm2<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template float mean<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template float var<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template typename tensor<int, dev_memory_space>::index_type     arg_max<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template typename tensor<int, dev_memory_space>::index_type     arg_min<tensor<int, dev_memory_space> >(const tensor<int, dev_memory_space>&);
template bool has_inf<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template bool has_nan<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template float minimum<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template float maximum<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template float sum<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template float norm1<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template float norm2<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template float mean<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template float var<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template typename tensor<unsigned char, dev_memory_space>::index_type     arg_max<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template typename tensor<unsigned char, dev_memory_space>::index_type     arg_min<tensor<unsigned char, dev_memory_space> >(const tensor<unsigned char, dev_memory_space>&);
template bool has_inf<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);
template bool has_nan<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);
template float minimum<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);
template float maximum<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);
template float sum<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);
template float norm1<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);
template float norm2<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);
template float mean<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);
template float var<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);
template typename tensor<signed char, dev_memory_space>::index_type     arg_max<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);
template typename tensor<signed char, dev_memory_space>::index_type     arg_min<tensor<signed char, dev_memory_space> >(const tensor<signed char, dev_memory_space>&);