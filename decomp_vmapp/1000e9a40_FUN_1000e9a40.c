
uint * FUN_1000e9a40(uint *param_1,uint param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = uVar2;
    if (uVar1 < uVar2) {
      uVar3 = uVar1;
    }
    if (uVar3 != 0) {
      param_1 = param_1 + 8;
      uVar3 = ~uVar2;
      if (~uVar2 < ~uVar1) {
        uVar3 = ~uVar1;
      }
      lVar4 = (ulong)~uVar3 << 6;
      do {
        if (((*param_1 == param_2) && (*(short *)((long)param_1 + 6) == param_3)) &&
           ((short)param_1[1] == 0)) {
          return param_1;
        }
        param_1 = param_1 + 0x10;
        lVar4 = lVar4 + -0x40;
      } while (lVar4 != 0);
    }
  }
  return (uint *)0x0;
}

