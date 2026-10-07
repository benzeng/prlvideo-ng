
undefined8 FUN_1000b1a10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x80000036;
  if (*(long *)(param_1 + 0x110) != 0) {
    lVar1 = param_1 + 0x140;
    FUN_100083a30(lVar1,param_1 + 0x110);
    FUN_1007da0b0(param_1 + 0x5e4,0x500);
    uVar2 = FUN_100088610(lVar1,param_1 + 0x110,0);
    if (-1 < (int)uVar2) {
      uVar2 = FUN_100430e80(*(undefined8 *)(param_1 + 0xf0));
      FUN_100087780(lVar1,uVar2);
      *(undefined8 *)(param_1 + 0x1164) = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}

