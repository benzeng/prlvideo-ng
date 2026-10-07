
void FUN_1000872a0(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  CVmSettings::getVmRuntimeOptions();
  uVar1 = CVmRunTimeOptions::isDisableAPIC();
  iVar2 = FUN_1007da320(param_1 + 0xa58,"devices.apic.disable",uVar1);
  if (iVar2 == 0) {
    *(byte *)(param_1 + 0xa1c) = *(byte *)(param_1 + 0xa1c) | 8;
    iVar2 = FUN_1007da300("devices.x2apic.enable",1);
    if (iVar2 != 0) {
      *(byte *)(param_1 + 0xa1c) = *(byte *)(param_1 + 0xa1c) | 0x20;
    }
  }
  return;
}

