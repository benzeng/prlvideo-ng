
undefined8 FUN_10002f0f0(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(*param_2 + *(long *)(*param_2 + 0x10));
  QByteArray::resize((int)param_3);
  puVar6 = (uint *)*param_3;
  if ((1 < *puVar6) || (*(long *)(puVar6 + 4) != 0x18)) {
    QByteArray::reallocData(param_3,puVar6[1] + 1,puVar6[2] >> 0x1f);
    puVar6 = (uint *)*param_3;
  }
  lVar1 = *(long *)(puVar6 + 4);
  uVar2 = *puVar7;
  *(undefined8 *)((long)puVar6 + lVar1 + 8) = puVar7[1];
  *(undefined8 *)((long)puVar6 + lVar1) = uVar2;
  *(undefined8 *)((long)puVar6 + lVar1 + 0x10) = 0x1f00000000;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  cVar3 = CVmRunTimeOptions::isDisableWin7Logo();
  if (cVar3 != '\0') {
    *(undefined8 *)((long)puVar6 + lVar1 + 0x10) = 0x600000001;
  }
  lVar4 = FUN_100097250(DAT_1011c3698);
  uVar5 = 1;
  if (*(long *)(lVar4 + 0x868) != 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((long)puVar6 + lVar1 + 0x18) = uVar5;
  lVar4 = FUN_100097250(DAT_1011c3698);
  if ((lVar4 == 0) || (*(int *)(DAT_1011c3698 + 0xb90) == 0)) {
    *(undefined4 *)(lVar1 + 0x1c + (long)puVar6) = 1;
  }
  else {
    *(undefined4 *)(lVar1 + 0x1c + (long)puVar6) = 2;
  }
  return 0;
}

