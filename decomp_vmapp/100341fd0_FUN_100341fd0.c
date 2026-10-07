
void FUN_100341fd0(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = &PTR_FUN_100bbbd90;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 2) = param_2[1];
  *(undefined4 *)((long)param_1 + 0x14) = param_2[3];
  return;
}

