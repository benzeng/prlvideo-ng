
undefined8 FUN_100029940(long param_1,long *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  
  lVar4 = *param_2;
  lVar8 = *(long *)(lVar4 + 0x10);
  iVar14 = 0x3041a28f;
  if (2 < *(int *)(lVar4 + 0x10 + lVar8) - 7U) {
    iVar14 = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar4 + 0x10 + lVar8);
  if (param_4 == '\0') {
    *(bool *)(param_1 + 0x20) = iVar14 == *(int *)(lVar8 + 0x14 + lVar4);
    if (DAT_1011b55f8 < 1) goto LAB_100029a49;
    uVar7 = *(undefined4 *)(lVar4 + 0x10 + lVar8);
    uVar3 = *(undefined4 *)(lVar4 + 0x14 + lVar8);
    uVar12 = (uint)*(ushort *)(lVar4 + 0x2c + lVar8);
    uVar9 = (uint)*(ushort *)(lVar4 + 0x2e + lVar8);
    pcVar10 = "PTIAgent send tools version: 0x%08X ptiVer=%d.%d osType=%d";
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (DAT_1011b55f8 < 1) goto LAB_100029a49;
    uVar3 = *(undefined4 *)(lVar4 + 0x14 + lVar8);
    uVar12 = *(uint *)(lVar4 + 0x18 + lVar8);
    uVar9 = *(uint *)(lVar4 + 0x1c + lVar8);
    uVar7 = *(undefined4 *)(lVar4 + 0x20 + lVar8);
    pcVar10 = "PTIAgent send tools version (old notation): %d.%d.%d.%d ptiVer=%d.%d osType=%d";
  }
  FUN_1008e3970("PTIAHOST","vm",1,pcVar10,uVar3,uVar12,uVar9,uVar7);
LAB_100029a49:
  puVar13 = (undefined8 *)(lVar4 + lVar8);
  QByteArray::resize((int)param_3);
  puVar11 = (uint *)*param_3;
  if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
    QByteArray::reallocData(param_3,puVar11[1] + 1,puVar11[2] >> 0x1f);
    puVar11 = (uint *)*param_3;
  }
  lVar4 = *(long *)(puVar11 + 4);
  *(undefined8 *)((long)puVar11 + lVar4 + 0x30) = puVar13[6];
  *(undefined8 *)((long)puVar11 + lVar4 + 0x28) = puVar13[5];
  *(undefined8 *)((long)puVar11 + lVar4 + 0x20) = puVar13[4];
  *(undefined8 *)((long)puVar11 + lVar4 + 0x18) = puVar13[3];
  *(undefined8 *)((long)puVar11 + lVar4 + 0x10) = puVar13[2];
  uVar5 = *puVar13;
  *(undefined8 *)((long)puVar11 + lVar4 + 8) = puVar13[1];
  *(undefined8 *)((long)puVar11 + lVar4) = uVar5;
  cVar6 = FUN_1000b1ce0(*(undefined8 *)(param_1 + 0x10));
  uVar7 = 6;
  if (cVar6 == '\0') {
    uVar7 = 0;
  }
  *(undefined4 *)((long)puVar11 + lVar4 + 8) = uVar7;
  if (param_4 == '\0') {
    piVar1 = (int *)((long)puVar11 + lVar4 + 0x14);
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    *piVar1 = iVar14;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PTIAHOST","vm",1,"Give hostVer 0x%08X to guest",iVar14);
    }
  }
  else {
    *(undefined8 *)((long)puVar11 + lVar4 + 0x14) = 0x20000000c;
    *(undefined8 *)((long)puVar11 + lVar4 + 0x1c) = 0xa28f;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PTIAHOST","vm",1,
                    "Give hostVer to guest : %d.%d.%d.%d (in old notation, equal to product version)"
                    ,0xc,*(undefined4 *)(lVar4 + 0x18 + (long)puVar11),0xa28f,
                    *(undefined4 *)(lVar4 + 0x20 + (long)puVar11));
    }
  }
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    lVar8 = CVmTools::getAutoUpdate();
    if (lVar8 != 0) {
      cVar6 = AutoUpdate::isEnabled();
      if (cVar6 == '\0') {
        pbVar2 = (byte *)(lVar4 + 0x28 + (long)puVar11);
        *pbVar2 = *pbVar2 | 1;
      }
    }
  }
  *(undefined4 *)(lVar4 + 0x2c + (long)puVar11) = 2;
  return 0;
}

