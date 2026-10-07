
void FUN_100088a10(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVmHibernateState();
  uVar2 = FUN_1007da300("kernel.hibernate.smap_type",0xfffffffe);
  *(uint *)(param_1 + 0xf68) = uVar2;
  if (uVar2 == 0xffffffff) {
    iVar3 = CVmHiberateState::getSMapType();
    uVar2 = (uint)(iVar3 == 0);
    *(uint *)(param_1 + 0xf68) = (uint)(iVar3 == 0);
    goto LAB_100088baf;
  }
  if (uVar2 != 0xfffffffe) goto LAB_100088baf;
  CVmHiberateState::getCpuFeatures();
  local_54 = CVmCpuFeatures::getFEATURES_MASK();
  CVmHiberateState::getCpuFeatures();
  local_50 = CVmCpuFeatures::getEXT_FEATURES_MASK();
  CVmHiberateState::getCpuFeatures();
  local_4c = CVmCpuFeatures::getEXT_80000001_ECX_MASK();
  CVmHiberateState::getCpuFeatures();
  local_48 = CVmCpuFeatures::getEXT_80000001_EDX_MASK();
  CVmHiberateState::getCpuFeatures();
  local_44 = CVmCpuFeatures::getEXT_80000007_EDX_MASK();
  CVmHiberateState::getCpuFeatures();
  local_40 = CVmCpuFeatures::getEXT_80000008_EAX();
  CVmHiberateState::getCpuFeatures();
  local_3c = CVmCpuFeatures::getEXT_00000007_EBX_MASK();
  CVmHiberateState::getCpuFeatures();
  local_38 = CVmCpuFeatures::getEXT_0000000D_EAX_MASK();
  CVmHiberateState::getCpuFeatures();
  local_34 = CVmCpuFeatures::getEXT_00000006_EAX_MASK();
  uVar4 = CVmHiberateState::getSMapType();
  *(undefined4 *)(param_1 + 0xf68) = uVar4;
  iVar3 = CVmHiberateState::getShutdownReason();
  cVar1 = CVmHiberateState::isConfigDirty();
  if ((cVar1 == '\0') && (*(int *)(DAT_1011c3698 + 0x107d0) == 0)) {
    if ((iVar3 == 3) ||
       ((iVar3 == 2 && (iVar3 = FUN_1000eec60(local_58,param_1 + 0x9c0), iVar3 == 0)))) {
LAB_100088b93:
      *(uint *)(param_1 + 0xf68) = (uint)(*(int *)(param_1 + 0xf68) == 0);
    }
  }
  else if (iVar3 - 1U < 3) goto LAB_100088b93;
  uVar2 = *(uint *)(param_1 + 0xf68);
LAB_100088baf:
  FUN_1008e3970("","vm",0,"HibernateSmapType = %d",uVar2);
  return;
}

