
void FUN_10049eb30(long *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  size_t sVar9;
  QArrayData *pQVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  long lVar15;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  QDateTime local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  string local_50;
  char local_4f [7];
  size_t local_48;
  char *local_40;
  bool local_31;
  
  QFileInfo::absoluteFilePath();
  QString::toUtf8();
  pQVar10 = local_58 + *(long *)(local_58 + 0x10);
  _strlen((char *)pQVar10);
  std::string::__init((char *)&local_50,(ulong)pQVar10);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      local_31 = *(int *)local_58 != 0;
      if (*(int *)local_58 != 0) goto LAB_10049ebb7;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10049ebb7:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      local_31 = *(int *)local_60 != 0;
      if (*(int *)local_60 != 0) goto LAB_10049ebee;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10049ebee:
  pcVar13 = local_40;
  lVar15 = *(long *)(param_3 + 8);
  if (lVar15 != param_3) {
    bVar14 = (byte)local_50 & 1;
    bVar3 = (byte)local_50 >> 1;
    do {
      bVar4 = *(byte *)(lVar15 + 0x10) & 1;
      if (bVar4 == 0) {
        sVar9 = (size_t)(*(byte *)(lVar15 + 0x10) >> 1);
      }
      else {
        sVar9 = *(size_t *)(lVar15 + 0x18);
      }
      sVar8 = local_48;
      if (bVar14 == 0) {
        sVar8 = (ulong)bVar3;
      }
      if (sVar9 == sVar8) {
        if (bVar4 == 0) {
          pcVar12 = (char *)(lVar15 + 0x11);
        }
        else {
          pcVar12 = *(char **)(lVar15 + 0x20);
        }
        pcVar11 = pcVar13;
        if (bVar14 == 0) {
          pcVar11 = local_4f;
        }
        if (bVar4 == 0) {
          while( true ) {
            if (sVar9 == 0) goto LAB_10049ed4b;
            if (*pcVar12 != *pcVar11) break;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
            sVar9 = sVar9 - 1;
          }
        }
        else if ((sVar9 == 0) || (iVar6 = _memcmp(pcVar12,pcVar11,sVar9), iVar6 == 0)) {
LAB_10049ed4b:
          QFileInfo::lastModified();
          lVar7 = QDateTime::toMSecsSinceEpoch();
          QDateTime::~QDateTime(local_68);
          if (*(long *)(lVar15 + 0x78) == lVar7) {
            *(undefined1 *)(lVar15 + 0x80) = 1;
          }
          else {
            if (3 < DAT_1011b55f8) {
              pcVar13 = local_4f;
              if (((byte)local_50 & 1) != 0) {
                pcVar13 = local_40;
              }
              FUN_1008e3970("AppsCollector","prl_sharedapps",4,"Changed %s",pcVar13);
            }
            cVar5 = FUN_10049dd80(param_1,param_2,&local_50,lVar15 + 0x10,param_4);
            if ((cVar5 != '\0') && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
              (**(code **)*puVar1)(puVar1,2,lVar15 + 0x10);
            }
          }
          goto LAB_10049eefc;
        }
      }
      lVar15 = *(long *)(lVar15 + 8);
    } while (lVar15 != param_3);
  }
  if (3 < DAT_1011b55f8) {
    if (((byte)local_50 & 1) == 0) {
      local_40 = local_4f;
    }
    FUN_1008e3970("AppsCollector","prl_sharedapps",4,"Added %s",local_40);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  cVar5 = FUN_10049dd80(param_1,param_2,&local_50,&local_e8,param_4);
  if ((cVar5 != '\0') &&
     ((plVar2 = (long *)*param_1, plVar2 == (long *)0x0 ||
      (cVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_b8), cVar5 != '\0')))) {
    FUN_10000c640(param_3,&local_e8);
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0,&local_e8);
    }
  }
  std::string::~string((string *)&uStack_a0);
  std::string::~string((string *)&local_b8);
  std::string::~string((string *)&uStack_d0);
  std::string::~string((string *)&local_e8);
LAB_10049eefc:
  std::string::~string(&local_50);
  return;
}

