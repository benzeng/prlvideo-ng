
void FUN_100711f30(long param_1,int param_2,undefined8 param_3)

{
  if (param_2 < -0x1ffffd00) {
    if (param_2 == -0x1ffffd90) {
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_100712a50(param_1);
        _IOCancelPowerChange(*(undefined4 *)(param_1 + 0x28),param_3);
        return;
      }
    }
    else {
      if (param_2 != -0x1ffffd80) {
        return;
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      FUN_1007129f0(param_1);
    }
    _IOAllowPowerChange(*(undefined4 *)(param_1 + 0x28),param_3);
    return;
  }
  if (param_2 != -0x1ffffd00) {
    if (param_2 != -0x1ffffce0) {
      return;
    }
    FUN_100712a30(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_100712a10(param_1);
  return;
}

