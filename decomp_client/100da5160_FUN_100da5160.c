
void FUN_100da5160(QThread *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  QThread param_5)

{
  int *piVar1;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10225bef0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x38] = (QThread)0x0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x39] = param_5;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAuthHelper",
                  "CDirCopier.cpp",0x41,"CDirCopier");
  }
  return;
}

