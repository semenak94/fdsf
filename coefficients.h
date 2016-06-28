﻿#pragma once

#include <vector>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/math/special_functions/gamma.hpp>

namespace constants {
    using namespace boost::multiprecision;

    typedef cpp_dec_float_50 bmp_real;
    typedef std::vector<cpp_dec_float_50> mp_coefficients;

    // Значение pi
    const bmp_real mp_pi = boost::math::constants::pi<bmp_real>();

    const mp_coefficients a_k1 = { 0.2715113138214362780964488,
                                   0.0562661238060587633169245,
                                   0.0067420740469345689743873,
                                   0.0005169505155333205859985,
                                   0.0000194771836765773190602 };

    const mp_coefficients b_k1 = { 0.0215113138214352840651584,
                                   0.0231105175729721417901084,
                                   0.0003669081577365413477999,
                                   0.0000610424408732720110769 };

    const mp_coefficients a_k2 = { 0.2263816364340698560028783,
                                   0.0533684335574798857246766,
                                   0.0062904756340795211604491,
                                   0.0005023228274452983506998,
                                   0.0000189379675088061004880 };

    const mp_coefficients b_k2 = { 0.0388816364340691133155655,
                                   0.0243043998742774445085992,
                                   0.0006290985326433190105734,
                                   0.0000657018161945458806177 };

    const mp_coefficients a_k3 = { 0.1583482145380455955096383,
                                   0.0460645149909308107878344,
                                   0.0048861379108841469134267,
                                   0.0004336733305971515517559,
                                   0.0000173435613795895152436 };

    const mp_coefficients b_k3 = { 0.0125148812047107612191739,
                                   0.0266693407000929631393759,
                                   0.0003285431094547362504004,
                                   0.0000820910787890062715299 };

    const mp_coefficients a_k4 = { 0.0560148791230902149024568,
                                   0.0351117957891800867706741,
                                   0.0021834386943672331415760,
                                   0.0002464861525522946634693,
                                   0.0000092228177886669241259 };

    const mp_coefficients b_k4 = { -0.0611726208769112866900252,
                                    0.0279968542816146833953639,
                                   -0.0007512148294307540141223,
                                    0.0000860680747142919882956 };

} // namespace coefficients