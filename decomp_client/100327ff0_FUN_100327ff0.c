
int FUN_100327ff0(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1[4];
  iVar1 = 0;
  if (iVar2 != 0) {
    if (iVar2 != 3) {
      if (-1 < (int)param_1[7]) {
        QTimer::stop();
      }
      *(undefined4 *)(param_1 + 4) = 3;
      FUN_10082aa20(param_1,3);
    }
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if ((int)param_1[4] != iVar2) {
      if ((iVar2 != 1) && (-1 < (int)param_1[7])) {
        QTimer::stop();
      }
      *(int *)(param_1 + 4) = iVar2;
      FUN_10082aa20(param_1,iVar2);
    }
  }
  return iVar1;
}

