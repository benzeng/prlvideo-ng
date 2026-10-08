
long FUN_100c7b6a0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  
  local_38 = *param_2;
  lVar2 = FUN_100c81490(0,&local_38,param_3,&DAT_1022516d8);
  if (lVar2 != 0) {
    lVar3 = FUN_100c7b280(lVar2);
    FUN_100c801c0(lVar2,&DAT_1022516d8);
    uVar1 = local_38;
    if (lVar3 != 0) {
      lVar2 = FUN_100c6d680(lVar3);
      FUN_100c6d8c0(lVar3);
      if (lVar2 == 0) {
        return 0;
      }
      *param_2 = uVar1;
      if (param_1 == (long *)0x0) {
        return lVar2;
      }
      FUN_100c4d5f0(*param_1);
      *param_1 = lVar2;
      return lVar2;
    }
  }
  return 0;
}

