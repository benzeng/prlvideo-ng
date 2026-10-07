
void FUN_1004c3a40(undefined8 *param_1,undefined8 param_2)

{
  FUN_1004c1f40(param_1,param_2,0x8000,0x8001);
  *param_1 = &PTR_FUN_100bc2f28;
  *(undefined1 *)(param_1 + 9) = 0;
  DAT_100bf9994 = param_1;
  DAT_100bf99ad = DAT_100bf99ad | 1;
  return;
}

