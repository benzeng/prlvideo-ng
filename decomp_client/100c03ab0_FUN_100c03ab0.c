
undefined8 FUN_100c03ab0(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 >> 0x3c != 0) {
    uVar1 = param_3 + 0xf000000000000000;
    uVar3 = uVar1 & 0xf000000000000000;
    lVar2 = param_2 + uVar3 + 0x1000000000000000;
    do {
      FUN_100c03b80(param_1,param_2,0x8000000000000000);
      param_3 = param_3 + 0xf000000000000000;
      param_2 = param_2 + 0x1000000000000000;
    } while (0xfffffffffffffff < param_3);
    param_3 = uVar1 - uVar3;
    param_2 = lVar2;
  }
  if (param_3 != 0) {
    FUN_100c03b80(param_1,param_2,param_3 << 3);
  }
  return 1;
}

