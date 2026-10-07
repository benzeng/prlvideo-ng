
uint * FUN_1000e9950(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = uVar2;
  if (uVar1 < uVar2) {
    uVar4 = uVar1;
  }
  if (uVar4 != 0) {
    param_1 = param_1 + 0xc;
    uVar4 = ~uVar2;
    if (~uVar2 < ~uVar1) {
      uVar4 = ~uVar1;
    }
    lVar5 = (ulong)~uVar4 << 6;
    do {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 != 0) && (uVar3 <= param_2)) {
        uVar1 = param_1[1];
        if (param_1[1] < *param_1) {
          uVar1 = *param_1;
        }
        if (param_2 < uVar1 + uVar3) {
          return param_1 + -4;
        }
      }
      param_1 = param_1 + 0x10;
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != 0);
  }
  return (uint *)0x0;
}

