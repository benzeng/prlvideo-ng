
undefined8 FUN_1008e49a0(undefined1 *param_1)

{
  ulong in_RAX;
  undefined8 uVar1;
  undefined8 uStack_18;
  
  if (DAT_1011c3522 == '\x01') {
    *param_1 = DAT_1011c3523;
  }
  else {
    uStack_18 = in_RAX & 0xffffffffffffff;
    uVar1 = FUN_1008e4890((long)&uStack_18 + 7);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    DAT_1011c3523 = uStack_18._7_1_;
    *param_1 = uStack_18._7_1_;
    DAT_1011c3522 = '\x01';
  }
  return 0;
}

