
void FUN_100d2f060(long *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  pvVar1 = (void *)param_1[4];
  if (pvVar1 == (void *)0x0) goto LAB_100d2f0b6;
  pQVar2 = *(QArrayData **)((long)pvVar1 + 0x10);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100d2f0ae;
      pQVar2 = *(QArrayData **)((long)pvVar1 + 0x10);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d2f0ae:
  operator_delete(pvVar1);
LAB_100d2f0b6:
  param_1[4] = 0;
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}

