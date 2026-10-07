
uint * FUN_1000e9cf0(uint *param_1,uint param_2,short param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar4 = uVar2;
    if (uVar1 < uVar2) {
      uVar4 = uVar1;
    }
    if (uVar4 != 0) {
      param_1 = param_1 + 8;
      uVar4 = ~uVar2;
      if (~uVar2 < ~uVar1) {
        uVar4 = ~uVar1;
      }
      lVar5 = (ulong)~uVar4 << 6;
      do {
        if (((*param_1 == param_2) && (*(short *)((long)param_1 + 6) == param_3)) &&
           ((short)param_1[1] == 0)) {
          LOCK();
          param_1[2] = param_1[2] + 1;
          UNLOCK();
          lVar5 = *(long *)(param_1 + 0xc);
          lVar3 = *param_4;
          if (lVar3 == 0) {
            *param_4 = lVar5;
            return param_1;
          }
          if (lVar5 != 0) {
            if (lVar3 == lVar5) {
              return param_1;
            }
            return (uint *)0x0;
          }
          *(long *)(param_1 + 0xc) = lVar3;
          return param_1;
        }
        param_1 = param_1 + 0x10;
        lVar5 = lVar5 + -0x40;
      } while (lVar5 != 0);
    }
  }
  return (uint *)0x0;
}

