
long FUN_100c3a7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_100c3fd60();
  lVar3 = FUN_100c36060(uVar2);
  lVar4 = 0;
  if ((lVar3 != 0) &&
     (iVar1 = FUN_100c36dd0(lVar3,param_1,param_2,param_3,param_4), lVar4 = lVar3, iVar1 == 0)) {
    FUN_100c362c0(lVar3);
    lVar4 = 0;
  }
  return lVar4;
}

