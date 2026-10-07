
ulong FUN_1008a2f20(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001008a2f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar1 + 0xb8))(param_1,param_2);
      return uVar3;
    }
    if (*(long *)(lVar1 + 0x48) != 0) {
      uVar4 = FUN_1008948f0();
      uVar2 = FUN_1008b1bf0(uVar4,param_2);
      FUN_1008b1c30(uVar4);
      return (ulong)uVar2;
    }
  }
  FUN_100887ce0(0xd,0xa3,0xa7,"i2d_pr.c",0x4c);
  return 0xffffffff;
}

