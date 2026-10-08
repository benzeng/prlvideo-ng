
void FUN_100035270(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x14) == 0) {
    if (-1 < iVar1) {
      QTimer::stop();
      FUN_1000351d0(param_1);
      return;
    }
  }
  else if (iVar1 < 0) {
    QTimer::start((int)*(long *)(param_1 + 0x20));
    return;
  }
  return;
}

