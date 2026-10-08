
undefined8 FUN_100c91f60(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_100c9b550();
  lVar2 = FUN_100c98fc0(param_1,uVar1);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = 0;
    FUN_100c98c90(lVar2,1,0,3,0);
    uVar3 = FUN_100c9c190();
    lVar2 = FUN_100c98fc0(param_1,uVar3);
    if (lVar2 != 0) {
      FUN_100c98c90(lVar2,2,0,3,0);
      FUN_100c63270();
      uVar1 = 1;
    }
  }
  return uVar1;
}

