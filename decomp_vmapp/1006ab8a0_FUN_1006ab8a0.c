
void FUN_1006ab8a0(long *param_1)

{
  FUN_10069e460();
  *param_1 = (long)&PTR_FUN_100bcd3a0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  FUN_100686720(param_1);
  if (*(char *)((long)param_1 + 100) != '\0') {
    (**(code **)(*param_1 + 0x1c0))(param_1);
  }
  return;
}

