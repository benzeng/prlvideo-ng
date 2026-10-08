
ulong FUN_100b1dac0(long *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x160))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  param_2[0] = 0;
  param_2[1] = 0;
  if (lVar3 == -1) {
    FUN_100df99c0("","dimg",0,"VHD: Get file size failed");
    uVar4 = 0xffffffffffffffff;
  }
  else {
    param_1[0x3012] = lVar3;
    uVar4 = lVar3 - 0x200;
    uVar1 = *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
    if (uVar4 % uVar1 != 0) {
      uVar4 = -uVar1 & lVar3 + -0x201 + uVar1;
    }
    uVar2 = (uint)(uVar4 / uVar1);
    *param_2 = uVar2;
    *param_2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  }
  return uVar4;
}

