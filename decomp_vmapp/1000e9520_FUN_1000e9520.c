
void FUN_1000e9520(ulong param_1,QString *param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      cVar1 = QThread::isFinished();
      if (cVar1 == '\0') {
        QThread::wait(param_1);
      }
    }
    QString::operator=((QString *)(param_1 + 0x20),param_2);
    if (param_3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(*(long *)(param_1 + 0x10) + 0x8d0) != '\0';
    }
    FUN_1000e91e0(param_1,bVar2);
    QThread::start(param_1,7);
    return;
  }
  return;
}

