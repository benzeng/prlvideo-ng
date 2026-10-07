
undefined8 FUN_1005a5960(long *param_1)

{
  QThread::wait((ulong)(param_1 + 0xe));
  (**(code **)(*param_1 + 0xe8))(param_1);
  (**(code **)(*param_1 + 0x1e0))(param_1);
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[7] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)((long)param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x10] = (long)param_1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  FUN_1005a8180(param_1);
  (**(code **)(*param_1 + 0xf0))(param_1);
  return 0;
}

