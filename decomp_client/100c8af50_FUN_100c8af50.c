
undefined8 FUN_100c8af50(undefined8 *param_1)

{
  char *pcVar1;
  
  if (((*(uint *)(param_1 + 2) == 0x21) && (*(int *)(param_1 + 1) == 0)) && (0 < (long)param_1[4]))
  {
    if ((((long)param_1[4] < 2) || (pcVar1 = (char *)*param_1, *pcVar1 != '\0')) ||
       (pcVar1[1] != '\0')) {
      *(undefined4 *)((long)param_1 + 0xc) = 0x3f;
      return 0;
    }
    *param_1 = pcVar1 + 2;
  }
  if (param_1[4] == 0) {
    return 1;
  }
  if (((*(uint *)(param_1 + 2) & 1) != 0) && (-1 < (long)param_1[4])) {
    return 1;
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0x3e;
  return 0;
}

