
ulong FUN_100703f80(undefined8 param_1,undefined8 *param_2,QString *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [4];
  ushort local_c4;
  int local_b8;
  int iStack_b4;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)*param_2;
  if (*(int *)(local_38 + 4) == 0) {
    local_38 = (QArrayData *)QString::fromAscii_helper("root",4);
  }
  else if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_c8[0] = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  iVar3 = _stat_INODE64(local_d0 + *(long *)(local_d0 + 0x10),local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10070402f;
    }
    QArrayData::deallocate(local_d0,1,8);
  }
LAB_10070402f:
  if (iVar3 != 0) {
    piVar5 = ___error();
    uVar9 = 0x20;
    if (*piVar5 != 0xd) {
      piVar5 = ___error();
      uVar9 = 0x40;
      if (*piVar5 != 2) {
        piVar5 = ___error();
        uVar9 = 0x40;
        if (*piVar5 != 0xe) {
          piVar5 = ___error();
          uVar9 = 0x40;
          if (*piVar5 != 0x14) {
            uVar9 = 0x10000;
          }
        }
      }
    }
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    QString::toUtf8();
    FUN_1008e3970("","CAuth",0,"stat64() has returned error: %s, %s",pcVar6,
                  local_d8 + *(long *)(local_d8 + 0x10));
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10070433c;
      }
      QArrayData::deallocate(local_d8,1,8);
    }
    goto LAB_10070433c;
  }
  cVar1 = FUN_100706350(param_3);
  uVar9 = 0;
  if (cVar1 != '\0') {
    uVar9 = FUN_100703140(param_3,param_2);
  }
  piVar5 = ___error();
  *piVar5 = 0;
  QString::toUtf8();
  lVar7 = _getpwnam(local_e0 + *(long *)(local_e0 + 0x10));
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10070418e;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_10070418e:
  piVar5 = ___error();
  if (lVar7 != 0) {
    uVar9 = local_c4 >> 10 & 0x10 | uVar9;
    if (*(int *)(lVar7 + 0x10) == 0) {
      uVar9 = uVar9 | 0xe;
    }
    else {
      bVar2 = FUN_1006f8b40(param_3);
      if ((bVar2 | local_b8 == *(int *)(lVar7 + 0x10)) == 1) {
        uVar9 = (ulong)(local_c4 >> 3 & 8) | (ulong)(local_c4 >> 5 & 4) | local_c4 >> 7 & 2 | uVar9;
      }
      else if ((iStack_b4 == *(int *)(lVar7 + 0x14)) ||
              (cVar1 = FUN_1007032d0(&local_38), cVar1 != '\0')) {
        uVar9 = (ulong)local_c4 & 8 | uVar9 | (ulong)(local_c4 >> 4 & 2) |
                (ulong)(local_c4 >> 2 & 4);
      }
      else {
        uVar9 = ((ulong)local_c4 & 1) << 3 | ((ulong)local_c4 & 2) * 2 | local_c4 >> 1 & 2 | uVar9;
        if (local_b8 == 99) {
          uVar4 = QFile::permissions(param_3);
          uVar8 = (ulong)(uVar4 >> 5 & 8) | (ulong)(uVar4 >> 7 & 4) | uVar4 >> 9 & 2 | uVar9;
          uVar9 = uVar8 | 2;
          if ((uVar4 & 0x44) == 0) {
            uVar9 = uVar8;
          }
          uVar8 = uVar9 | 4;
          if ((uVar4 & 0x22) == 0) {
            uVar8 = uVar9;
          }
          uVar9 = uVar8 | 8;
          if ((uVar4 & 0x11) == 0) {
            uVar9 = uVar8;
          }
        }
      }
    }
    goto LAB_10070433c;
  }
  iVar3 = *piVar5;
  QString::toUtf8();
  lVar7 = *(long *)(local_e8 + 0x10);
  QString::toUtf8();
  FUN_1008e3970("","CAuth",0,
                "CAuthCheckFile %s failed to get the user %s password record status=%d errno=%d",
                local_e8 + lVar7,local_f0 + *(long *)(local_f0 + 0x10),0,iVar3);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007042aa;
    }
    QArrayData::deallocate(local_f0,1,8);
  }
LAB_1007042aa:
  uVar9 = 0x80;
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      uVar9 = 0x80;
      if ((bool)local_29) goto LAB_10070433c;
    }
    QArrayData::deallocate(local_e8,1,8);
    uVar9 = 0x80;
  }
LAB_10070433c:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar9;
      }
      local_c8[0] = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar9;
}

