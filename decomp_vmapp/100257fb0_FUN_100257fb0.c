
undefined8 FUN_100257fb0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1002ef620(*(undefined8 *)(param_1 + 0x40));
  iVar1 = FUN_1002ef640(*(undefined8 *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  while( true ) {
    if (iVar1 == 4) {
      FUN_1002ef630();
      return 0;
    }
    iVar1 = FUN_1002ef640(uVar2);
    if (iVar1 == 1) break;
    FUN_1002ef630(*(undefined8 *)(param_1 + 0x40));
    FUN_1002efab0(*(undefined8 *)(param_1 + 0x40));
    FUN_1002ef620(*(undefined8 *)(param_1 + 0x40));
    iVar1 = FUN_1002ef640(*(undefined8 *)(param_1 + 0x40));
    uVar2 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_100258060(param_1 + 0x48,param_2,*(undefined8 *)(param_1 + 0x40));
  FUN_1002ef630(*(undefined8 *)(param_1 + 0x40));
  uVar2 = FUN_100258130(param_1 + 0x48,param_2,*(undefined8 *)(param_1 + 0x40));
  return uVar2;
}

