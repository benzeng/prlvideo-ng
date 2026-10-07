
void FUN_10052f480(undefined8 *param_1)

{
  FUN_100519220();
  *param_1 = &PTR_FUN_100bc4fd0;
  param_1[8] = PTR_shared_null_100ba2188;
  if (DAT_1011c3698 == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","VmCliPresentationHost",1,
                    "Virtual machine doesn\'t exist, so the tool cannot be registered");
    }
  }
  else {
    FUN_10051a6b0(DAT_1011c3698 + 0x10f0,0xc,param_1);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_10052f540(param_1,2);
  return;
}

