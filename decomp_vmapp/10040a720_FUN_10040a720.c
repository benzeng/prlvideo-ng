
void FUN_10040a720(QObject *param_1)

{
  QThread *this;
  undefined1 auVar1 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10116d780;
  QMutex::QMutex((QMutex *)(param_1 + 0x18),0);
  param_1[0x20] = (QObject)0x0;
  *(undefined ***)param_1 = &PTR_FUN_100bc0388;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc0408;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x46] = (QObject)0x0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  QMutex::QMutex((QMutex *)(param_1 + 0x60),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x68),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x70),0);
  auVar1._8_4_ = (int)PTR_shared_null_100ba2180;
  auVar1._0_8_ = PTR_shared_null_100ba2180;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba2180 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x78) = auVar1;
  this = operator_new(0x10,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (this == (QThread *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_1008e3970("","PrlAudioCore",0,"[CAudioUnitManager] ERROR: OOM!");
    this = *(QThread **)(param_1 + 0x28);
  }
  else {
    QThread::QThread(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_FUN_100bc02f0;
    *(QThread **)(param_1 + 0x28) = this;
  }
  QObject::moveToThread(this);
  QThread::start(*(undefined8 *)(param_1 + 0x28),7);
  return;
}

