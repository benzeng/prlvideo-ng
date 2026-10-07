
bool FUN_100892130(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_1 != 0) {
    bVar2 = false;
    iVar1 = FUN_100891ff0(param_1,param_2,0,0xffffffff);
    if (iVar1 != 0) {
      *(long *)(param_1 + 0x20) = param_3;
      bVar2 = param_3 != 0;
    }
  }
  return bVar2;
}

