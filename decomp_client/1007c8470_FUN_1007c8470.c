
bool FUN_1007c8470(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  iVar1 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x30000004) {
    uVar2 = FUN_10018f5c0(*(undefined8 *)(param_1 + 0x18));
    iVar1 = FUN_1007c7cf0(uVar2);
    bVar3 = iVar1 == 1;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

