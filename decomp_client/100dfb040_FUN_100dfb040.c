
undefined8 FUN_100dfb040(undefined1 *param_1)

{
  ulong in_RAX;
  undefined8 uVar1;
  undefined8 uStack_18;
  
  if (DAT_102319fb2 == '\x01') {
    *param_1 = DAT_102319fb3;
  }
  else {
    uStack_18 = in_RAX & 0xffffffffffffff;
    uVar1 = FUN_100dfaf30((long)&uStack_18 + 7);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    DAT_102319fb3 = uStack_18._7_1_;
    *param_1 = uStack_18._7_1_;
    DAT_102319fb2 = '\x01';
  }
  return 0;
}

