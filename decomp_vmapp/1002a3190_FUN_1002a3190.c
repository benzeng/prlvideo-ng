
undefined8 FUN_1002a3190(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (2 < DAT_1011b55f8) {
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_1008e3970("AudioDS","LocalDevices",3,"%s: stream attached: %p",uVar1,param_2);
  }
  uVar1 = 0x80000001;
  if (((char)param_1[2] == '\0') && (((int)param_1[4] == 0 || ((int)param_1[4] == 3)))) {
    param_1[3] = param_2;
    *(undefined1 *)(param_1 + 2) = 1;
    *(undefined4 *)(param_1 + 4) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

