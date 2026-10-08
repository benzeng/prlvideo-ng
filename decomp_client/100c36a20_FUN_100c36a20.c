
long FUN_100c36a20(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = FUN_100c36060(*param_1);
    lVar3 = 0;
    if ((lVar2 != 0) && (iVar1 = FUN_100c36460(lVar2,param_1), lVar3 = lVar2, iVar1 == 0)) {
      FUN_100c36170(lVar2);
      lVar3 = 0;
    }
  }
  return lVar3;
}

