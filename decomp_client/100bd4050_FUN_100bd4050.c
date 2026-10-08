
bool FUN_100bd4050(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_100bd3d50();
  bVar2 = false;
  if (iVar1 != 0) {
    iVar1 = FUN_100bd3ed0(param_1);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

