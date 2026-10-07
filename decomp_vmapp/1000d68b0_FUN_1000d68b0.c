
undefined8 FUN_1000d68b0(long *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    operator_delete__((void *)param_1[3]);
    param_1[3] = 0;
  }
  (**(code **)(*param_1 + 0x70))(param_1);
  return 1;
}

