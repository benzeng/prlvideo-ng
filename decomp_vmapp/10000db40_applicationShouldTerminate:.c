
/* Function Stack Size: 0x18 bytes */

unsigned_long_long MacAppDelegate::applicationShouldTerminate_(ID param_1,SEL param_2,ID param_3)

{
  return (ulong)(*(char *)(param_1 + needStop) != '\0');
}

