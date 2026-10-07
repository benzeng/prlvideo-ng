
int FUN_100086e00(long param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_8f8 [24];
  byte local_8e0;
  undefined4 local_8d0;
  undefined4 uStack_8cc;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 local_8c0;
  undefined4 uStack_8bc;
  uint local_8b8;
  undefined4 uStack_8b4;
  undefined4 local_8b0;
  undefined4 uStack_8ac;
  undefined1 local_8a8 [2008];
  undefined1 local_d0 [4];
  undefined1 local_cc [148];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  CVmConfiguration::getVmSettings();
  local_8d0 = 0;
  iVar3 = FUN_1000ee680(local_d0);
  if (iVar3 == 0) {
    FUN_1008e3970("","vm",0,"CPU features initialization failed. CPU is unsupported. Vendor %s",
                  local_cc);
    iVar3 = -0x7ffffff7;
  }
  else {
    if (param_3 != '\0') {
      FUN_1000ef230(local_d0,local_8a8,2000);
      FUN_1008e3970("","vm",0,"Current CPU: %s",local_8a8);
      FUN_1000ef330(local_d0,local_8a8,2000);
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      FUN_1008e3970("","vm",0,"Current CPU: %s",local_8a8);
    }
    CVmSettings::getVmRuntimeOptions();
    cVar1 = CVmRunTimeOptions::isCpuFeaturesMaskValid();
    if (cVar1 == '\0') {
      CVmConfiguration::getVmHardwareList();
      uVar5 = CVmHardware::getCpu();
      iVar3 = FUN_100086940(param_1,local_d0,&local_8d0,uVar5);
      if (iVar3 < 0) goto LAB_10008727e;
    }
    else {
      CVmConfiguration::getVmHardwareList();
      uVar5 = CVmHardware::getCpu();
      iVar3 = FUN_100086940(param_1,local_d0,local_8f8,uVar5);
      if (iVar3 < 0) goto LAB_10008727e;
      CVmSettings::getVmRuntimeOptions();
      uStack_8cc = CVmRunTimeOptions::getFEATURES_MASK();
      CVmSettings::getVmRuntimeOptions();
      local_8c8 = CVmRunTimeOptions::getEXT_FEATURES_MASK();
      CVmSettings::getVmRuntimeOptions();
      uStack_8c4 = CVmRunTimeOptions::getEXT_80000001_ECX_MASK();
      CVmSettings::getVmRuntimeOptions();
      local_8c0 = CVmRunTimeOptions::getEXT_80000001_EDX_MASK();
      CVmSettings::getVmRuntimeOptions();
      uStack_8bc = CVmRunTimeOptions::getEXT_80000007_EDX_MASK();
      CVmSettings::getVmRuntimeOptions();
      local_8b8 = CVmRunTimeOptions::getEXT_80000008_EAX();
      CVmSettings::getVmRuntimeOptions();
      uStack_8b4 = CVmRunTimeOptions::getEXT_00000007_EBX_MASK();
      CVmSettings::getVmRuntimeOptions();
      local_8b0 = CVmRunTimeOptions::getEXT_0000000D_EAX_MASK();
      CVmSettings::getVmRuntimeOptions();
      uStack_8ac = CVmRunTimeOptions::getEXT_00000006_EAX_MASK();
      if (param_3 != '\0') {
        FUN_1000effe0(&local_8d0,local_8a8,2000);
        FUN_1008e3970("","vm",0,"Config  CPU features mask: %s",local_8a8);
      }
      FUN_1000eef90(local_8f8,&local_8d0);
      if ((char)local_8b8 == '\0') {
        local_8b8 = local_8b8 & 0xffffff00 | (uint)local_8e0;
      }
    }
    uVar4 = CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setFEATURES_MASK(uVar4);
    uVar4 = CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setEXT_FEATURES_MASK(uVar4);
    uVar4 = CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setEXT_80000001_ECX_MASK(uVar4);
    uVar4 = CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setEXT_80000001_EDX_MASK(uVar4);
    uVar4 = CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setEXT_80000007_EDX_MASK(uVar4);
    uVar4 = CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setEXT_80000008_EAX(uVar4);
    uVar4 = CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setEXT_00000007_EBX_MASK(uVar4);
    uVar4 = CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setEXT_0000000D_EAX_MASK(uVar4);
    uVar4 = CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setEXT_00000006_EAX_MASK(uVar4);
    bVar2 = (bool)CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setCpuFeaturesMaskValid(bVar2);
    *(ulong *)(param_1 + 0x9e0) = CONCAT44(uStack_8ac,local_8b0);
    *(ulong *)(param_1 + 0x9d8) = CONCAT44(uStack_8b4,local_8b8);
    *(ulong *)(param_1 + 0x9d0) = CONCAT44(uStack_8bc,local_8c0);
    *(ulong *)(param_1 + 0x9c8) = CONCAT44(uStack_8c4,local_8c8);
    *(ulong *)(param_1 + 0x9c0) = CONCAT44(uStack_8cc,local_8d0);
    iVar3 = 0;
    if (param_3 != '\0') {
      FUN_1000effe0(param_1 + 0x9c0,local_8a8,2000);
      iVar3 = 0;
      FUN_1008e3970("","vm",0,"Current CPU features mask: %s",local_8a8);
      FUN_1000eee30(param_1 + 0x9c0,local_8a8,2000);
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      FUN_1008e3970("","vm",0,"Current CPU features mask: %s",local_8a8);
    }
  }
LAB_10008727e:
  if (lVar6 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

