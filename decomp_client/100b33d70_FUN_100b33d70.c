
void FUN_100b33d70(long *param_1)

{
  FUN_100b26ad0();
  *param_1 = (long)&PTR_FUN_10223f100;
  *(undefined1 *)((long)param_1 + 100) = 0;
  FUN_100b0ed90(param_1);
  if (*(char *)((long)param_1 + 100) != '\0') {
    (**(code **)(*param_1 + 0x1c0))(param_1);
  }
  return;
}

