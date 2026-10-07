
undefined8 FUN_1008b69e0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1008bffd0();
  lVar2 = FUN_1008bda40(param_1,uVar1);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = 0;
    FUN_1008bd710(lVar2,1,0,3,0);
    uVar3 = FUN_1008c0c10();
    lVar2 = FUN_1008bda40(param_1,uVar3);
    if (lVar2 != 0) {
      FUN_1008bd710(lVar2,2,0,3,0);
      FUN_100888070();
      uVar1 = 1;
    }
  }
  return uVar1;
}

