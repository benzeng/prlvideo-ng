
undefined8 FUN_100c8c030(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100c8b370(4);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_100c8b0b0(lVar2,param_2,param_3);
    if (iVar1 == 0) {
      FUN_100c8b2f0(lVar2);
    }
    else {
      FUN_100c76e50(param_1,4,lVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}

