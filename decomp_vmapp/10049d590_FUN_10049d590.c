
undefined1 FUN_10049d590(long *param_1,string *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  size_t sVar3;
  byte *pbVar4;
  string sVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  string *psVar9;
  size_t sVar10;
  uint uVar11;
  size_t sVar12;
  undefined1 uVar13;
  string *psVar14;
  string *psVar15;
  byte bVar16;
  undefined8 *puVar17;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  string *local_58;
  QArrayData *local_50;
  QString local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  sVar5 = *param_2;
  bVar16 = (byte)sVar5 & 1;
  if (bVar16 == 0) {
    uVar8 = (ulong)((byte)sVar5 >> 1);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
  }
  if (uVar8 == 0) {
    return 0;
  }
  puVar17 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar17 != puVar2) {
    sVar3 = *(size_t *)(param_2 + 8);
    psVar9 = *(string **)(param_2 + 0x10);
    do {
      pbVar4 = (byte *)*puVar17;
      bVar1 = *pbVar4;
      if ((bVar1 & 1) == 0) {
        sVar12 = (size_t)(bVar1 >> 1);
      }
      else {
        sVar12 = *(size_t *)(pbVar4 + 8);
      }
      sVar10 = sVar3;
      if (bVar16 == 0) {
        sVar10 = (ulong)((byte)sVar5 >> 1);
      }
      if (sVar12 == sVar10) {
        if ((bVar1 & 1) == 0) {
          psVar15 = (string *)(pbVar4 + 1);
        }
        else {
          psVar15 = *(string **)(pbVar4 + 0x10);
        }
        psVar14 = psVar9;
        if (bVar16 == 0) {
          psVar14 = param_2 + 1;
        }
        if ((bVar1 & 1) == 0) {
          if (sVar12 == 0) {
            return 0;
          }
          while (*psVar15 == *psVar14) {
            psVar15 = psVar15 + 1;
            psVar14 = psVar14 + 1;
            sVar12 = sVar12 - 1;
            if (sVar12 == 0) {
              return 0;
            }
          }
        }
        else {
          if (sVar12 == 0) {
            return 0;
          }
          iVar7 = _memcmp(psVar15,psVar14,sVar12);
          if (iVar7 == 0) {
            return 0;
          }
        }
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar2);
  }
  if (1 < DAT_1011b55f8) {
    if (bVar16 == 0) {
      psVar9 = param_2 + 1;
    }
    else {
      psVar9 = *(string **)(param_2 + 0x10);
    }
    FUN_1008e3970("AppsCollector","prl_sharedapps",2,"Add path \"%s\"",psVar9);
    sVar5 = *param_2;
  }
  if (((byte)sVar5 & 1) == 0) {
    psVar9 = param_2 + 1;
    uVar11 = (uint)((byte)sVar5 >> 1);
  }
  else {
    uVar11 = (uint)*(undefined8 *)(param_2 + 8);
    psVar9 = *(string **)(param_2 + 0x10);
  }
  if ((psVar9 != (string *)0x0) && (uVar11 == 0xffffffff)) {
    _strlen((char *)psVar9);
  }
  QString::fromUtf8_helper((char *)&local_50,(int)psVar9);
  QString::normalized(&local_48,&local_50,1,0);
  QFileInfo::QFileInfo(local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d7b5;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10049d7b5:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d7ec;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10049d7ec:
  cVar6 = QFileInfo::exists();
  if ((cVar6 == '\0') || (cVar6 = QFileInfo::isDir(), cVar6 == '\0')) {
    if (DAT_1011b55f8 < 2) {
      uVar13 = 0;
    }
    else {
      if (((byte)*param_2 & 1) == 0) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = *(string **)(param_2 + 0x10);
      }
      uVar13 = 0;
      FUN_1008e3970("AppsCollector","prl_sharedapps",2,"Path \"%s\" does not exist or not a folder",
                    param_2);
    }
  }
  else {
    psVar9 = operator_new(0x40);
    std::string::string(psVar9,param_2);
    *(string **)(psVar9 + 0x18) = psVar9 + 0x18;
    *(string **)(psVar9 + 0x20) = psVar9 + 0x18;
    *(undefined8 *)(psVar9 + 0x28) = 0;
    *(undefined4 *)(psVar9 + 0x30) = param_3;
    *(undefined4 *)(psVar9 + 0x34) = param_4;
    psVar9[0x38] = (string)0x0;
    local_58 = psVar9;
    if ((undefined8 *)param_1[2] == (undefined8 *)param_1[3]) {
      FUN_1004a0d80(param_1 + 1,&local_58);
    }
    else {
      *(undefined8 *)param_1[2] = psVar9;
      param_1[2] = param_1[2] + 8;
    }
    uVar13 = 1;
    if (*param_1 != 0) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      std::string::operator=((string *)&local_78,param_2);
      local_60 = param_3;
      local_5c = param_4;
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,3,&local_78);
      std::string::~string((string *)&local_78);
    }
  }
  QFileInfo::~QFileInfo(local_40);
  return uVar13;
}

