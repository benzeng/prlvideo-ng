
undefined8 FUN_1005065c0(long param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  QArrayData *pQVar3;
  undefined8 uVar4;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar4 = 1;
  if (3 < uVar1) {
    puVar2 = (uint *)*param_2;
    if (*puVar2 <= uVar1) {
      *(uint *)(param_2 + 1) = uVar1 - *puVar2;
      uVar1 = *puVar2;
      *param_2 = (ulong)uVar1 + (long)puVar2;
      QByteArray::QByteArray((QByteArray *)&local_28,(char *)puVar2,uVar1);
      pQVar3 = *(QArrayData **)(param_1 + 0x10);
      *(QArrayData **)(param_1 + 0x10) = local_28;
      uVar4 = 0;
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 != 0) {
            return 0;
          }
          local_19 = 0;
        }
        local_28 = pQVar3;
        QArrayData::deallocate(pQVar3,1,8);
      }
    }
  }
  return uVar4;
}

