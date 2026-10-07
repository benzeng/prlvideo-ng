
void FUN_1002a3210(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (2 < DAT_1011b55f8) {
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_1008e3970("AudioDS","LocalDevices",3,"%s: stream detached: %p",uVar1,param_2);
  }
  if (((char)param_1[2] != '\0') && ((int)param_1[4] == 0)) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}

