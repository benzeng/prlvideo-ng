
void FUN_1001c5f40(void)

{
  (*DAT_102312100)(1,DAT_102312108);
  _IOObjectRelease(DAT_102312148);
  _IOObjectRelease(DAT_10231214c);
  _CFRunLoopRemoveSource
            (DAT_102312130,DAT_102312140,*(undefined8 *)PTR__kCFRunLoopDefaultMode_1021e1950);
  _IONotificationPortDestroy(DAT_102312138);
  if (DAT_1023120fa != '\0') {
    FUN_1001c64a0(&DAT_1023120e0,DAT_1023120e8);
    DAT_1023120f0 = 0;
    DAT_1023120e0 = &DAT_1023120e8;
    DAT_1023120e8 = 0;
    (**(code **)(*DAT_102312120 + 0x18))();
    DAT_102312120 = (long *)0x0;
    DAT_1023120fa = '\0';
  }
  DAT_1023120f9 = 0;
  DAT_1023120f8 = 0;
  return;
}

