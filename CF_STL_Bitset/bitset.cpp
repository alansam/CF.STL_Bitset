//
//  bitset.cpp
//  CF_STL_Bitset
//
//  Created by Alan Sampson on 3/17/21.
//
//  MARK: - Reference.
//  @see: https://en.cppreference.com/w/cpp/utility/bitset
//

#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <string>
#include <bit>
#include <climits>
#include <cstdint>

using namespace std::literals::string_literals;

//  MARK: - Definitions.
auto U_reference(int argc, char const * argv[]) -> decltype(argc);
auto U_bitset_constructor(int argc, char const * argv[]) -> decltype(argc);
auto U_operator_compare(int argc, char const * argv[]) -> decltype(argc);
auto U_operator_element(int argc, char const * argv[]) -> decltype(argc);
auto U_all_any_none(int argc, char const * argv[]) -> decltype(argc);
auto U_count(int argc, char const * argv[]) -> decltype(argc);
auto U_size(int argc, char const * argv[]) -> decltype(argc);
auto U_operator_binary(int argc, char const * argv[]) -> decltype(argc);
auto U_operator_shift(int argc, char const * argv[]) -> decltype(argc);
auto U_set(int argc, char const * argv[]) -> decltype(argc);
auto U_flip(int argc, char const * argv[]) -> decltype(argc);
auto U_to_things(int argc, char const * argv[]) -> decltype(argc);
auto U_std_operator_and_or_xor(int argc, char const * argv[]) -> decltype(argc);
auto U_std_operator_shift(int argc, char const * argv[]) -> decltype(argc);
auto U_std_hash(int argc, char const * argv[]) -> decltype(argc);

#if (__cplusplus >= 201707L)
auto B_endian(int argc, char const * argv[]) -> decltype(argc);
auto B_rotl(int argc, char const * argv[]) -> decltype(argc);
auto B_rotr(int argc, char const * argv[]) -> decltype(argc);
auto B_countl_zero(int argc, char const * argv[]) -> decltype(argc);
auto B_countl_one(int argc, char const * argv[]) -> decltype(argc);
auto B_countr_zero(int argc, char const * argv[]) -> decltype(argc);
auto B_countr_one(int argc, char const * argv[]) -> decltype(argc);
auto B_popcount(int argc, char const * argv[]) -> decltype(argc);
#endif  /* (__cplusplus >= 201707L) */

#if (__cplusplus > 201707L)
auto B_bit_cast(int argc, char const * argv[]) -> decltype(argc);
auto B_has_single_bit(int argc, char const * argv[]) -> decltype(argc);
auto B_bit_ceil(int argc, char const * argv[]) -> decltype(argc);
auto B_bit_floor(int argc, char const * argv[]) -> decltype(argc);
auto B_bit_width(int argc, char const * argv[]) -> decltype(argc);
#endif  /* (__cplusplus > 201707L) */

//  MARK: - Local Constants.
namespace konst {

inline
auto delimiter(char const dc = '-', size_t sl = 80) -> std::string const {
  auto const dlm = std::string(sl, dc);
  return dlm;
}

static
auto const dlm = delimiter();

static
auto const dot = delimiter('.');

} /* namespace konst */

//  MARK: - Implementation.
/*
 *  MARK: main()
 */
int main(int argc, const char * argv[]) {
  std::cout << "CF_STL_Bitset"s << std::endl;
  std::cout << "C++ Version: "s << __cplusplus << std::endl;

  std::cout << '\n' << konst::dlm << std::endl;
  U_reference(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_bitset_constructor(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_operator_compare(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_operator_element(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_all_any_none(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_count(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_size(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_operator_binary(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_operator_shift(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_set(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_flip(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_to_things(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_std_operator_and_or_xor(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_std_operator_shift(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  U_std_hash(argc, argv);

#if (__cplusplus >= 201707L)
  std::cout << '\n' << konst::dlm << std::endl;
  B_endian(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_rotl(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_rotr(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_countl_zero(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_countl_one(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_countr_zero(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_countr_one(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_popcount(argc, argv);
#endif  /* (__cplusplus >= 201707L) */

#if (__cplusplus > 201707L)
  std::cout << '\n' << konst::dlm << std::endl;
  B_bit_cast(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_has_single_bit(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_bit_ceil(argc,  argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_bit_floor(argc, argv);

  std::cout << '\n' << konst::dlm << std::endl;
  B_bit_width(argc, argv);
#endif  /* (__cplusplus > 201707L) */

  return 0;
}

//  MARK: - U_reference
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_reference()
 */
auto U_reference(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset<N>::reference"s << std::endl;
  {

    auto bsv = std::vector<std::bitset<4>> { 0b1110, 0b0000, 0b1111, 0b0100, 0b1011, };

    for (auto bs : bsv) {
      std::bitset<4>::reference ref = bs[2]; // auto ref = bs[2];

      auto info = [&](int n_) {
        std::cout << n_ << ") bs: "s << bs << "; ref bit: "s << ref << '\n';
      };

      std::cout << bs << '\n';

      info(1);
      ref = false;
      info(2);
      ref = true;
      info(3);
      ref.flip();
      info(4);
      ref = bs[1]; // operator=( const reference& x )
      info(5);

      std::cout << "6) ~ref bit: "s << ~ref << '\n';
      std::cout << '\n';
    }

    auto bsb = std::vector<std::bitset<4>> { 0b0010, 0b1011, 0b1000, 0b0001, };

    for (auto bs : bsb) {
      std::bitset<4>::reference r0 = bs[0]; // auto ref = bs[2];
      std::bitset<4>::reference r1 = bs[1]; // auto ref = bs[2];
      std::bitset<4>::reference r2 = bs[2]; // auto ref = bs[2];
      std::bitset<4>::reference r3 = bs[3]; // auto ref = bs[2];
      std::cout << bs << ' '
                << ": '0': "s << r0 << ' '
                << ", '1': "s << r1 << ' '
                << ", '2': "s << r2 << ' '
                << ", '3': "s << r3 << '\n';

      std::cout << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_bitset_constructor
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_bitset_constructor()
 */
auto U_bitset_constructor(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - constructor"s << std::endl;
  {
    // empty constructor
    std::bitset<8> b1; // [0,0,0,0,0,0,0,0]

    // unsigned long long constructor
    std::bitset<8>  b2(42);         // [0,0,1,0,1,0,1,0]
    std::bitset<70> bl(ULLONG_MAX); // [0,0,0,0,0,0,1,1,1,...,1,1,1] in C++11
    std::bitset<8>  bs(0xfff0);     // [1,1,1,1,0,0,0,0]

    // string constructor
    std::string bit_string = "110010"s;
    std::bitset<8> b3(bit_string);       // [0,0,1,1,0,0,1,0]
    std::bitset<8> b4(bit_string, 2);    // [0,0,0,0,0,0,1,0]
    std::bitset<8> b5(bit_string, 2, 3); // [0,0,0,0,0,0,0,1]

    // string constructor using custom zero/one digits
    std::string alpha_bit_string = "aBaaBBaB"s;
    std::bitset<8> b6(alpha_bit_string, 0, alpha_bit_string.size(), 'a', 'B');
    // [0,1,0,0,1,1,0,1]

    // char* constructor using custom digits
    std::bitset<8> b7("XXXXYYYY"s, 8, 'X', 'Y'); // [0,0,0,0,1,1,1,1]

    std::cout <<   "b1: "s << b1 << "\nb2: "s << b2 << "\nbl: "s << bl
              << "\nbs: "s << bs << "\nb3: "s << b3 << "\nb4: "s << b4
              << "\nb5: "s << b5 << "\nb6: "s << b6 << "\nb7: "s << b7 << '\n';

    std::cout << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_operator_compare
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_operator_compare()
 */
auto U_operator_compare(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - operator==, operator!="s << std::endl;
  {
    std::bitset<4> b1( 0b0011 );
    std::bitset<4> b2( b1 );
    std::bitset<4> b3( 0b0100 );

    std::cout << std::boolalpha;
    std::cout << b1 << " == "s << b2 << ": "s << (b1 == b2) << '\n';
    std::cout << b1 << " == "s << b3 << ": "s << (b1 == b3) << '\n';
    std::cout << b1 << " != "s << b3 << ": "s << (b1 != b3) << '\n';
    std::cout << std::noboolalpha;

//    b1 == std::bitset<3>{}; // error: incompatible types
    std::cout << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_operator_element
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_operator_element()
 */
auto U_operator_element(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - operator[]"s << std::endl;
  {
    std::bitset<8> b1( 42 );
    for (std::size_t i_(0); i_ < b1.size(); ++i_) {
      std::cout << "b1[" << i_ << "]: " << b1[i_] << '\n';
    }
    b1[0] = true; // modifies the first bit through bitset::reference
    std::cout << "After setting bit 0, the bitset holds " << b1 << '\n';

    std::cout << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_test
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_test()
 */
auto U_test(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - test"s << std::endl;
  {
    std::bitset<10> b1("1111010000");

    size_t idx = 0;
    while (idx < b1.size() && !b1.test(idx)) {
      ++idx;
    }

    if (idx < b1.size()) {
      std::cout << "first set bit at index "s << idx << '\n';
    }
    else {
      std::cout << "no set bits\n"s;
    }

    std::cout << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_all_any_none
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_all_any_none()
 */
auto U_all_any_none(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - all, any, none"s << std::endl;
  {
    std::bitset<4> b1("0000"s);
    std::bitset<4> b2("0101"s);
    std::bitset<4> b3("1111"s);

    std::cout << "bitset"s << ' ' << " all"s << ' ' << " any"s << ' ' << "none\n"s
              << std::setw(6) << b1 << ' '
              << std::setw(4) << b1.all() << ' '
              << std::setw(4) << b1.any() << ' '
              << std::setw(4) << b1.none()
              << '\n'
              << std::setw(6) << b2 << ' '
              << std::setw(4) << b2.all() << ' '
              << std::setw(4) << b2.any() << ' '
              << std::setw(4) << b2.none()
              << '\n'
              << std::setw(6) << b3 << ' '
              << std::setw(4) << b3.all() << ' '
              << std::setw(4) << b3.any() << ' '
              << std::setw(4) << b3.none()
              << '\n';

    std::cout << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_count
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_count()
 */
auto U_count(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - count"s << std::endl;
  {
    std::bitset<8> bs8("00010010"s);
    std::cout << "initial value: "s << bs8 << '\n';

    // find the first unset bit
    std::size_t idx = 0;
    while (idx < bs8.size() && bs8.test(idx)) {
      ++idx;
    }

    // continue setting bits until half the bitset is filled
    while (idx < bs8.size() && bs8.count() < bs8.size() / 2) {
      bs8.set(idx);
      std::cout << "setting bit "s << idx << ": "s << bs8 << '\n';
      while (idx < bs8.size() && bs8.test(idx)) {
        ++idx;
      }
    }
    std::cout << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_size
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_size()
 */
auto U_size(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - size"s << std::endl;
  {
    std::cout << "std::bitset<0x400> size: "s
              << std::setw(4) << std::bitset<0x400>().size() << '\n';
    std::cout << "std::bitset<0x008> size: "s
              << std::setw(4) << std::bitset<0x008>().size() << '\n';
    std::cout << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_operator_binary
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_operator_binary()
 */
auto U_operator_binary(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - operator&=, operator|=, etc."s << std::endl;
  {
    std::bitset<16> dest;
    std::string pattern_str = "1001"s;
    std::bitset<16> pattern(pattern_str);

    std::cout << pattern << '\n' << ~pattern << '\n';

    for (size_t ix = 0, ie = dest.size() / pattern_str.size(); ix != ie; ++ix) {
      dest <<= pattern_str.size();
      std::cout << dest << " <<= "s << std::setw(4) << pattern_str.size() << '\n';
      dest |= pattern;
      std::cout << dest << " !=  "s << pattern << '\n';
    }
    std::cout << dest << '\n' << ~dest << '\n';
    std::cout << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_operator_shift
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_operator_shift()
 */
auto U_operator_shift(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - operator<<=, operator<<, etc."s << std::endl;
  {
    std::bitset<8> bs8("01110010"s);
    std::cout << "initial value: "s << bs8 << '\n';

    auto shift = 0UL;
    while (bs8.any()) {
      while (!bs8.test(0)) {
        bs8 >>= 1;
        ++shift;
      }
      std::cout << "shifted "s << shift << ' ' << bs8 << '\n';
      bs8 >>= 1;
      shift = 1UL;
    }
    std::cout << "final value: "s << bs8 << '\n';
    std::cout << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_set
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_set()
 */
auto U_set(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - set/reset"s << std::endl;
  {
    std::bitset<8> bs8;
    std::cout << bs8 << '\n';
    std::cout << bs8.set() << '\n';
    std::cout << bs8.reset() << '\n';

    for (size_t ix = 1; ix < bs8.size(); ix += 2) {
      bs8.set(ix);
    }
    std::cout << bs8 << '\n';

    bs8.reset();
    size_t ix(2);
    std::cout << bs8 << '\n';
    bs8.set(ix);
    std::cout << "after bit "s << ix << " set\n"s << bs8 << '\n';
    std::cout << '\n';

    bs8 = 42;
//    std::bitset<8> b(42);
    std::cout << "Bitset is         "s << bs8 << '\n';
    bs8.reset(1);
    std::cout << "After b.reset(1): "s << bs8 << '\n';
    bs8.reset();
    std::cout << "After b.reset():  "s << bs8 << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_flip
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_flip()
 */
auto U_flip(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - flip"s << std::endl;
  {
    std::bitset<4> bs4;

    std::cout << bs4 << '\n';
    std::cout << bs4.flip(0) << '\n';
    std::cout << bs4.flip(2) << '\n';
    std::cout << bs4.flip() << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_to_string
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_to_string()
 */
auto U_to_things(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - to_string, to_ulong, to_ullong"s << std::endl;
  {
    std::bitset<8> bs8(42);
    std::cout << bs8.to_string() << '\n'
              << bs8.to_string('*') << '\n'
              << bs8.to_string('O', 'X') << '\n';
    std::cout << '\n';
  }

  {
    for (unsigned long i_ = 0; i_ < 10; ++i_) {
      std::bitset<5> bs5(i_);
      std::bitset<5> b_inverted = ~bs5;
      std::cout << i_ << '\t' << bs5 << '\t' << b_inverted << '\t'
                << b_inverted.to_ulong() << '\n';
    }

    std::cout << std::bitset<32>().to_string('-') << '\n';

    try {
      std::bitset<128> bs128(42);
      std::cout << bs128.to_ulong() << '\n';
      bs128.flip();
      std::cout << bs128.to_ulong() << '\n'; // throws
    }
    catch (const std::overflow_error & ex) {
      std::cout << "ex: " << ex.what() << '\n';
    }
    std::cout << '\n';
  }

  {
    std::bitset<std::numeric_limits<unsigned long long>::digits> bull(
      0x123456789abcdef0LL
    );

    std::cout << bull << "  " << std::hex << bull.to_ullong() << '\n';
    bull.flip();
    std::cout << bull << "  " << bull.to_ullong() << '\n';    std::cout << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_std_operator_and_or_xor
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_std_operator_and_or_xor()
 */
auto U_std_operator_and_or_xor(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - std::operator&, |, ^"s << std::endl;
  {
    std::bitset<4> b1("0110");
    std::bitset<4> b2("0011");

    std::cout << b1 << " & "s << b2 << ": "s << (b1 & b2) << '\n';
    std::cout << b1 << " | "s << b2 << ": "s << (b1 | b2) << '\n';
    std::cout << b1 << " ^ "s << b2 << ": "s << (b1 ^ b2) << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_std_operator_shift
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_std_operator_shift()
 */
auto U_std_operator_shift(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bitset - std::operator<<, >>"s << std::endl;
  {
    std::string bit_string = "001101"s;
    std::istringstream bit_stream(bit_string);

    std::bitset<3> b1;
    bit_stream >> b1; // reads "001", stream still holds "101"
    std::cout << b1 << '\n';

    std::bitset<8> b2;
    bit_stream >> b2; // reads "101", populates the 8-bit set as "00000101"
    std::cout << b2 << '\n';
  }
  std::cout << std::endl;

  return 0;
}

//  MARK: - U_std_hash
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: U_std_hash()
 */
auto U_std_hash(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::endian - std::hash"s << std::endl;
  {
    std::bitset<4> b1(0b1001);
    std::bitset<4> b2(0b1010);
    std::bitset<4> b3(b2);

    std::hash<std::bitset<4>> hash_fn;

    size_t h1 = hash_fn(b1);
    size_t h2 = hash_fn(b2);
    size_t h3 = hash_fn(b3);

    auto hashv = std::vector<size_t> { h1, h2, h3, };
    for (auto hash : hashv) {
      std::cout << std::setw(21) << hash
                << std::hex
                << std::setw(20) << hash
                << std::dec
                << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}

#if (__cplusplus >= 201707L)
//  MARK: - B_endian
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_endian()
 */
auto B_endian(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::endian"s << std::endl;
  {
    if constexpr (std::endian::native == std::endian::big) {
      std::cout << "big-endian"s << '\n';
    }
    else if constexpr (std::endian::native == std::endian::little) {
      std::cout << "little-endian"s << '\n';
    }
    else {
      std::cout << "mixed-endian"s << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus >= 201707L) */

#if (__cplusplus > 201707L)
//  MARK: - B_bit_cast
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  MARK: namespace bbc
namespace bbc {

constexpr double f64v = 19880124.0;
constexpr auto u64v = std::bit_cast<std::uint64_t>(f64v);
 
constexpr std::uint64_t u64v2 = 0x3fe9000000000000ull;
constexpr auto f64v2 = std::bit_cast<double>(u64v2);

} /* namespace bbc */

//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_bit_cast()
 */
auto B_bit_cast(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::B_bit_cast"s << std::endl;
  {
    std::cout
        << std::fixed <<f64v << "f64.to_bits() == 0x"s
        << std::hex << u64v << "u64\n"s;

    std::cout
        << "f64::from_bits(0x"s << std::hex << u64v2 << "u64) == "s
        << std::fixed << f64v2 << "f64\n"s;
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus > 201707L) */

#if (__cplusplus > 201707L)
//  MARK: - B_has_single_bit
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_has_single_bit()
 */
auto B_has_single_bit(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::has_single_bit"s << std::endl;
  {
    std::cout << std::boolalpha;
    for (auto i_ = 0u; i_ < 10u; ++i_) {
      std::cout << "has_single_bit( "s << std::bitset<4>(i_) << " ) = "s
                << std::has_single_bit(i_) // `ispow2` before P1956R1
                << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus > 201707L) */

#if (__cplusplus > 201707L)
//  MARK: - B_bit_ceil
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_bit_ceil()
 */
auto B_bit_ceil(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bit_ceil"s << std::endl;
  {
    using bin = std::bitset<8>;

    for (unsigned x_{0}; x_ != 10; ++x_) {
        auto const z_ = std::bit_ceil(x_); // `ceil2` before P1956R1

        std::cout << "bit_ceil("s << bin(x_) << ") = "s << bin(z_) << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus > 201707L) */

#if (__cplusplus > 201707L)
//  MARK: - B_bit_floor
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_bit_floor()
 */
auto B_bit_floor(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bit_floor"s << std::endl;
  {
    using bin = std::bitset<8>;

    for (unsigned x_ = 0; x_ != 10; ++x_)
    {
      auto const z_ = std::bit_floor(x_); // `floor2` before P1956R1

      std::cout << "bit_floor(" << bin(x_) << ") = " << bin(z_) << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus > 201707L) */

#if (__cplusplus > 201707L)
//  MARK: - B_bit_width
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_bit_width()
 */
auto B_bit_width(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::bit_width"s << std::endl;
  {
    for (unsigned x_{0}; x_ != 8; ++x_) {
      std::cout
          << "bit_width( "
          << std::bitset<4>{x_} << " ) = "
          << std::bit_width(x_) << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus > 201707L) */

#if (__cplusplus >= 201707L)
//  MARK: - B_rotl
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_rotl()
 */
auto B_rotl(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::rotl"s << std::endl;
  {
    std::uint8_t i_ = 0b00011101;
    std::cout << "i          = " << std::bitset<8>(i_) << '\n';
    std::cout << "rotl(i, 0) = " << std::bitset<8>(std::rotl(i_,  0)) << '\n';
    std::cout << "rotl(i, 1) = " << std::bitset<8>(std::rotl(i_,  1)) << '\n';
    std::cout << "rotl(i, 4) = " << std::bitset<8>(std::rotl(i_,  4)) << '\n';
    std::cout << "rotl(i, 9) = " << std::bitset<8>(std::rotl(i_,  9)) << '\n';
    std::cout << "rotl(i,-1) = " << std::bitset<8>(std::rotl(i_, -1)) << '\n';
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus >= 201707L) */

#if (__cplusplus >= 201707L)
//  MARK: - B_rotr
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_rotr()
 */
auto B_rotr(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::rotr"s << std::endl;
  {
    std::uint8_t i_ = 0b00011101;
    std::cout << "i          = " << std::bitset<8>(i_) << '\n';
    std::cout << "rotr(i, 0) = " << std::bitset<8>(std::rotr(i_,  0)) << '\n';
    std::cout << "rotr(i, 1) = " << std::bitset<8>(std::rotr(i_,  1)) << '\n';
    std::cout << "rotr(i, 9) = " << std::bitset<8>(std::rotr(i_,  9)) << '\n';
    std::cout << "rotr(i,-1) = " << std::bitset<8>(std::rotr(i_, -1)) << '\n';
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus >= 201707L) */

#if (__cplusplus >= 201707L)
//  MARK: - B_countl_zero
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_countl_zero()
 */
auto B_countl_zero(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::countl_zero"s << std::endl;
  {
    for (std::uint8_t i_ : { 0, 0b11111111, 0b00011100 }) {
      std::cout << "countl_zero(0b" << std::bitset<8>(i_) << ") = "
                << std::countl_zero(i_) << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus >= 201707L) */

#if (__cplusplus >= 201707L)
//  MARK: - B_countl_one
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_countl_one()
 */
auto B_countl_one(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::countl_one"s << std::endl;
  {
    for (std::uint8_t i_ : { 0, 0b11111111, 0b11100011 }) {
      std::cout << "countl_one(0b" << std::bitset<8>(i_) << ") = "
                << std::countl_one(i_) << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus >= 201707L) */

#if (__cplusplus >= 201707L)
//  MARK: - B_countr_zero
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_countr_zero()
 */
auto B_countr_zero(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::countr_zero"s << std::endl;
  {
    for (std::uint8_t i_ : { 0, 0b11111111, 0b00011100 }) {
      std::cout << "countr_zero(0b" << std::bitset<8>(i_) << ") = "
                << std::countr_zero(i_) << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus >= 201707L) */

#if (__cplusplus >= 201707L)
//  MARK: - B_countr_one
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_countr_one()
 */
auto B_countr_one(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::countr_one"s << std::endl;
  {
    for (std::uint8_t i_ : { 0, 0b11111111, 0b11100011 }) {
      std::cout << "countr_one(0b" << std::bitset<8>(i_) << ") = "
                << std::countr_one(i_) << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus >= 201707L) */

#if (__cplusplus >= 201707L)
//  MARK: - B_countr_one
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
//  ================================================================================
//  ....+....|....+....|....+....|....+....|....+....|....+....|....+....|....+....|
/*
 *  MARK: B_countr_one()
 */
auto B_popcount(int argc, char const * argv[]) -> decltype(argc) {
  std::cout << "In "s << __func__ << std::endl;

  // ....+....|....+....|....+....|....+....|....+....|....+....|
  std::cout << konst::dot << '\n';
  std::cout << "std::popcount"s << std::endl;
  {
    for (std::uint8_t i_ : { 0, 0b11111111, 0b00011101 }) {
      std::cout << "popcount(0b" << std::bitset<8>(i_) << ") = "
                << std::popcount(i_) << '\n';
    }
  }
  std::cout << std::endl;

  return 0;
}
#endif  /* (__cplusplus >= 201707L) */
