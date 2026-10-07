
undefined8 FUN_1002b1b80(int param_1)

{
  long lVar1;
  
  FUN_1008e3970("","LocalDevices",0,"VGPU [SetVgpuState] %d",param_1);
  lVar1 = FUN_100097250(DAT_1011c3698);
  *(bool *)(lVar1 + 0x118a0) = param_1 != 0;
  return 0;
}

