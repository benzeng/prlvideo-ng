
undefined8 FUN_1004aee50(long param_1,long param_2,char param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xf0000003;
  if (*(short *)(param_2 + 0x14) == 0x10) {
    lVar2 = FUN_1002a6010(param_2);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 4) = 0;
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmCoherence();
      cVar1 = CVmCoherence::isDisableAero();
      *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) | (uint)(cVar1 == '\0') * 2;
      uVar3 = 0;
    }
  }
  if (param_3 != '\0') {
    FUN_1004c07d0(param_1 + 0x10,param_2,uVar3);
  }
  return uVar3;
}

