
undefined8 FUN_100097210(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x110) != 0) {
    uVar1 = CVmConfiguration::getVmHardwareList();
    return uVar1;
  }
  FUN_1008e3970("","vm",0,"Error accessing configuration object");
  return 0;
}

