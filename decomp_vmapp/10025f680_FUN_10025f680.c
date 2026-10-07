
void FUN_10025f680(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  *param_1 = (long)&PTR_FUN_100baeb50;
  param_1[1] = (long)&PTR_metaObject_100baebf8;
  param_1[0xd] = (long)&PTR_FUN_100baec70;
  param_1[0x12] = (long)&PTR_FUN_100baeca0;
  if (2 < DAT_1011b55f8) {
    QMutex::lock();
    plVar2 = (long *)param_1[0x10];
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    QMutex::unlock();
    uVar4 = CVmDevice::getIndex();
    FUN_1008e3970("","LocalDevices",3,"[Serial%d] Terminating",uVar4);
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
  }
  (**(code **)(*param_1 + 0x70))(param_1);
  QMutex::~QMutex((QMutex *)(param_1 + 0x16));
  FUN_10025b110(param_1 + 0xd);
  FUN_100257ad0(param_1);
  return;
}

