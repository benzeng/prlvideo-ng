
void FUN_100a66340(long *param_1,long *param_2,int param_3)

{
  if (param_3 == 4) {
    if (**(int **)(*param_2 + 0x10) == 1) {
      if ((char)param_1[5] != '\0') {
        *(undefined1 *)(param_1 + 5) = 0;
        FUN_100a65d50(param_1 + 9);
        return;
      }
    }
    else if ((**(int **)(*param_2 + 0x10) == 0) && ((char)param_1[5] == '\0')) {
      *(undefined1 *)(param_1 + 5) = 1;
      if ((*(char *)((long)param_1 + 0x29) == '\0') && (*(char *)((long)param_1 + 0x2a) != '\0')) {
        FUN_100a65d30(param_1 + 9);
      }
      else {
        FUN_100a65d50(param_1 + 9);
      }
      if (*(char *)((long)param_1 + 0x2a) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100a663c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x78))(param_1);
        return;
      }
    }
  }
  return;
}

