
void FUN_1002a94f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  QArrayData *pQVar3;
  
  *param_1 = &PTR_FUN_100bb2ca0;
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  QWaitCondition::wakeOne();
  QMutex::unlock();
  QThread::wait(param_1[0x114]);
  if ((long *)param_1[0x114] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x114] + 0x20))();
  }
  puVar1 = param_1 + 0x11b;
  puVar2 = (undefined8 *)param_1[0x11b];
  while (puVar2 != (undefined8 *)0x0) {
    *puVar1 = *puVar2;
    operator_delete(puVar2);
    puVar2 = (undefined8 *)*puVar1;
  }
  param_1[0x11c] = puVar1;
  if ((void *)param_1[0x131] != (void *)0x0) {
    operator_delete__((void *)param_1[0x131]);
  }
  if ((void *)param_1[0x24f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24f]);
  }
  if ((void *)param_1[0x36d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x36d]);
  }
  if ((void *)param_1[0x48b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x48b]);
  }
  if ((void *)param_1[0x5a9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x5a9]);
  }
  if ((void *)param_1[0x6c7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x6c7]);
  }
  if ((void *)param_1[0x7e5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7e5]);
  }
  if ((void *)param_1[0x903] != (void *)0x0) {
    operator_delete__((void *)param_1[0x903]);
  }
  if ((void *)param_1[0xa21] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa21]);
  }
  if ((void *)param_1[0xb3f] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb3f]);
  }
  if ((void *)param_1[0xc5d] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc5d]);
  }
  if ((void *)param_1[0xd7b] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd7b]);
  }
  if ((void *)param_1[0xe99] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe99]);
  }
  if ((void *)param_1[0xfb7] != (void *)0x0) {
    operator_delete__((void *)param_1[0xfb7]);
  }
  if ((void *)param_1[0x10d5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x10d5]);
  }
  if ((void *)param_1[0x11f3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x11f3]);
  }
  if (param_1[0x2312] != 0) {
    (**(code **)(param_1[0x2312] + 0x30))(1);
    param_1[0x2312] = 0;
  }
  if (param_1[0x2313] != 0) {
    (**(code **)(param_1[0x2313] + 0x20))();
    param_1[0x2313] = 0;
  }
  if (param_1[0x2311] != 0) {
    _dlclose();
    param_1[0x2311] = 0;
  }
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",3,"VGPU [Shutdown]");
  }
  FUN_1002a5960(param_1 + 0x11e);
  pQVar3 = (QArrayData *)param_1[0x117];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1002a9774;
      pQVar3 = (QArrayData *)param_1[0x117];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002a9774:
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x113));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x112));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x111));
  QMutex::~QMutex((QMutex *)(param_1 + 0x110));
  QMutex::~QMutex((QMutex *)(param_1 + 0x10f));
  FUN_1002a4fb0(param_1);
  return;
}

