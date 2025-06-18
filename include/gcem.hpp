/*################################################################################
  ##
  ##   Copyright (C) 2016-2024 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#ifndef _gcem_HPP
#define _gcem_HPP

#include "gcem_incl/gcem_options.hpp"

namespace gcem
{
    namespace library
    {
        #include "gcem_incl/quadrature/gauss_legendre_50.hpp"

        #include "gcem_incl/is_inf.hpp"
        #include "gcem_incl/is_nan.hpp"
        #include "gcem_incl/is_finite.hpp"
        
        #include "gcem_incl/signbit.hpp"
        #include "gcem_incl/copysign.hpp"
        #include "gcem_incl/neg_zero.hpp"
        #include "gcem_incl/sgn.hpp"

        #include "gcem_incl/abs.hpp"
    }

    using library::signbit;
    using library::copysign;
    using library::sgn;
    using library::abs;
    
    namespace library {
        #include "gcem_incl/fabs.hpp"
        #include "gcem_incl/fabsf.hpp"
        #include "gcem_incl/fabsl.hpp"
        #include "gcem_incl/ceil.hpp"
        #include "gcem_incl/floor.hpp"
        #include "gcem_incl/trunc.hpp"
        #include "gcem_incl/is_odd.hpp"
        #include "gcem_incl/is_even.hpp"
        #include "gcem_incl/max.hpp"
        #include "gcem_incl/min.hpp"
        #include "gcem_incl/sqrt.hpp"
        #include "gcem_incl/inv_sqrt.hpp"
        #include "gcem_incl/hypot.hpp"

        #include "gcem_incl/find_exponent.hpp"
        #include "gcem_incl/find_fraction.hpp"
        #include "gcem_incl/find_whole.hpp"
        #include "gcem_incl/mantissa.hpp"
        #include "gcem_incl/round.hpp"
        #include "gcem_incl/fmod.hpp"

        #include "gcem_incl/pow_integral.hpp"
        #include "gcem_incl/exp.hpp"
        #include "gcem_incl/expm1.hpp"
        #include "gcem_incl/log.hpp"
        #include "gcem_incl/log1p.hpp"
        #include "gcem_incl/log2.hpp"
        #include "gcem_incl/log10.hpp"
        #include "gcem_incl/pow.hpp"

        #include "gcem_incl/gcd.hpp"
        #include "gcem_incl/lcm.hpp"

        #include "gcem_incl/tan.hpp"
        #include "gcem_incl/cos.hpp"
        #include "gcem_incl/sin.hpp"

        #include "gcem_incl/atan.hpp"
        #include "gcem_incl/atan2.hpp"
        #include "gcem_incl/acos.hpp"
        #include "gcem_incl/asin.hpp"

        #include "gcem_incl/tanh.hpp"
        #include "gcem_incl/cosh.hpp"
        #include "gcem_incl/sinh.hpp"

        #include "gcem_incl/atanh.hpp"
        #include "gcem_incl/acosh.hpp"
        #include "gcem_incl/asinh.hpp"

        #include "gcem_incl/binomial_coef.hpp"
        #include "gcem_incl/lgamma.hpp"
        #include "gcem_incl/tgamma.hpp"
        #include "gcem_incl/factorial.hpp"
        #include "gcem_incl/lbeta.hpp"
        #include "gcem_incl/beta.hpp"
        #include "gcem_incl/lmgamma.hpp"
        #include "gcem_incl/log_binomial_coef.hpp"

        #include "gcem_incl/erf.hpp"
        #include "gcem_incl/erf_inv.hpp"
        #include "gcem_incl/incomplete_beta.hpp"
        #include "gcem_incl/incomplete_beta_inv.hpp"
        #include "gcem_incl/incomplete_gamma.hpp"
        #include "gcem_incl/incomplete_gamma_inv.hpp"
    }

    using library::ceil;
    using library::floor;
    using library::trunc;
    using library::max;
    using library::min;
    using library::sqrt;
    using library::inv_sqrt;
    using library::hypot;
    using library::round;
    using library::fmod;
    using library::exp;
    using library::expm1;
    using library::log;
    using library::log1p;
    using library::log2;
    using library::log10;
    using library::pow;
    using library::gcd;
    using library::lcm;
    using library::tan;
    using library::cos;
    using library::sin;
    using library::atan;
    using library::atan2;
    using library::acos;
    using library::asin;
    using library::tanh;
    using library::cosh;
    using library::sinh;
    using library::atanh;
    using library::acosh;
    using library::asinh;
    using library::binomial_coef;
    using library::lgamma;
    using library::tgamma;
    using library::factorial;
    using library::lbeta;
    using library::beta;
    using library::lmgamma;
    using library::log_binomial_coef;
    using library::erf;
    using library::erf_inv;
    using library::incomplete_beta;
    using library::incomplete_beta_inv;
    using library::incomplete_gamma;
    using library::incomplete_gamma_inv;
}

#endif
