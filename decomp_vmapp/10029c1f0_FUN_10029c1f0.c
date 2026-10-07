
void FUN_10029c1f0(long *param_1,char param_2)

{
  bool bVar1;
  
  QMutex::lock();
  bVar1 = true;
  switch((int)param_1[10]) {
  case 1:
    if (param_2 != '\0') {
      *(undefined4 *)(param_1 + 10) = 4;
    }
    break;
  case 2:
  case 3:
    if (param_2 != '\0') {
      *(undefined4 *)(param_1 + 10) = 5;
    }
    break;
  case 4:
    if (param_2 == '\0') {
      *(undefined4 *)(param_1 + 10) = 1;
    }
    break;
  case 5:
    if (param_2 == '\0') {
      *(undefined4 *)(param_1 + 10) = 1;
      QMutex::unlock();
      (**(code **)(*param_1 + 0x28))(param_1);
      bVar1 = false;
    }
  }
  if (bVar1) {
    QMutex::unlock();
    return;
  }
  return;
}

