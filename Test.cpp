#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;



TEST_CASE("TEST CASES SNOWMAN") 
{
    CHECK(snowman(12114411) == ("_===_\n(...)\n( : )\n( : )"));
    CHECK(snowman(11114411) == ("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11111111) == ("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(snowman(22222222) == ("___\n.....\n\\(o.o)/\n(] [)\n(\" \")"));
    CHECK(snowman(33333333) == ("_\n/_\\\n(O_O)\n/(> <)\\\n(___)"));
    CHECK(snowman(44444444) == ("___\n(_*_)\n(- -)\n(   )\n(   )"));
    CHECK(snowman(12341234) == ("_===_\n(O.-)/\n<(> <)\n(   )"));
    CHECK(snowman(11114411) == ("_===_\n(.,.)\n( : )\n( : )"));
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(1221151));
    CHECK_THROWS(snowman(12121611));
    CHECK_THROWS(snowman(11107111));
    CHECK_THROWS(snowman(11181121));
    CHECK_THROWS(snowman(11911111));
    CHECK_THROWS(snowman(10111111));
    CHECK_THROWS(snowman(51111211));
    CHECK_THROWS(snowman(9));
    CHECK_THROWS(snowman(99));
    CHECK_THROWS(snowman(999));
    CHECK_THROWS(snowman(9999));
    CHECK_THROWS(snowman(-5));

}


