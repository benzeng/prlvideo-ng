
undefined8 FUN_100b1d350(long *param_1)

{
  (**(code **)(param_1[0x301f] + 0x18))(param_1 + 0x301f);
  (**(code **)(*param_1 + 0x40))(param_1);
  if ((void *)param_1[0x3120] != (void *)0x0) {
    _free((void *)param_1[0x3120]);
  }
  param_1[0x3120] = 0;
  return 0;
}

