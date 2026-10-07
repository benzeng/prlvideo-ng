
/* WARNING: Removing unreachable block (ram,0x000100087627) */
/* WARNING: Removing unreachable block (ram,0x000100087638) */
/* WARNING: Removing unreachable block (ram,0x00010008769c) */
/* WARNING: Removing unreachable block (ram,0x0001000876a1) */
/* WARNING: Removing unreachable block (ram,0x00010008763d) */
/* WARNING: Removing unreachable block (ram,0x000100087665) */
/* WARNING: Removing unreachable block (ram,0x0001000876bb) */
/* WARNING: Removing unreachable block (ram,0x0001000876c4) */
/* WARNING: Removing unreachable block (ram,0x0001000876d6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100087300(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  _PRL_CPULIMIT_DATA *p_Var5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  bool bVar10;
  undefined1 auVar11 [12];
  
  CVmConfiguration::getVmSettings();
  CVmConfiguration::getVmHardwareList();
  CVmSettings::getVmStartupOptions();
  bVar1 = CVmStartupOptionsBase::isAllowSelectBootDevice();
  uVar7 = bVar1 + 8;
  if (1 < *(int *)(param_1 + 0x444) - 1U) {
    uVar7 = (uint)bVar1;
  }
  uVar3 = FUN_1007da300("devices.bios.flags",uVar7);
  *(undefined4 *)(param_1 + 0x9a4) = uVar3;
  if (*(char *)(param_1 + 0xf60) == '\0') {
    bVar10 = (*(uint *)(param_1 + 0x480) & 0xfffffffe) != 0x80c;
  }
  else {
    bVar10 = false;
  }
  iVar4 = FUN_1007da300("kernel.report_hibernate",bVar10);
  if (iVar4 != 0) {
    *(byte *)(param_1 + 0x9a4) = *(byte *)(param_1 + 0x9a4) | 0x20;
  }
  uVar8 = 0x32f;
  if ((*(uint *)(param_1 + 0x480) & 0xffffff00) != 0xe00) {
    CVmHardware::getChipset();
    iVar4 = Chipset::getType();
    uVar8 = 0x3c5;
    if (iVar4 == 0) {
      uVar8 = 0x32f;
    }
  }
  uVar3 = FUN_1007da300("devices.chipset",uVar8);
  *(undefined4 *)(param_1 + 0x494) = uVar3;
  CVmHardware::getChipset();
  uVar3 = Chipset::getVersion();
  uVar3 = FUN_1007da300("devices.chipset.ver",uVar3);
  *(undefined4 *)(param_1 + 0xa18) = uVar3;
  uVar3 = FUN_1007da300("devices.ide.irq_level",*(int *)(param_1 + 0x480) == 0x90b);
  *(undefined4 *)(param_1 + 0x9a8) = uVar3;
  iVar4 = FUN_1007da300("devices.hpet.enable",
                        -(*(uint *)(param_1 + 0x480) < 0x807) &
                        (*(uint *)(param_1 + 0x480) & 0xffffff00) == 0x800 ^ 1);
  if (iVar4 != 0) {
    *(byte *)(param_1 + 0xa1c) = *(byte *)(param_1 + 0xa1c) | 1;
  }
  uVar7 = 0;
  iVar4 = FUN_1007da300("devices.acpi.whea",0);
  if (iVar4 != 0) {
    *(byte *)(param_1 + 0xa1c) = *(byte *)(param_1 + 0xa1c) | 0x10;
  }
  uVar6 = (*(uint *)(param_1 + 0x480) >> 8) - 8;
  if (uVar6 < 9) {
    uVar7 = 0x183U >> ((byte)uVar6 & 0x1f) & 1;
  }
  iVar4 = FUN_1007da300("vm.pcie.mcfg_enable",uVar7);
  if (iVar4 != 0) {
    *(byte *)(param_1 + 0xa1c) = *(byte *)(param_1 + 0xa1c) | 2;
  }
  iVar4 = FUN_1007da300("kernel.waet.enable",
                        0x808 < *(uint *)(param_1 + 0x480) &&
                        (*(uint *)(param_1 + 0x480) & 0xffffff00) == 0x800);
  if (iVar4 != 0) {
    *(byte *)(param_1 + 0xa1c) = *(byte *)(param_1 + 0xa1c) | 4;
  }
  iVar4 = FUN_1007da300("devices.pvpanic.enable",(*(uint *)(param_1 + 0x480) & 0xffffff00) != 0x800)
  ;
  if (iVar4 != 0) {
    *(byte *)(param_1 + 0xa1c) = *(byte *)(param_1 + 0xa1c) | 0x40;
  }
  auVar11 = FUN_100710a10();
  uVar9 = auVar11._0_8_ >> 0x20;
  FUN_1008e3970("","vm",0,"OS X %u.%u.%u",auVar11._0_8_ & 0xffffffff,uVar9,auVar11._8_4_);
  uVar3 = FUN_1007da300("kernel.tsc.hv_vm_sync_tsc",
                        0xa0b04 < (auVar11._0_4_ << 0x10 | auVar11._8_4_ | (uint)(uVar9 << 8)));
  *(undefined4 *)(param_1 + 0xa4c) = uVar3;
  *(ulong *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0x18) = (int)(param_3 / 1000000);
  cVar2 = FUN_1006df590();
  if ((cVar2 != '\0') &&
     (iVar4 = FUN_1007da320(param_1 + 0xa58,"vm.cpu_limit_mhz.enable",0), iVar4 != 0)) {
    uVar3 = FUN_100778180();
    p_Var5 = (_PRL_CPULIMIT_DATA *)CVmHardware::getCpu();
    CVmCpu::getCpuLimitData(p_Var5);
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",2,"Node Cpus %d TSC %dMhz VM Cpus %d %dMhz (limit %d)",uVar3,
                    param_3 / 1000000 & 0xffffffff,*(undefined4 *)(param_1 + 0x498),
                    *(undefined4 *)(param_1 + 0x18),0);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = param_4;
  return;
}

