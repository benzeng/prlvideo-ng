
ulong FUN_10038ebb0(ulong param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = (ulong)param_2;
    uVar1 = param_1 + uVar2 * 2;
    if (uVar2 != 1) {
      lVar3 = uVar2 * 2 + -2;
      uVar4 = 0;
      do {
        if (((*(short *)(param_1 + lVar3) == 0x2f) || (*(short *)(param_1 + lVar3) == 0x5c)) &&
           (uVar4 = uVar4 + 1, param_3 < uVar4)) {
          param_1 = param_1 + lVar3 + 2;
          break;
        }
        lVar3 = lVar3 + -2;
      } while (lVar3 != 0);
    }
    uVar2 = 0;
    if (param_1 < uVar1) {
      uVar2 = param_1;
    }
  }
  return uVar2;
}

