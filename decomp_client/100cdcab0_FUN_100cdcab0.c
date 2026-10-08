
void FUN_100cdcab0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _CFDataGetLength(*param_1);
  if (lVar1 < 0xb0) {
    if (lVar1 == 0x90) {
      return;
    }
    if (lVar1 == 0xa0) {
      return;
    }
  }
  else {
    if (lVar1 == 0xb0) {
      return;
    }
    if (lVar1 == 0xf8) {
      return;
    }
  }
  if (DAT_10230ffd0 < 3) {
    return;
  }
  uVar2 = _CFDataGetLength(*param_1);
  FUN_100df99c0("","hid",3,"[CHIDMacHook] Unknown Event Type %lu",uVar2);
  return;
}

