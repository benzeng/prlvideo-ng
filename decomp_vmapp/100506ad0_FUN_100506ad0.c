
undefined8 FUN_100506ad0(long param_1,long *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  QArrayData *pQVar3;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(uint *)(param_2 + 1) < 2) {
    return 1;
  }
  puVar2 = (ushort *)*param_2;
  if (*(uint *)(param_2 + 1) - 2 < (uint)*puVar2) {
    return 1;
  }
  QByteArray::QByteArray((QByteArray *)&local_30,(char *)(puVar2 + 1),(uint)*puVar2);
  pQVar3 = *(QArrayData **)(param_1 + 0x10);
  *(QArrayData **)(param_1 + 0x10) = local_30;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100506b47;
      local_21 = 0;
    }
    local_30 = pQVar3;
    QArrayData::deallocate(pQVar3,1,8);
  }
LAB_100506b47:
  uVar1 = *puVar2;
  *(uint *)(param_2 + 1) = (int)param_2[1] + (-2 - (uint)uVar1);
  *param_2 = (ulong)uVar1 + 2 + *param_2;
  return 0;
}

