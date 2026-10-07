
void FUN_100568510(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  QArrayData *pQVar7;
  
  *param_1 = (long)&PTR_FUN_100bc5f78;
  FUN_1005699e0();
  (**(code **)(*param_1 + 0x3f0))(param_1);
  if ((void *)param_1[0x237] != (void *)0x0) {
    _free((void *)param_1[0x237]);
  }
  QMutex::lock();
  if ((undefined8 *)param_1[0x239] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x239])();
  }
  param_1[0x239] = 0;
  QMutex::unlock();
  QMutex::~QMutex((QMutex *)(param_1 + 0x250));
  if (param_1[0x24b] != 0) {
    lVar1 = param_1[0x249];
    plVar2 = (long *)param_1[0x24a];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[0x24b] = 0;
    while (plVar2 != param_1 + 0x249) {
      plVar4 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  pQVar7 = (QArrayData *)param_1[0x23e];
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100568627;
      pQVar7 = (QArrayData *)param_1[0x23e];
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100568627:
  QMutex::~QMutex((QMutex *)(param_1 + 0x23a));
  QReadWriteLock::~QReadWriteLock((QReadWriteLock *)(param_1 + 0x233));
  pvVar5 = (void *)param_1[0x225];
  if (pvVar5 != (void *)0x0) {
    pvVar6 = (void *)param_1[0x226];
    if (pvVar6 != pvVar5) {
      param_1[0x226] = (~((long)pvVar6 + (-8 - (long)pvVar5)) & 0xfffffffffffffff8U) + (long)pvVar6;
    }
    operator_delete(pvVar5);
  }
  FUN_1005aad60(param_1 + 2);
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    lVar1 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return;
}

