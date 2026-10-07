
void FUN_1005a5030(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  QArrayData *pQVar5;
  
  *param_1 = (long)&PTR_FUN_100bc6698;
  QThread::wait((ulong)(param_1 + 0xe));
  (**(code **)(*param_1 + 0xe8))(param_1);
  (**(code **)(*param_1 + 0x1e0))(param_1);
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[7] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)((long)param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x10] = (long)param_1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  FUN_1005a8180(param_1);
  (**(code **)(*param_1 + 0xf0))(param_1);
  pQVar5 = (QArrayData *)param_1[0x18];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1005a5136;
      pQVar5 = (QArrayData *)param_1[0x18];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1005a5136:
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x16));
  QMutex::~QMutex((QMutex *)(param_1 + 0x15));
  QThread::~QThread((QThread *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    lVar1 = param_1[0xb];
    plVar2 = (long *)param_1[0xc];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[0xd] = 0;
    while (plVar2 != param_1 + 0xb) {
      plVar4 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  *param_1 = (long)&PTR_FUN_10111deb8;
  FUN_1005a8180(param_1);
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 9));
  return;
}

