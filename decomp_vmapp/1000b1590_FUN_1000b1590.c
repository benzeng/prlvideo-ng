
undefined8 FUN_1000b1590(void)

{
  int iVar1;
  undefined8 uVar2;
  size_t local_18;
  int local_c;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  iVar1 = CVmRunTimeOptions::getHypervisorType();
  uVar2 = 1;
  if (iVar1 == 1) {
    local_c = 0;
    local_18 = 4;
    iVar1 = _sysctlbyname("kern.hv_support",&local_c,&local_18,(void *)0x0,0);
    if ((iVar1 != 0) || (uVar2 = 2, local_c == 0)) {
      FUN_1008e3970("","vm",0,"AppleHV does not support this Mac, defaulting to own engine");
      uVar2 = 1;
    }
  }
  return uVar2;
}

