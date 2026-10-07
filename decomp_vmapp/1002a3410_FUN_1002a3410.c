
void FUN_1002a3410(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (3 < DAT_1011b55f8) {
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_1008e3970("AudioDS","LocalDevices",4,"%s: lock buffer: %u",uVar2,param_2);
  }
  *(undefined1 *)(param_1 + 0x21) = 1;
  uVar1 = FUN_1007d7180(param_1[0x1c],param_2,param_3,param_4,param_5,param_6);
  *(undefined4 *)((long)param_1 + 0x10c) = uVar1;
  return;
}

