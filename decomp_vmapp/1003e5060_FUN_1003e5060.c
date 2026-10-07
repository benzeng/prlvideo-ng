
undefined8 FUN_1003e5060(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100410570(param_1[0xb],0x10,param_1[9],0x20,param_1[0xc],0x12,param_1[0x13],
                        param_1[0x1a],param_1[0x1a],0);
  if (iVar1 < 1) {
    (**(code **)(*param_1 + 0x270))(param_1,0x52400);
  }
  (**(code **)(*param_1 + 0x278))(param_1,8,iVar1);
  return 0;
}

