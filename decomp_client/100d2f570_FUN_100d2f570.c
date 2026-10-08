
void FUN_100d2f570(undefined8 *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_10230f9a8;
  pvVar1 = (void *)param_1[4];
  if (pvVar1 == (void *)0x0) goto LAB_100d2f5c9;
  pQVar2 = *(QArrayData **)((long)pvVar1 + 8);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100d2f5c1;
      pQVar2 = *(QArrayData **)((long)pvVar1 + 8);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d2f5c1:
  operator_delete(pvVar1);
LAB_100d2f5c9:
  QDomNodeList::~QDomNodeList((QDomNodeList *)(param_1 + 1));
  return;
}

