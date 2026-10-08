
bool FUN_100ca6cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = FUN_100c5c0c0(param_3,"%*s",param_4,"");
  if (0 < iVar1) {
    iVar1 = FUN_100c85a70(param_3,param_2,4);
    bVar2 = 0 < iVar1;
  }
  return bVar2;
}

