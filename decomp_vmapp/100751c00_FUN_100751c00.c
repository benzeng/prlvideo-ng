
void FUN_100751c00(QThread *param_1)

{
  code *pcVar1;
  
  *(undefined ***)param_1 = &PTR_metaObject_10119e990;
  pcVar1 = *(code **)(param_1 + 0x28);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x30)) +
                                 -1);
  }
  (*pcVar1)((long *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x30)),param_1);
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 0x40));
  QThread::~QThread(param_1);
  return;
}

