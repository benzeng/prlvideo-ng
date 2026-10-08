
void FUN_100d727e0(void)

{
  DAT_1023188c0 = 0;
  if (DAT_1023188c8 != 0) {
    _CFRunLoopRemoveSource
              (DAT_1023188c8,DAT_1023188d0,*(undefined8 *)PTR__kCFRunLoopCommonModes_1021e1948);
    DAT_1023188c8 = 0;
  }
  if (DAT_1023188d0 != 0) {
    _CFRelease();
    DAT_1023188d0 = 0;
  }
  if (DAT_1023188d8 != 0) {
    _CFRelease();
    DAT_1023188d8 = 0;
  }
  if (DAT_1023188e0 != 0) {
    _notify_cancel(DAT_1023188e4);
    DAT_1023188e4 = 0;
    DAT_1023188e0 = 0;
  }
  return;
}

