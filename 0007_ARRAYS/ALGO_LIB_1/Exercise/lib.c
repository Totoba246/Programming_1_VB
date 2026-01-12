#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

#include "lib.h"

bool allOf(int32_t *array, size_t length, int32_t value)
{
    for(size_t i = 0; i<length;i++)
    {
        if (!(array[i] == value))
        {
            return 0;
        }
    }
    return 1;
}

bool anyOf(int32_t *array, size_t length, int32_t value)
{
    bool ret = 0;
    for(size_t i = 0; i<length;i++)
    {
        if (array[i] == value)
        {
            return 1;
        }
    }
    return 0;
}

bool noneOf(int32_t *array, size_t length, int32_t value)
{
     bool ret = 0;
    for(size_t i = 0; i<length;i++)
    {
        if (array[i] == value)
        {
            return 0;
        }
    }
    return 1;
}

size_t count(int32_t *array, size_t length, int32_t value)
{
    size_t cnt = 0;
    for(size_t i = 0; i<length;i++)
    {
        if (array[i] == value)
        {
            cnt++;
        }
    }
    return cnt;
}
