
undefined8 FUN_1008b0ab0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1008afdf0(4);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_1008afb30(lVar2,param_2,param_3);
    if (iVar1 == 0) {
      FUN_1008afd70(lVar2);
    }
    else {
      FUN_10089b8d0(param_1,4,lVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}

