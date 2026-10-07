
ulong FUN_100088610(long param_1,undefined8 param_2,undefined1 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = CVmConfiguration::getVmHardwareList();
  CVmConfiguration::getVmSettings();
  iVar3 = FUN_1007da320(param_1 + 0xa58,"vm.macos_support",0);
  uVar4 = 0x702;
  if (iVar3 == 0) {
    CVmSettings::getVmCommonOptions();
    uVar4 = CVmCommonOptions::getOsVersion();
  }
  *(undefined4 *)(param_1 + 0x480) = uVar4;
  CVmSettings::getVmStartupOptions();
  CVmStartupOptionsBase::getBios();
  bVar1 = CVmStartupBios::isEfiEnabled();
  lVar8 = (ulong)bVar1 << 6;
  if ((*(uint *)(param_1 + 0x480) & 0xffffff00) == 0x700) {
    lVar8 = 0x40;
  }
  iVar5 = FUN_1007da300("vm.bios.efi",lVar8);
  iVar3 = 0x40;
  if (iVar5 == 0x20) {
    iVar3 = iVar5;
  }
  if (iVar5 == 0) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0xa20) = iVar3;
  FUN_100085da0(param_1,uVar6,param_2);
  CVmSettings::getVmRuntimeOptions();
  uVar2 = CVmRunTimeOptions::isDisableAPIC();
  iVar3 = FUN_1007da320(param_1 + 0xa58,"devices.apic.disable",uVar2);
  if (iVar3 == 0) {
    *(byte *)(param_1 + 0xa1c) = *(byte *)(param_1 + 0xa1c) | 8;
    iVar3 = FUN_1007da300("devices.x2apic.enable",1);
    if (iVar3 != 0) {
      *(byte *)(param_1 + 0xa1c) = *(byte *)(param_1 + 0xa1c) | 0x20;
    }
  }
  uVar7 = FUN_100088000(param_1,param_2);
  if (-1 < (int)uVar7) {
    iVar3 = FUN_100086e00(param_1,param_2,param_3);
    uVar7 = (ulong)(iVar3 >> 0x1f & 0x80000036);
  }
  return uVar7;
}

