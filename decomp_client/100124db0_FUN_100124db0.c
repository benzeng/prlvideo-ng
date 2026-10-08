
bool FUN_100124db0(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_10018a9d0();
  bVar2 = true;
  if (iVar1 != 0x30000001) {
    iVar1 = FUN_10018a9d0(param_1);
    if (iVar1 != 0x30000009) {
      iVar1 = FUN_10018a9d0(param_1);
      bVar2 = iVar1 == 0x30000005;
    }
  }
  return bVar2;
}

