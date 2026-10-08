
undefined8 FUN_100c01df0(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_100c83900();
  if (((lVar2 != 0) && (iVar1 = FUN_100c76bc0(lVar2,*param_2,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_100c6d510(param_1,0x357,lVar2), iVar1 != 0)) {
    return 1;
  }
  FUN_100c83920(lVar2);
  return 0;
}

