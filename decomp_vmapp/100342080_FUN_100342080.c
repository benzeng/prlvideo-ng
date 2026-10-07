
void FUN_100342080(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = &PTR_FUN_100bbbdd0;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_2[1];
  return;
}

