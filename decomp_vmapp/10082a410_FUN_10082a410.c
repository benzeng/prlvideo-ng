
undefined8 FUN_10082a410(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_1008a8380();
  if (((lVar2 != 0) && (iVar1 = FUN_10089b640(lVar2,*param_2,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_100892130(param_1,0x357,lVar2), iVar1 != 0)) {
    return 1;
  }
  FUN_1008a83a0(lVar2);
  return 0;
}

