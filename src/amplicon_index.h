// This is a part of Prettry - tool developed to trim amplicon sequences
// Author: Timofey Prodanov

#pragma once

#include <vector>
#include <map>
#include <istream>
#include <ostream>

#include "read.h"

namespace atlas {

using amplicon_pairs = std::vector<std::pair<std::string, std::string>>;

struct amplicon_index {

    amplicon_index(amplicon_pairs const& amplicons, size_t k);
    bool contains(u64 kmer) const;
    std::vector<int> const& get_all_amplicons(u64 kmer) const;
    size_t get_k() const;

private:

    void add_amplicon(std::string const& amplicon, int amplicon_number);

    size_t k_;
    u64 modulo_;
    std::map<u64, std::vector<int>> dict_;

};

amplicon_pairs create_amplicon_pairs(std::istream& in);

} // namespace atlas
