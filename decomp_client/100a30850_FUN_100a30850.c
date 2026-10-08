
void FUN_100a30850(undefined8 *param_1)

{
  _CFRunLoopRemoveSource(*param_1,param_1[1],*(undefined8 *)PTR__kCFRunLoopCommonModes_1021e1948);
  _CFRunLoopSourceInvalidate(param_1[1]);
  _CFRelease(param_1[1]);
  return;
}

