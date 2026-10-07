
void FUN_10027fab0(long param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = FUN_100257d80();
  LOCK();
  piVar2 = (int *)(lVar5 + 0x31c40 + (ulong)param_2 * 4);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  lVar5 = FUN_100257d80(param_1);
  LOCK();
  puVar1 = (uint *)(lVar5 + 0x31c3c);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (((uVar4 != 1) && (iVar3 != 1)) && ((uVar4 & *(uint *)(param_1 + 0x68)) != 0)) {
    return;
  }
  FUN_1002effe0(*(undefined8 *)(param_1 + 0x78));
  return;
}

