
undefined8 FUN_1000f9f30(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1007da300("devices.sfilter.disable_after_resume",0);
  if (iVar1 != 0) {
    *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
  }
  return 0;
}

