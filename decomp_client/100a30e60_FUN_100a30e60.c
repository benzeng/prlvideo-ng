
undefined8 FUN_100a30e60(long param_1)

{
  if (*(long *)(param_1 + 0x198) != 0) {
    _CFRunLoopTimerInvalidate();
    _CFRelease(*(undefined8 *)(param_1 + 0x198));
  }
  _CFRunLoopRemoveSource
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)PTR__kCFRunLoopCommonModes_1021e1948);
  _CFRunLoopSourceInvalidate(*(undefined8 *)(param_1 + 0x38));
  _CFRelease(*(undefined8 *)(param_1 + 0x38));
  FUN_100a2ff20(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x18) = 0;
  return 1;
}

