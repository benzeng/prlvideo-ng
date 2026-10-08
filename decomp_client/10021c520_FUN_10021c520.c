
int FUN_10021c520(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_28;
  undefined1 local_1a;
  
  iVar1 = FUN_100249e20();
  if (iVar1 < 0) {
    return iVar1;
  }
  uVar2 = FUN_100152280();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_28,uVar4);
  lVar3 = FUN_1001547d0(uVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_10021c5a2;
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10021c5a2:
  iVar1 = -0x7ffffff7;
  if (lVar3 != 0) {
    iVar1 = 0;
  }
  return iVar1;
}

