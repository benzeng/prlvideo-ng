
int FUN_1008cc65e(long param_1,char param_2,char param_3,char param_4,int param_5)

{
  long *plVar1;
  bool bVar2;
  int local_28;
  int local_24;
  long local_18;
  
  bVar2 = false;
  plVar1 = *(long **)(param_1 + 0x38);
  if ((plVar1 != (long *)0x0) && (local_28 = (int)plVar1[4] - (int)plVar1[3], -1 < local_28)) {
    if ((long)local_28 < *(long *)(param_1 + 0x140)) {
      local_28 = (int)*(undefined8 *)(param_1 + 0x140);
    }
    if (*plVar1 == 0) {
      local_18 = plVar1[3];
      local_24 = (int)plVar1[6];
    }
    else {
      local_18 = **(long **)(*plVar1 + 0x20);
      local_24 = *(int *)(*(long *)(*plVar1 + 0x20) + 8);
    }
    if (param_4 == '\0') {
      if (param_3 != '\0') {
        local_24 = local_24 + -1;
      }
    }
    else {
      local_24 = local_24 + -2;
    }
    for (; local_28 < local_24; local_28 = local_28 + 1) {
      if ((((!bVar2) && (local_28 + 4 < local_24)) && (param_5 == 0)) &&
         (((*(char *)(local_28 + local_18) == '<' && (*(char *)(local_28 + local_18 + 1) == '!')) &&
          ((*(char *)(local_28 + local_18 + 2) == '-' && (*(char *)(local_28 + local_18 + 3) == '-')
           ))))) {
        bVar2 = true;
        local_28 = local_28 + 2;
      }
      if (bVar2) {
        if (local_24 < local_28 + 3) {
          return -1;
        }
        if (((*(char *)(local_28 + local_18) == '-') && (*(char *)(local_28 + local_18 + 1) == '-'))
           && (*(char *)(local_28 + local_18 + 2) == '>')) {
          bVar2 = false;
          local_28 = local_28 + 2;
        }
      }
      else if (*(char *)(local_28 + local_18) == param_2) {
        if (param_4 == '\0') {
          if ((param_3 == '\0') || (*(char *)(local_28 + local_18 + 1) == param_3))
          goto LAB_1008cc89f;
        }
        else if ((*(char *)(local_28 + local_18 + 1) == param_3) &&
                (*(char *)(local_28 + local_18 + 2) == param_4)) {
LAB_1008cc89f:
          *(undefined8 *)(param_1 + 0x140) = 0;
          return local_28 - ((int)plVar1[4] - (int)plVar1[3]);
        }
      }
    }
    *(long *)(param_1 + 0x140) = (long)local_28;
  }
  return -1;
}

