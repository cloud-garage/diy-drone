# DIY-DRONE CODE
software for the µ-controller

## DIY_DRONE

This folder contains all documented code.

## Libraries

### Arduino-Scheduler-ATmega328P

The original library with examples, etc. can be found at [github.com/mikaelpatel/Arduino-Scheduler](https://github.com/mikaelpatel/Arduino-Scheduler).

Arduino-Scheduler-ATmega328P has small code additiona in order to make the library work with an _ATmega328P_:

Scheduler.h:127:
``` c++
#elif defined(__AVR_ATmega328P__)
  /** Default stack size. Stack max dynamically checked against heap end. */
  static const size_t DEFAULT_STACK_SIZE = 128;
  static const size_t DEFAULT_MAIN_STACK_SIZE = 256;
```

Scheduler.cpp:38:
``` c++
#elif defined(__AVR_ATmega328P__)
extern int __heap_start, *__brkval;
extern char* __malloc_heap_end;
extern size_t __malloc_margin;
```

Scheduler.cpp:105:
``` c++
#elif defined(__AVR_ATmega328P__)
  // Check that the task can be allocated
  int HEAPEND = (__brkval == 0 ? (int) &__heap_start : (int) __brkval);
  int STACKSTART = ((int) stack) - stackSize;
  HEAPEND += __malloc_margin;
  if (STACKSTART < HEAPEND) return (false);

  // Adjust heap limit
  __malloc_heap_end = (char*) STACKSTART;
```