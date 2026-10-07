
undefined8 FUN_100264270(long param_1,CVmParallelPort *param_2)

{
  int iVar1;
  
  CVmParallelPort::operator=((CVmParallelPort *)(param_1 + 8),param_2);
  iVar1 = FUN_1007da300("devices.printer.keep_spool",0);
  *(bool *)(param_1 + 0x100) = iVar1 != 0;
  iVar1 = FUN_1007da300("devices.printer.can_cancel",1);
  *(bool *)(param_1 + 0x101) = iVar1 != 0;
  return 0;
}

