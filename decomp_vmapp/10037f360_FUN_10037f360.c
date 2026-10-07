
undefined8 FUN_10037f360(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x110);
  uVar5 = 0;
  uVar4 = *(uint *)(*(long *)(param_1 + 8) + 0x114) & uVar1 & 0xf;
  if (uVar4 != 0) {
    uVar6 = 0xbd;
    do {
      if ((uVar4 & 1) != 0) {
        uVar3 = (ulong)uVar6;
        if (uVar6 == 0xbd) {
          uVar3 = 0xa8;
        }
        uVar2 = *(uint *)(param_2 + 0x8270 + uVar3 * 4);
        (*DAT_1011c7520)(uVar5,uVar2 & 1,uVar2 >> 1 & 1,uVar2 >> 2 & 1,uVar2 >> 3 & 1);
        uVar5 = uVar5 + 1;
      }
      uVar6 = uVar6 + 1;
      uVar2 = uVar4 >> 1;
      uVar4 = uVar4 >> 1;
    } while (uVar2 != 0);
  }
  if ((uVar1 & 0x10) != 0) {
    (*DAT_1011c7520)(uVar5,1,0,0,0);
    uVar5 = uVar5 + 1;
  }
  uVar1 = *(uint *)(DAT_1011c8478 + 0xc);
  uVar4 = 5;
  if (uVar1 < 5) {
    uVar4 = uVar1;
  }
  if (uVar5 < uVar4) {
    uVar4 = 0xfffffffa;
    if (0xfffffffa < ~uVar1) {
      uVar4 = ~uVar1;
    }
    do {
      (*DAT_1011c7520)(uVar5,0,0,0,0);
      uVar5 = uVar5 + 1;
    } while (~uVar4 != uVar5);
  }
  return 0;
}

