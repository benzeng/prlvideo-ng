
undefined8 FUN_100814870(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x130) != 0) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) {
    uVar1 = FUN_10080ee80(param_1);
    if ((uVar1 & 0x3000) == 0) {
      uVar1 = FUN_10080ee80(param_1);
      uVar2 = 0;
      if ((uVar1 & 0x4000) == 0) {
        uVar2 = 1;
        FUN_100814240(*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x130),1);
      }
    }
  }
  return uVar2;
}

