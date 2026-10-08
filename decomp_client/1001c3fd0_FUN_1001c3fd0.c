
void FUN_1001c3fd0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  uint *puVar7;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar3 = *(uint **)(param_1 + 0x10);
  if (1 < *puVar3) {
    FUN_1001c4bd0(puVar1,puVar3[1]);
    puVar3 = (uint *)*puVar1;
  }
  puVar7 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar3) {
      FUN_1001c4bd0(puVar1,puVar3[1]);
      puVar3 = (uint *)*puVar1;
    }
    if (puVar7 == puVar3 + (long)(int)puVar3[3] * 2 + 4) break;
    uVar4 = FUN_100152280();
    lVar5 = FUN_100154930(uVar4,*(long *)puVar7 + 8);
    if (lVar5 != 0) {
      FUN_10018c2b0(lVar5);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      iVar2 = CVmRunTimeOptions::getOptimizePowerConsumptionMode();
      cVar6 = '\x01';
      if (iVar2 == 1) goto LAB_1001c407c;
    }
    puVar7 = puVar7 + 2;
    puVar3 = (uint *)*puVar1;
  }
  cVar6 = '\0';
LAB_1001c407c:
  if (cVar6 != *(char *)(param_1 + 0x18)) {
    *(char *)(param_1 + 0x18) = cVar6;
    FUN_1001c40b0(param_1);
    return;
  }
  return;
}

