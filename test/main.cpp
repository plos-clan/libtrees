#include "../include/rbtree.hpp"
#include <print>
#include <ranges>
auto main( void ) -> int {
    using namespace libtrees;
    RedBlackTree< int, int > a { };
    for ( auto i : std::views::iota( 1, 100 ) ) {
        a.insert( *new RedBlackTree< int, int >::RBTreeNode( i, new int( i ) ) );
    }
    std::println( "{}", *a.search( 3 )->_data );
    std::println( "{}", *a.search( 4 )->_data );
    for ( auto &it : a ) {
        std::println( "{}", (int)it );
    }
}