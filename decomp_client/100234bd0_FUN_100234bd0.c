
void FUN_100234bd0(long *param_1,char param_2)

{
  long lVar1;
  
  if (param_2 != '\0') {
    lVar1 = 0;
    if ((param_1[3] != 0) && (lVar1 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar1 = param_1[4];
    }
    lVar1 = FUN_100319960(lVar1);
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x128))(param_1);
    }
    *(undefined1 *)((long)param_1 + 0x34) = 0;
    FUN_1002345c0(param_1);
    return;
  }
  return;
}

