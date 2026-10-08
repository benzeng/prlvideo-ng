
void FUN_1001c6400(void)

{
  undefined8 uVar1;
  
  DAT_1023120fb = 0;
  (**(code **)(*DAT_102312128 + 0x70))();
  uVar1 = _CFRunLoopGetCurrent();
  _CFRunLoopRemoveSource(uVar1,DAT_102312168,*(undefined8 *)PTR__kCFRunLoopDefaultMode_1021e1950);
  _CFRelease(DAT_102312168);
  (**(code **)(*DAT_102312128 + 0x48))();
  (**(code **)(*DAT_102312128 + 0x18))();
  (**(code **)(*DAT_102312120 + 0x48))();
  if (DAT_10230ffd0 < 3) {
    return;
  }
  FUN_100df99c0("AIRCTL","prl_client_app",3,"AIRC closed");
  return;
}

