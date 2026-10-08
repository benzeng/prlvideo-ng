
void FUN_10018b8f0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = CVmConfiguration::getValidRc();
  if (iVar1 < 0) {
    if (((iVar1 + 0x7ffffa7cU < 2) || (iVar1 == -0x7ffbbdfd)) || (iVar1 == -0x7ffbbdef)) {
      CVmConfiguration::setValidRc((uint)*(undefined8 *)(param_1 + 0x80));
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  uVar2 = CVmConfiguration::getValidRc();
  uVar3 = FUN_100dddcf0(uVar2);
  FUN_100df99c0("","prl_client_app",0,"m_pVmCfg->getValidRc() = %s",uVar3);
  if (*(int *)(param_1 + 100) == 1) {
    return;
  }
  *(undefined4 *)(param_1 + 100) = 1;
  FUN_100805240(param_1,1);
  return;
}

