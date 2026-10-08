
void FUN_100a66420(long *param_1)

{
  char cVar1;
  
  cVar1 = FUN_100a66030();
  if (cVar1 != *(char *)((long)param_1 + 0x2a)) {
    *(char *)((long)param_1 + 0x2a) = cVar1;
    if ((((char)param_1[5] == '\0') || (*(char *)((long)param_1 + 0x29) != '\0')) ||
       (cVar1 != '\x01')) {
      FUN_100a65d50(param_1 + 9);
    }
    else {
      FUN_100a65d30(param_1 + 9);
    }
    if (*(char *)((long)param_1 + 0x2a) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100a66479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))(param_1);
      return;
    }
  }
  return;
}

