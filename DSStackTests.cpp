//
// Created by Sammy Timmins on 10/20/20.
//

#include "catch.hpp"
#include "DSStack.h"
#include "DSString.h"

TEST_CASE("DSStack Class with Primitive Data Types", "[DSStack]")
{
    DSStack<int> integers;
    DSStack<char> characters;
    DSStack<int> emptyStack;

    for(int i = 1; i <= 10; i++)
    {
        integers.push(i);
    }

    for(char i = 'a'; i <= 'j'; i++)
    {
        characters.push(i);
    }

    SECTION("peek() on primitives")
    {
        REQUIRE((integers.peek() == 10));
        integers.pop();
        REQUIRE((integers.peek() == 9));
        REQUIRE((characters.peek() == 'j'));
        characters.pop();
        REQUIRE((characters.peek() == 'i'));
    }

    SECTION("push() on primitives")
    {
        integers.push(11);
        REQUIRE((integers.peek() == 11));
        REQUIRE((integers.getSize() == 11));

        characters.push('k');
        REQUIRE((characters.peek() == 'k'));
        REQUIRE((characters.getSize() == 11));
    }

    SECTION("pop() on primitives")
    {
        integers.pop();
        REQUIRE((integers.getSize() == 9));
        REQUIRE((integers.peek() == 9));
        integers.pop();
        REQUIRE((integers.getSize() == 8));
        REQUIRE((integers.peek() == 8));

        characters.pop();
        REQUIRE((characters.getSize() == 9));
        REQUIRE((characters.peek() == 'i'));
        characters.pop();
        REQUIRE((characters.getSize() == 8));
        REQUIRE((characters.peek() == 'h'));
    }

    SECTION("Copy constructor with Primitives")
    {
        DSStack<int> integersCopy(integers);
        DSStack<char> charactersCopy(characters);
        DSStack<int> emptyStackCopy(emptyStack);

        REQUIRE((integersCopy.peek() == 10));
        REQUIRE((integersCopy.getSize() == 10));
        integersCopy.pop();
        REQUIRE((integersCopy.peek() == 9));
        REQUIRE((integersCopy.getSize() == 9));

        REQUIRE((charactersCopy.peek() == 'j'));
        REQUIRE((charactersCopy.getSize() == 10));
        charactersCopy.pop();
        REQUIRE((charactersCopy.peek() == 'i'));
        REQUIRE((charactersCopy.getSize() == 9));

        REQUIRE((emptyStackCopy.getSize() == 0));
    }

    SECTION("Overloaded assignment operator for primitives")
    {
        DSStack<int> integersCopy;
        integersCopy = integers;
        DSStack<char> charactersCopy = characters;
        DSStack<int> emptyStackCopy = emptyStack;
        DSStack<int> emptyStackCopyTwo;
        emptyStackCopyTwo = emptyStack;

        REQUIRE((integersCopy.peek() == 10));
        REQUIRE((integersCopy.getSize() == 10));
        integersCopy.pop();
        REQUIRE((integersCopy.peek() == 9));
        REQUIRE((integersCopy.getSize() == 9));

        REQUIRE((charactersCopy.peek() == 'j'));
        REQUIRE((charactersCopy.getSize() == 10));
        charactersCopy.pop();
        REQUIRE((charactersCopy.peek() == 'i'));
        REQUIRE((charactersCopy.getSize() == 9));

        REQUIRE((emptyStackCopy.getSize() == 0));
        REQUIRE((emptyStackCopyTwo.getSize() == 0));
    }

    SECTION("isEmpty() with primitives")
    {
        REQUIRE((emptyStack.isEmpty()));
        REQUIRE(!(integers.isEmpty()));
    }

    SECTION("getSize with primitives")
    {
        REQUIRE((integers.getSize() == 10));
        REQUIRE((characters.getSize() == 10));
        REQUIRE((emptyStack.getSize() == 0));
    }
}

TEST_CASE("DSStack tests with non-primitive data types", "[DSStack]")
{
    DSStack<DSString> strings, emptyStack;

    strings.push("Hello");
    strings.push("there");
    strings.push("\n");
    strings.push(" ");

    SECTION("peek() with non-primitives")
    {
        REQUIRE((strings.peek() == " "));
        strings.pop();
        REQUIRE((strings.peek() == "\n"));
        strings.pop();
        REQUIRE((strings.peek() == "there"));
    }

    SECTION("push() on non-primitives")
    {
        strings.push("test");
        REQUIRE((strings.peek() == "test"));
        REQUIRE((strings.getSize() == 5));
        strings.push("test number two");
        REQUIRE((strings.peek() == "test number two"));
        REQUIRE((strings.getSize() == 6));
    }

    SECTION("pop() on non-primitives")
    {
        strings.pop();
        REQUIRE((strings.peek() == "\n"));
        REQUIRE((strings.getSize() == 3));
        strings.pop();
        REQUIRE((strings.peek() == "there"));
        REQUIRE((strings.getSize() == 2));
    }

    SECTION("Copy constructor with non-primitives")
    {
        DSStack<DSString> stringsCopy(strings), emptyStackCopy(emptyStack);

        REQUIRE((stringsCopy.getSize() == 4));
        REQUIRE((stringsCopy.peek() == " "));
        stringsCopy.pop();
        REQUIRE((stringsCopy.getSize() == 3));
        REQUIRE((stringsCopy.peek() == "\n"));

        REQUIRE((emptyStackCopy.getSize() == 0));
    }

    SECTION("Overloaded Assignment operator with non-primitives")
    {
        DSStack<DSString> stringsCopyOne = strings, emptyStackCopyOne = emptyStack;
        DSStack<DSString> stringsCopyTwo, emptyStackCopyTwo;
        stringsCopyTwo = strings;
        emptyStackCopyTwo = emptyStack;

        REQUIRE((stringsCopyOne.getSize() == 4));
        REQUIRE((stringsCopyTwo.getSize() == 4));
        REQUIRE((stringsCopyOne.peek() == " "));
        REQUIRE((stringsCopyTwo.peek() == " "));
        stringsCopyOne.pop();
        stringsCopyTwo.pop();
        REQUIRE((stringsCopyOne.getSize() == 3));
        REQUIRE((stringsCopyTwo.getSize() == 3));
        REQUIRE((stringsCopyOne.peek() == "\n"));
        REQUIRE((stringsCopyTwo.peek() == "\n"));

        REQUIRE((emptyStackCopyOne.getSize() == 0));
        REQUIRE((emptyStackCopyTwo.getSize() == 0));
    }

    SECTION("isEmpty with non-primitives")
    {
        REQUIRE((emptyStack.isEmpty()));
        REQUIRE(!(strings.isEmpty()));
    }

    SECTION("getSize() with non-primitives")
    {
        REQUIRE((strings.getSize() == 4));
        strings.pop();
        REQUIRE((strings.getSize() == 3));
        REQUIRE((emptyStack.getSize() == 0));
    }
}

