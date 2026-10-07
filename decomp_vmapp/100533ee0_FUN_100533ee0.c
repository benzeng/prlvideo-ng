
void FUN_100533ee0(undefined8 *param_1,long param_2)

{
  FUN_100519220();
  *param_1 = &PTR_FUN_100bc5090;
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  if (param_2 != 0) {
    FUN_10051a6b0(param_2 + 0x10f0,9,param_1);
  }
  return;
}

