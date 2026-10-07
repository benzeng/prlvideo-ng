
void FUN_1004c6890(undefined8 *param_1)

{
  void *pvVar1;
  QMutex *this;
  QMutexData *pQVar2;
  
  *param_1 = &PTR_FUN_100bc2fb8;
  FUN_1004d4870(&DAT_1011cc818,0);
  FUN_100040d30(param_1[0x12]);
  FUN_1004f6870();
  pvVar1 = (void *)param_1[0x17];
  if (pvVar1 != (void *)0x0) {
    FUN_1004f9280(pvVar1);
    operator_delete(pvVar1);
  }
  this = (QMutex *)param_1[0x16];
  if (this == (QMutex *)0x0) goto LAB_1004c6924;
  pQVar2 = this[1].field0_0x0.field0_0x0;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1004c6914;
      pQVar2 = this[1].field0_0x0.field0_0x0;
    }
    QListData::dispose((Data *)pQVar2);
  }
LAB_1004c6914:
  QMutex::~QMutex(this);
  operator_delete(this);
LAB_1004c6924:
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 0x20))();
  }
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x20))();
  }
  pvVar1 = (void *)param_1[0x13];
  if (pvVar1 != (void *)0x0) {
    FUN_1004e6630(pvVar1);
    operator_delete(pvVar1);
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  QThreadStorageData::~QThreadStorageData((QThreadStorageData *)(param_1 + 0x11));
  FUN_1004d00f0(param_1 + 9);
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    FUN_1004d66d0(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    FUN_1004edc50(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_100502db0(param_1[5]);
  FUN_1004c0680(param_1);
  return;
}

