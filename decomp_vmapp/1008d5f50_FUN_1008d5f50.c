
undefined8 FUN_1008d5f50(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_1008a8380();
  if (lVar2 != 0) {
    iVar1 = FUN_1008afb30(lVar2,param_2,param_3);
    if ((iVar1 != 0) && (iVar1 = FUN_1008d5b70(param_1,0x33,4,lVar2), iVar1 != 0)) {
      return 1;
    }
    FUN_1008a83a0(lVar2);
  }
  return 0;
}

