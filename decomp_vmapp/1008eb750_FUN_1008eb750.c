
void FUN_1008eb750(void)

{
  DAT_1011c3528 = 0;
  if (DAT_1011c3530 != 0) {
    _CFRunLoopRemoveSource
              (DAT_1011c3530,DAT_1011c3538,*(undefined8 *)PTR__kCFRunLoopCommonModes_100ba23e0);
    DAT_1011c3530 = 0;
  }
  if (DAT_1011c3538 != 0) {
    _CFRelease();
    DAT_1011c3538 = 0;
  }
  if (DAT_1011c3540 != 0) {
    _CFRelease();
    DAT_1011c3540 = 0;
  }
  if (DAT_1011c3548 != 0) {
    _notify_cancel(DAT_1011c354c);
    DAT_1011c354c = 0;
    DAT_1011c3548 = 0;
  }
  return;
}

