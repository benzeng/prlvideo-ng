
undefined8 FUN_100542a00(undefined8 param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  uint uVar7;
  QArrayData *pQVar8;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(param_2 + 8) != 0x9060) {
    return 0xf0000002;
  }
  if (*(short *)(param_2 + 0x14) == 0) {
    return 0xf0000001;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  cVar1 = CVmTools::isSyncVmHostname();
  if (cVar1 == '\0') {
    puVar5 = (undefined1 *)FUN_1002a6010(param_2);
    *puVar5 = 0;
    return 0;
  }
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmName();
  pcVar4 = (char *)FUN_1002a6010(param_2);
  QString::toLower();
  uVar2 = *(uint *)(local_50 + 4);
  if (0 < (int)uVar2) {
    lVar6 = 0;
    pQVar8 = local_50;
    uVar7 = uVar2;
    while( true ) {
      if (lVar6 < (int)uVar2) {
        uVar3 = (uint)*(ushort *)(pQVar8 + lVar6 * 2 + *(long *)(pQVar8 + 0x10));
      }
      else {
        uVar3 = 0;
      }
      if ((((9 < uVar3 - 0x30) && (0x39 < uVar3 - 0x41 || uVar3 - 0x5b < 6)) &&
          ((uVar3 < 0x80 || (cVar1 = QChar::isLetterOrNumber_helper(uVar3), cVar1 == '\0')))) &&
         (((int)uVar2 <= lVar6 ||
          (*(short *)(pQVar8 + lVar6 * 2 + *(long *)(pQVar8 + 0x10)) != 0x2d)))) {
        if (lVar6 < (int)uVar7) {
          if ((1 < *(uint *)pQVar8) || (*(long *)(pQVar8 + 0x10) != 0x18)) {
            QString::reallocData((uint)&local_50,(bool)((char)uVar7 + '\x01'));
          }
        }
        else {
          QString::expand((int)&local_50);
        }
        *(undefined2 *)(local_50 + lVar6 * 2 + *(long *)(local_50 + 0x10)) = 0x2d;
        uVar7 = *(uint *)(local_50 + 4);
        pQVar8 = local_50;
      }
      lVar6 = lVar6 + 1;
      if ((int)uVar7 <= lVar6) break;
      uVar2 = *(uint *)(pQVar8 + 4);
    }
  }
  QString::toUtf8();
  _strncpy(pcVar4,(char *)(local_48 + *(long *)(local_48 + 0x10)),
           (ulong)*(ushort *)(param_2 + 0x14) - 1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542bc5;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100542bc5:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542bf5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100542bf5:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 0;
}

