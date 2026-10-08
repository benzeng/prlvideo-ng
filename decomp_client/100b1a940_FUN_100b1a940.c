
ulong FUN_100b1a940(long *param_1,ulong *param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = FUN_100b1ffb0(param_1[4]);
  uVar5 = (ulong)uVar2;
  uVar4 = *(ulong *)(param_1[4] + 0x20) % uVar5;
  lVar3 = *(long *)(*param_1 + -0x18);
  uVar1 = *(ulong *)(lVar3 + 0x58 + (long)param_1);
  if (uVar1 == 0xffffffffffffffff) {
    FUN_100df99c0("","dimg",0,"Error: GetNewBlockOffset, DataArea.End == -1");
    uVar6 = 0xffffffffffffffff;
  }
  else if (uVar1 < uVar4) {
    FUN_100df99c0("","dimg",0,"Error: GetNewBlockOffset, Oft=%llu < AlignOff=%u");
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = uVar1;
    if ((uVar1 - uVar4) % uVar5 != 0) {
      uVar6 = (uVar5 - 1) + (uVar1 - uVar4);
      uVar6 = (uVar6 - uVar6 % uVar5) + uVar4;
      FUN_100df99c0("","dimg",0,
                    "Warning: not aligned DataArea.End=%llu on GetNewBlockOffset call, try to align it to %llu"
                    ,uVar1,uVar6);
      lVar3 = *(long *)(*param_1 + -0x18);
    }
    *param_2 = uVar6 / *(ulong *)(lVar3 + 0x38 + (long)param_1);
    param_1[0x3012] = uVar6;
  }
  return uVar6;
}

