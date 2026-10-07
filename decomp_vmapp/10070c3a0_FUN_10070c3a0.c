
void FUN_10070c3a0(QThread *param_1)

{
  char cVar1;
  
  *(undefined ***)param_1 = &PTR_metaObject_100bce060;
  cVar1 = QThread::wait((ulong)param_1);
  if (cVar1 == '\0') {
    FUN_1008e3970("","AbstractFile",0,"IO thread does not exit");
    QThread::terminate();
    QThread::wait((ulong)param_1);
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  QThread::~QThread(param_1);
  return;
}

