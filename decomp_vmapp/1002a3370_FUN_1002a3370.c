
undefined8 FUN_1002a3370(long *param_1,undefined4 *param_2,void *param_3)

{
  undefined8 uVar1;
  
  if (2 < DAT_1011b55f8) {
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_1008e3970("AudioDS","LocalDevices",3,"%s: set format: %u/%u/%u",uVar1,*param_2,param_2[2],
                  param_2[1]);
  }
  uVar1 = 0x80000001;
  if ((int)param_1[4] == 0) {
    _memcpy(param_1 + 5,param_2,0xb8);
    _memcpy(param_3,param_2,0xb8);
    uVar1 = 0;
  }
  return uVar1;
}

