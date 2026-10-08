
bool FUN_100ca6b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = FUN_100c5c0c0(param_3,"%*s",param_4,"");
  if (0 < iVar1) {
    iVar1 = FUN_100c7f2c0(param_3,param_2);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

