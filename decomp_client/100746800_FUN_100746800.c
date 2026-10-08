
void FUN_100746800(long param_1)

{
  int iVar1;
  
  FUN_100745bd0(param_1,1);
  if (*(int *)(param_1 + 0x84) != 0) {
    QTimer::stop();
    iVar1 = 0;
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (iVar1 = 0, *(int *)(*(long *)(param_1 + 0x88) + 4) != 0)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x90);
    }
    CReminder::start(iVar1);
    return;
  }
  return;
}

