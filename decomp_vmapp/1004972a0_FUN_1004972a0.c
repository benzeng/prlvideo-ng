
void FUN_1004972a0(undefined8 *param_1,undefined8 param_2)

{
  FUN_100519220();
  FUN_1004c0650(param_1 + 8,param_2);
  *param_1 = &PTR_FUN_100bc2298;
  param_1[8] = &PTR_FUN_100bc22e0;
  QMutex::QMutex((QMutex *)(param_1 + 0xe),0);
  param_1[0xf] = PTR_shared_null_100ba20d8;
  FUN_1004c0790(param_1 + 8,0x8a00,0x8a03);
  if (DAT_1011c3698 == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","VmCliPasswordHost",1,
                    "Virtual machine doesn\'t exist, so the tool cannot be registered");
    }
  }
  else {
    FUN_10051a6b0(DAT_1011c3698 + 0x10f0,0x14,param_1);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}

