
void FUN_1007b6470(QObject *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222dbb0;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

