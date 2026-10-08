
bool FUN_100c7a3e0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1 != 0) {
    iVar1 = FUN_100c58980(param_1,param_2,param_3);
    bVar2 = iVar1 == param_3;
  }
  return bVar2;
}

