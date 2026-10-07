
undefined8
FUN_1007584e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (DAT_1011bf930 != DAT_1011bf938) {
    do {
      lVar2 = DAT_1011bf928;
      if (uVar3 != 0) {
        lVar2 = *(long *)(uVar3 * 0x40 + -0x38 + DAT_1011bf930) +
                *(long *)(uVar3 * 0x40 + -0x20 + DAT_1011bf930);
      }
      *(long *)(DAT_1011bf930 + 0x20 + uVar3 * 0x40) = lVar2;
      bVar1 = FUN_100758290(param_1,param_2,uVar3,param_3,param_4);
      uVar3 = uVar3 + bVar1;
    } while (uVar3 < (ulong)(DAT_1011bf938 - DAT_1011bf930 >> 6));
  }
  return 1;
}

