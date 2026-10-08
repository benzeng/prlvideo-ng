
void FUN_1007821f0(long param_1,char param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x10) == param_2) {
    if (-1 < *(int *)(*(long *)(param_1 + 0x18) + 0x10)) {
      QTimer::stop();
      return;
    }
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x10);
    if (param_3 < 1) {
      if (-1 < iVar1) {
        QTimer::stop();
      }
      *(char *)(param_1 + 0x10) = param_2;
      FUN_10085d270(param_1,param_2);
      return;
    }
    if (iVar1 < 0) {
      QTimer::start((int)*(long *)(param_1 + 0x18));
      return;
    }
  }
  return;
}

