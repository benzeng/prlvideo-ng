
undefined8 FUN_10002c370(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  uint *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*param_2 + *(long *)(*param_2 + 0x10));
  QByteArray::resize((int)param_3);
  puVar4 = (uint *)*param_3;
  if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
    QByteArray::reallocData(param_3,puVar4[1] + 1,puVar4[2] >> 0x1f);
    puVar4 = (uint *)*param_3;
  }
  lVar1 = *(long *)(puVar4 + 4);
  uVar2 = *puVar5;
  *(undefined8 *)((long)puVar4 + lVar1 + 8) = puVar5[1];
  *(undefined8 *)((long)puVar4 + lVar1) = uVar2;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar3 = CVmTools::isNonAdminToolsUpgrade();
  *(uint *)((long)puVar4 + lVar1 + 0xc) = (uint)bVar3;
  return 0;
}

