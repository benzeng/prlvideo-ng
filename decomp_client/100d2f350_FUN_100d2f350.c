
void FUN_100d2f350(long *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  pvVar1 = (void *)param_1[4];
  if (pvVar1 == (void *)0x0) goto LAB_100d2f3a6;
  pQVar2 = *(QArrayData **)((long)pvVar1 + 8);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100d2f39e;
      pQVar2 = *(QArrayData **)((long)pvVar1 + 8);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d2f39e:
  operator_delete(pvVar1);
LAB_100d2f3a6:
  param_1[4] = 0;
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}

