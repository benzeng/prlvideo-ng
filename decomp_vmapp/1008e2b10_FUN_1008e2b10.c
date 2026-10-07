
bool FUN_1008e2b10(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = FUN_1008e2200();
  *(long *)(param_1 + 0x28) = lVar2;
  bVar3 = false;
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar1 = FUN_1008e2350(lVar2,*(undefined8 *)(param_2 + 0x28));
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

