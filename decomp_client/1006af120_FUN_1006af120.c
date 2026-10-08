
bool FUN_1006af120(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  lVar2 = FUN_100190790(*(undefined8 *)(param_1 + 0x20));
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    iVar1 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0x30000004) {
      uVar3 = FUN_100190790(*(undefined8 *)(param_1 + 0x20));
      iVar1 = FUN_1007c9210(uVar3);
      bVar4 = true;
      if (iVar1 != 0) {
        uVar3 = FUN_100190790(*(undefined8 *)(param_1 + 0x20));
        iVar1 = FUN_1007c9210(uVar3);
        bVar4 = iVar1 == 1;
      }
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}

