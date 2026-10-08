
void FUN_100776be0(long *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  
  if ((param_3 == 0x30000004) && ((int)param_1[6] < 0)) {
    cVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    if (cVar1 == '\0') {
      QTimer::start();
      return;
    }
  }
  return;
}

