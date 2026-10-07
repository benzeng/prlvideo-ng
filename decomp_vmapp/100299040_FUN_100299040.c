
undefined8 FUN_100299040(long *param_1)

{
  undefined8 uVar1;
  
  if (1 < DAT_1011b55f8) {
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    FUN_1008e3970("AudioAS","LocalDevices",2,"[CSoundDevice] [%s] Initializing",uVar1);
  }
  (**(code **)(*param_1 + 0xa8))(param_1);
  FUN_1002990b0(param_1);
  FUN_100257c20(param_1);
  return 0;
}

