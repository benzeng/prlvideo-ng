
void FUN_10077d3c0(long *param_1,int param_2,int param_3,long param_4)

{
  char cVar1;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_100776c20(param_1);
      return;
    }
    if (((param_3 == 0) && (**(int **)(param_4 + 0x10) == 0x30000004)) && ((int)param_1[6] < 0)) {
      cVar1 = (**(code **)(*param_1 + 0x78))(param_1);
      if (cVar1 == '\0') {
        QTimer::start();
        return;
      }
    }
  }
  return;
}

