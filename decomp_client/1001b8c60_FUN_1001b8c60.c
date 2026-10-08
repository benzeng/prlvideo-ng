
void FUN_1001b8c60(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1001b8c9e;
      pQVar1 = *(QArrayData **)(param_1 + 0x38);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001b8c9e:
  pQVar1 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1001b8cce;
      pQVar1 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001b8cce:
  pQVar1 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1001b8cfe;
      pQVar1 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001b8cfe:
  FUN_1001b8da0(param_1 + 8);
  return;
}

