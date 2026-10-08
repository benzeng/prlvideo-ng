
int FUN_100327ed0(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1[4];
  iVar1 = 0;
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      *(undefined4 *)(param_1 + 4) = 1;
      FUN_10082aa20(param_1,1);
    }
    iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    if (iVar1 == -0x7fffffed) {
      if (-1 < (int)param_1[7]) {
        QTimer::stop();
      }
      iVar1 = -0x7fffffed;
      if (param_2 != 0x7fffffff) {
        QTimer::start((int)param_1 + 0x28);
      }
    }
    else {
      if (iVar1 == 0) {
        if ((int)param_1[4] == 2) {
          return 0;
        }
        if (-1 < (int)param_1[7]) {
          QTimer::stop();
        }
        *(undefined4 *)(param_1 + 4) = 2;
        iVar2 = 2;
        iVar1 = 0;
      }
      else {
        if ((int)param_1[4] == iVar2) {
          return iVar1;
        }
        if ((iVar2 != 1) && (-1 < (int)param_1[7])) {
          QTimer::stop();
        }
        *(int *)(param_1 + 4) = iVar2;
      }
      FUN_10082aa20(param_1,iVar2);
    }
  }
  return iVar1;
}

