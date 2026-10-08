
int FUN_100890d4c(long param_1,char param_2,char param_3,char param_4)

{
  long *plVar1;
  int local_20;
  int local_1c;
  long local_10;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if ((plVar1 != (long *)0x0) && (local_20 = (int)plVar1[4] - (int)plVar1[3], -1 < local_20)) {
    if ((long)local_20 < *(long *)(param_1 + 0x140)) {
      local_20 = (int)*(undefined8 *)(param_1 + 0x140);
    }
    if (*plVar1 == 0) {
      local_10 = plVar1[3];
      local_1c = (int)plVar1[6];
    }
    else {
      local_10 = **(long **)(*plVar1 + 0x20);
      local_1c = *(int *)(*(long *)(*plVar1 + 0x20) + 8);
    }
    if (param_4 == '\0') {
      if (param_3 != '\0') {
        local_1c = local_1c + -1;
      }
    }
    else {
      local_1c = local_1c + -2;
    }
    for (; local_20 < local_1c; local_20 = local_20 + 1) {
      if (*(char *)(local_20 + local_10) == param_2) {
        if (param_4 == '\0') {
          if ((param_3 == '\0') || (*(char *)(local_20 + local_10 + 1) == param_3))
          goto LAB_100890e97;
        }
        else if ((*(char *)(local_20 + local_10 + 1) == param_3) &&
                (*(char *)(local_20 + local_10 + 2) == param_4)) {
LAB_100890e97:
          *(undefined8 *)(param_1 + 0x140) = 0;
          return local_20 - ((int)plVar1[4] - (int)plVar1[3]);
        }
      }
    }
    *(long *)(param_1 + 0x140) = (long)local_20;
  }
  return -1;
}

