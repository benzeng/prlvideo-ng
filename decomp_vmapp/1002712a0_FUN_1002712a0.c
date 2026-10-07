
void FUN_1002712a0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  QArrayData *pQVar5;
  
  *param_1 = (long)&PTR_FUN_100baf650;
  param_1[1] = (long)&PTR_metaObject_100baf6d8;
  param_1[0xd] = (long)&PTR_FUN_100baf750;
  QMutex::lock();
  plVar2 = (long *)param_1[0x10];
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  uVar4 = CVmDevice::getIndex();
  FUN_1008e3970("","LocalDevices",0,"[Floppy%d] Terminating",uVar4);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  (**(code **)(*param_1 + 0x70))(param_1);
  pQVar5 = (QArrayData *)param_1[0x1b];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1002713a4;
      pQVar5 = (QArrayData *)param_1[0x1b];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1002713a4:
  QMutex::~QMutex((QMutex *)(param_1 + 0x1a));
  QMutex::~QMutex((QMutex *)(param_1 + 0x19));
  FUN_100406110(param_1 + 0x13);
  FUN_10025b110(param_1 + 0xd);
  FUN_100257ad0(param_1);
  return;
}

