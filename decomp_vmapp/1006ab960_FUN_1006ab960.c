
void FUN_1006ab960(long *param_1)

{
  *param_1 = (long)&PTR_FUN_100bcd3a0;
  FUN_100686720();
  if (*(char *)((long)param_1 + 100) != '\0') {
    (**(code **)(*param_1 + 0x1c0))(param_1);
  }
  FUN_10069e4c0(param_1);
  return;
}

