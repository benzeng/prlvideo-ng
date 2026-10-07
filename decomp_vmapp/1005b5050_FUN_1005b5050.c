
void FUN_1005b5050(long param_1)

{
  QArrayData *pQVar1;
  
  if (*(void **)(param_1 + 0x10b8) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x10b8));
    *(undefined8 *)(param_1 + 0x10b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x10b4) = 0;
  *(undefined4 *)(param_1 + 0x10b0) = 0;
  pQVar1 = *(QArrayData **)(param_1 + 0x10a8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005b50c4;
      pQVar1 = *(QArrayData **)(param_1 + 0x10a8);
    }
    QArrayData::deallocate(pQVar1,4,8);
  }
LAB_1005b50c4:
  FUN_100707780(param_1 + 0x28);
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005b50fd;
      pQVar1 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005b50fd:
  pQVar1 = *(QArrayData **)(param_1 + 8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = *(QArrayData **)(param_1 + 8);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

