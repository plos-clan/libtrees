#include "../include/rbtree.hpp"
#include <print>
#include <ranges>
#pragma once
#include <cstdio>

#include <chrono>
auto main( void ) -> int {
    using namespace libtrees;
    RedBlackTree< int, int > a { }; 


    std::chrono::high_resolution_clock s;
    auto now = s.now();
    for ( auto i : std::views::iota( 1, 100000 ) ) {
        a.insert( new RedBlackTree< int, int >::RBTreeNode( i, nullptr ) );
    }
    auto than = s.now( );
    std::println( "{}", than - now );
 
    
    // for ( auto &it : a ) {
    //     std::println( "{}", (int)it );
    // }
}