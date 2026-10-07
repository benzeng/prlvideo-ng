
void FUN_1003e1570(long *param_1)

{
  if (*(char *)param_1[0xb] == -0x62) {
                    /* WARNING: Could not recover jumptable at 0x0001003e1586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  }
  *(undefined1 *)param_1[9] = *(undefined1 *)((long)param_1 + 0xa3);
  *(undefined1 *)(param_1[9] + 1) = *(undefined1 *)((long)param_1 + 0xa2);
  *(undefined1 *)(param_1[9] + 2) = *(undefined1 *)((long)param_1 + 0xa1);
  *(char *)(param_1[9] + 3) = (char)param_1[0x14];
  *(undefined1 *)(param_1[9] + 4) = *(undefined1 *)((long)param_1 + 0xd3);
  *(undefined1 *)(param_1[9] + 5) = *(undefined1 *)((long)param_1 + 0xd2);
  *(undefined1 *)(param_1[9] + 6) = *(undefined1 *)((long)param_1 + 0xd1);
  *(char *)(param_1[9] + 7) = (char)param_1[0x1a];
                    /* WARNING: Could not recover jumptable at 0x0001003e1608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,8,8);
  return;
}

