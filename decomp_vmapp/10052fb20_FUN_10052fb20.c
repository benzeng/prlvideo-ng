
void FUN_10052fb20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc5030;
  FUN_1000412f0(param_1[8]);
  FUN_100040d30(param_1[8]);
  FUN_100519360(DAT_1011c3698 + 0x10f0,0xd);
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  FUN_1005192c0(param_1);
  return;
}

