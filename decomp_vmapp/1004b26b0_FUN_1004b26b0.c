
void FUN_1004b26b0(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  if (*(long *)(*(long *)(param_1 + 0x78) + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmCoherence();
    bVar1 = CVmCoherence::isDisableAero();
    CVmTools::getVmCoherence();
    bVar2 = CVmCoherence::isDisableAero();
    if ((bVar2 ^ bVar1) == 1) {
      puVar3 = operator_new(0x18);
      puVar3[2] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      *(undefined4 *)((long)puVar3 + 4) = 7;
      FUN_1004ae8a0(param_1,puVar3,param_1 + 0xb8,0);
      return;
    }
  }
  return;
}

