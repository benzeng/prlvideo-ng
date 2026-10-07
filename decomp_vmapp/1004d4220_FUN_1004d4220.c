
void FUN_1004d4220(long *param_1)

{
  long *plVar1;
  int *piVar2;
  int *local_40;
  int *local_38;
  int *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  plVar1 = param_1 + 1;
  FUN_1004d6ff0(&local_40,plVar1);
  local_38 = local_40 + (long)local_40[2] * 2 + 4;
  local_30 = local_40 + (long)local_40[3] * 2 + 4;
  if (local_40[2] != local_40[3]) {
    do {
      local_28 = 1;
      FUN_1004d81e0(**(undefined8 **)local_38);
      local_38 = local_38 + 2;
    } while (local_38 != local_30);
  }
  local_28 = 1;
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_19 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004d42be;
    }
    FUN_1004d6ab0(&local_40,local_40);
  }
LAB_1004d42be:
  FUN_1004d5770(*(undefined8 *)(*param_1 + 0xb0),0);
  piVar2 = (int *)*plVar1;
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return;
      }
      piVar2 = (int *)*plVar1;
      local_19 = 0;
    }
    FUN_1004d6ab0(plVar1,piVar2);
  }
  return;
}

