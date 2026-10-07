
void FUN_10000ddb0(QThread *param_1)

{
  *(undefined ***)param_1 = &PTR_metaObject_100ba7a80;
  (*(code *)PTR__objc_msgSend_100ba25e8)(*(undefined8 *)(param_1 + 0x48),PTR_s_release_100bed2a0);
  if (*(long *)(param_1 + 0x50) != 0) {
    _CFRelease();
  }
  (*(code *)PTR__objc_msgSend_100ba25e8)(*(undefined8 *)(param_1 + 0x40),PTR_s_drain_100bed2a8);
  FUN_1008e3970("","vm",0,"[CMacApp::~CMacApp]");
  QMutex::~QMutex((QMutex *)(param_1 + 0x18));
  QThread::~QThread(param_1);
  return;
}

