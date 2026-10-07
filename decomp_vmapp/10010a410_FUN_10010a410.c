
void FUN_10010a410(long *param_1,undefined4 *param_2)

{
  *param_1 = (long)param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_2 = 0;
  *(undefined4 *)(*param_1 + 0x10) = 0;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(undefined4 *)(*param_1 + 8) = 1;
  *(undefined4 *)(*param_1 + 0xc) = 2;
  return;
}

