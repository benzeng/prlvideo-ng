
void FUN_100522ce0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 8);
  *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)(param_3 + 0xc);
  return;
}

