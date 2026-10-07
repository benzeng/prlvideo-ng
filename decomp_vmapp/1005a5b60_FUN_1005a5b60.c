
undefined8 FUN_1005a5b60(long *param_1,char param_2)

{
  (**(code **)(*param_1 + 0x38))();
  if (param_2 != '\0') {
    FUN_1005a5340(param_1);
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
  }
  return 0;
}

