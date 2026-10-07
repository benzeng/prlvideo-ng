
int FUN_100088000(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  bool bVar14;
  long local_98;
  undefined1 local_90 [24];
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  long local_58;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined1 local_31;
  
  local_31 = 0;
  CVmConfiguration::getVmHardwareList();
  uVar6 = FUN_100094840(param_2,&local_31);
  uVar9 = 0xfffffff;
  if (uVar6 < 6) {
    uVar9 = uVar6;
  }
  param_1[0x26c] = uVar9;
  CVmHardware::getMemory();
  uVar7 = CVmMemory::getRamSize();
  param_1[0x11b] = uVar7;
  CVmHardware::getVideo();
  uVar7 = CVmVideo::getMemorySize();
  param_1[0x11c] = uVar7;
  if ((*(byte *)(*(long *)(DAT_1011c3698 + 0x109c8) + 499) & 10) == 0) {
    local_58 = 0;
    uVar7 = 0;
    uVar11 = (ulong)(uint)param_1[0x11b] << 0x14;
    if (0xafffffff < uVar11 && (ulong)(uint)param_1[0x11b] != 0xb00) {
      uVar11 = 0xb0000000;
    }
    iVar8 = 0;
    if (param_1[0x288] != 0) {
      uVar7 = 0xf00000;
      local_58 = (ulong)((int)uVar11 - 0xf00000) << 0x20;
      iVar8 = 0xf00000;
    }
    local_48 = 0x5000;
    iVar10 = (int)uVar11 + -0x5000;
  }
  else {
    if (DAT_1011c3680 != '\0') {
      plVar13 = (long *)&DAT_1011c3668;
      goto LAB_100088161;
    }
    local_58 = 0;
    uVar7 = 0;
    uVar11 = (ulong)(uint)param_1[0x11b] << 0x14;
    if (0xafffffff < uVar11 && (ulong)(uint)param_1[0x11b] != 0xb00) {
      uVar11 = 0xb0000000;
    }
    iVar8 = 0;
    if (param_1[0x288] != 0) {
      uVar7 = 0x200000;
      local_58 = (ulong)((int)uVar11 - 0x200000) << 0x20;
      iVar8 = 0x200000;
    }
    local_48 = CONCAT44((uint)(param_1[0x288] != 0),0x2000);
    iVar10 = (int)uVar11 + -0x2000;
  }
  _uStack_50 = CONCAT44(iVar10 - iVar8,uVar7);
  plVar13 = &local_58;
LAB_100088161:
  iVar8 = FUN_100087e60(param_1,plVar13);
  if ((-1 < iVar8) && (iVar8 = FUN_100087970(param_1,param_1 + 0x122), -1 < iVar8)) {
    uVar7 = FUN_1007da300("kernel.lock_by_block",1);
    param_1[0x291] = uVar7;
    CVmHardware::getCpu();
    bVar2 = CVmCpu::isEnableHotplug();
    puVar1 = param_1 + 0x296;
    CVmHardware::getCpu();
    uVar7 = CVmCpu::getNumber();
    uVar9 = FUN_1007da320(puVar1,"vm.vcpu_count",uVar7);
    param_1[0x126] = uVar9;
    uVar12 = DAT_1011c3650;
    if (((1 < uVar9 | bVar2) == 1) && (uVar11 = *(ulong *)(param_1 + 0x122), (uVar11 & 3) != 1)) {
      local_78 = (void *)0x0;
      pvStack_70 = (void *)0x0;
      local_68 = 0;
      FUN_10006a060(local_90);
      FUN_1000648b0(uVar12,((uVar11 & 3) == 0) + 0x80000505,&local_78,local_90);
      FUN_10006a680(local_90);
      if (local_78 != (void *)0x0) {
        if (pvStack_70 != local_78) {
          pvStack_70 = (void *)((~((long)pvStack_70 + (-4 - (long)local_78)) & 0xfffffffffffffffcU)
                               + (long)pvStack_70);
        }
        operator_delete(local_78);
      }
      uVar6 = 0;
      FUN_1008e3970("","vm",0,"User tries to start SMP guest (%u) in non-HVT mode. HVT (0x%llx)",
                    param_1[0x126],*(undefined8 *)(param_1 + 0x122));
      param_1[0x126] = 1;
      bVar2 = 1;
    }
    else {
      uVar6 = (uint)bVar2;
      if (bVar2 == 0) {
        uVar6 = 0;
      }
      else {
        param_1[0x126] = 0x20;
        uVar9 = FUN_1007da320(puVar1,"vm.vcpu_online_count",uVar9);
      }
      bVar2 = (byte)uVar9;
    }
    param_1[0x127] = (int)(1L << (bVar2 & 0x3f)) + -1;
    param_1[0x128] = uVar6;
    CVmHardware::getMemory();
    uVar3 = CVmMemory::isEnableHotplug();
    uVar7 = FUN_1007da320(puVar1,"vm.mem_hotplug",uVar3);
    param_1[0x26f] = uVar7;
    uVar9 = param_1[0x120];
    CVmHardware::getCpu();
    iVar8 = CVmCpu::getAccelerationLevel();
    if (iVar8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar6 = uVar9 >> 8;
      uVar7 = 4;
      if (uVar6 != 0xb) {
        uVar7 = 3;
        if (3 < uVar9 - 0x801) {
          uVar7 = 1;
        }
        if (uVar6 != 8) {
          uVar7 = 1;
        }
      }
    }
    param_1[0x11a] = uVar7;
    iVar8 = FUN_1007da320(puVar1,"vm.smart_app_accel",0xffffffff);
    if (iVar8 != -1) {
      FUN_1008e3970("","vm",0,"Notify: Overriden 32-bit param %s = %u","vm.smart_app_accel",iVar8);
      param_1[0x11a] = iVar8;
    }
    uVar7 = FUN_1007da300("vm.stop_on_cli_hlt",0);
    param_1[0x121] = uVar7;
    cVar4 = FUN_1000877f0();
    *(char *)(param_1 + 0x3d8) = cVar4;
    if ((param_1[0x26c] == 5) ||
       (((uint)param_1[0x26c] < 2 && (param_1[0x120] - 0x806 < 3 && cVar4 == '\0')))) {
      *(byte *)(param_1 + 0x287) = *(byte *)(param_1 + 0x287) & 0xf7;
    }
    *param_1 = 0xdead0a58;
    param_1[0x117] = 2;
    uVar7 = FUN_1007da320(puVar1,"devices.mac.native_smc",1);
    param_1[0x26d] = uVar7;
    uVar5 = FUN_1007da320(puVar1,"kernel.vpid.enable",1);
    *(undefined2 *)(param_1 + 0x124) = uVar5;
    param_1[0x26e] = 0;
    uVar7 = FUN_1007da320(puVar1,"vm.onclosing",0);
    param_1[0x26e] = uVar7;
    iVar8 = FUN_1007da320(puVar1,"encryption.aesni",1);
    DAT_1011cca90._0_1_ = iVar8 == 0;
    param_1[0x294] = 0;
    local_98 = DAT_1011c3698 + 0x110;
    iVar8 = FUN_1000b4970(&local_98);
    if (iVar8 - 1U < 2) {
      uVar7 = FUN_1007da300("devices.vgpu.enable",0);
      param_1[0x294] = uVar7;
    }
    iVar8 = 0;
    bVar14 = false;
    if (*(int *)(DAT_1011c3698 + 0x109e0) == 1) {
      bVar14 = param_1[0x294] == 0;
    }
    uVar7 = FUN_1007da320(puVar1,"vm.hugepages.enabled",bVar14);
    param_1[0x284] = uVar7;
    uVar6 = FUN_1007da320(puVar1,"kernel.hltdelay",0);
    uVar9 = 10000;
    if (uVar6 < 0x2711) {
      uVar9 = uVar6;
    }
    param_1[0x285] = uVar9;
    uVar12 = FUN_1007da520("etrace.enable",0);
    *(undefined8 *)(param_1 + 0x28e) = uVar12;
    iVar10 = FUN_1007da300("etrace.bufsize",0x10);
    param_1[0x290] = iVar10 << 0x14;
  }
  return iVar8;
}

