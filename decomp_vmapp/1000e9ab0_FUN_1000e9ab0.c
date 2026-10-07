
int FUN_1000e9ab0(uint *param_1,uint param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = uVar2;
  if (uVar1 < uVar2) {
    uVar4 = uVar1;
  }
  iVar3 = 0;
  if (uVar4 != 0) {
    param_1 = param_1 + 8;
    uVar4 = ~uVar2;
    if (~uVar2 < ~uVar1) {
      uVar4 = ~uVar1;
    }
    lVar5 = (ulong)~uVar4 << 6;
    iVar3 = 0;
    do {
      if ((*param_1 == param_2) && (*(short *)((long)param_1 + 6) == param_3)) {
        iVar3 = iVar3 + param_1[4];
      }
      param_1 = param_1 + 0x10;
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != 0);
  }
  return iVar3;
}

