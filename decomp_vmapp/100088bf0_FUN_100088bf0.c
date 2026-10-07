
void FUN_100088bf0(undefined8 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  CVmConfiguration::getVmHardwareList();
  uVar3 = CVmHardware::getVmHibernateState();
  if (param_2 != -1) {
    CVmHiberateState::setShutdownReason(uVar3,param_2);
    CVmHiberateState::setSMapType((uint)uVar3);
    CVmHiberateState::setConfigDirty(SUB81(uVar3,0));
    *(undefined4 *)(DAT_1011c3698 + 0x107d0) = 0;
    uVar2 = CVmHiberateState::getCpuFeatures();
    CVmCpuFeatures::setFEATURES_MASK(uVar2);
    uVar2 = CVmHiberateState::getCpuFeatures();
    CVmCpuFeatures::setEXT_FEATURES_MASK(uVar2);
    uVar2 = CVmHiberateState::getCpuFeatures();
    CVmCpuFeatures::setEXT_80000001_ECX_MASK(uVar2);
    uVar2 = CVmHiberateState::getCpuFeatures();
    CVmCpuFeatures::setEXT_80000001_EDX_MASK(uVar2);
    uVar2 = CVmHiberateState::getCpuFeatures();
    CVmCpuFeatures::setEXT_80000007_EDX_MASK(uVar2);
    uVar2 = CVmHiberateState::getCpuFeatures();
    CVmCpuFeatures::setEXT_80000008_EAX(uVar2);
    uVar2 = CVmHiberateState::getCpuFeatures();
    CVmCpuFeatures::setEXT_00000007_EBX_MASK(uVar2);
    uVar2 = CVmHiberateState::getCpuFeatures();
    CVmCpuFeatures::setEXT_0000000D_EAX_MASK(uVar2);
    uVar2 = CVmHiberateState::getCpuFeatures();
    CVmCpuFeatures::setEXT_00000006_EAX_MASK(uVar2);
    bVar1 = (bool)CVmHiberateState::getCpuFeatures();
    CVmCpuFeatures::setCpuFeaturesMaskValid(bVar1);
    FUN_100088770();
    return;
  }
  return;
}

