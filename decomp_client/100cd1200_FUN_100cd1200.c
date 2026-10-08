
void FUN_100cd1200(long *param_1,char param_2)

{
  if (param_2 == '\0') {
    if ((int)param_1[5] != 0) {
      (**(code **)(*(long *)param_1[0xc] + 200))((long *)param_1[0xc],(int)param_1[5],0);
    }
    (**(code **)(*param_1 + 200))(param_1,*(undefined4 *)((long)param_1 + 0x24),0);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  else {
    (**(code **)(*param_1 + 200))(param_1,*(undefined4 *)((long)param_1 + 0x24),1);
    if ((int)param_1[5] != 0) {
      (**(code **)(*(long *)param_1[0xc] + 200))((long *)param_1[0xc],(int)param_1[5],1);
    }
    *(char *)(param_1 + 9) = param_2;
    *(undefined1 *)((long)param_1 + 0x49) = 1;
  }
  return;
}

