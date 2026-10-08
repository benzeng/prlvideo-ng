
undefined8 FUN_100cd1bd0(long *param_1)

{
  FUN_100cd05d0(param_1,4);
  if (((char)param_1[0xd] != '\0') && ((int)param_1[4] == 3)) {
    (**(code **)(*param_1 + 0x130))(param_1);
  }
  return 0;
}

