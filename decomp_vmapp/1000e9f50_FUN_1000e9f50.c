
long FUN_1000e9f50(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar4 = uVar2;
  if (uVar5 < uVar2) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    param_1 = param_1 + 0xb;
    uVar4 = ~uVar2;
    if (~uVar2 < ~uVar5) {
      uVar4 = ~uVar5;
    }
    lVar3 = (ulong)~uVar4 << 6;
    do {
      if ((*param_1 & 0x800) != 0) {
        *(long *)(param_1 + 5) = param_2;
        uVar5 = param_1[1];
        if (param_1[1] < param_1[2]) {
          uVar5 = param_1[2];
        }
        uVar6 = (ulong)(uVar5 + 0xfff & 0xfffff000);
        lVar1 = uVar6 + param_2;
        param_2 = uVar6 + 0x1000 + param_2;
        if ((*param_1 & 8) == 0) {
          param_2 = lVar1;
        }
      }
      param_1 = param_1 + 0x10;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
  }
  return param_2;
}

