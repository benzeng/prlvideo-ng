
void FUN_100b33dd0(long *param_1)

{
  *param_1 = (long)&PTR_FUN_10223f100;
  FUN_100b0ed90();
  if (*(char *)((long)param_1 + 100) != '\0') {
    (**(code **)(*param_1 + 0x1c0))(param_1);
  }
  FUN_100b26b30(param_1);
  return;
}

