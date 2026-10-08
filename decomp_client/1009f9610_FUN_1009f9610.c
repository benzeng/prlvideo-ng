
void FUN_1009f9610(QFileInfo *param_1,QString *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  
  QFileInfo::QFileInfo(param_1,param_2);
  cVar2 = QString::endsWith(param_3,param_4,1);
  if (cVar2 == '\0') {
    piVar1 = (int *)*param_3;
    *(int **)(param_1 + 8) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    QString::left((int)(param_1 + 8));
  }
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x18) = param_5;
  return;
}

