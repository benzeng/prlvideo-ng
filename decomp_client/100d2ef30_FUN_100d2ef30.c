
void FUN_100d2ef30(undefined8 *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_10230f898;
  pvVar1 = (void *)param_1[1];
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pQVar2 = *(QArrayData **)((long)pvVar1 + 8);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100d2ef7e;
      pQVar2 = *(QArrayData **)((long)pvVar1 + 8);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d2ef7e:
  operator_delete(pvVar1);
  return;
}

