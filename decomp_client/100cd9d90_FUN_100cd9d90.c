
void FUN_100cd9d90(long param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  void *pvVar10;
  int *piVar11;
  size_t sVar12;
  Data *pDVar13;
  int iVar14;
  Data *pDVar15;
  ulong uVar16;
  long lVar17;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  Data *local_e0;
  Data *local_d8;
  Data *local_d0;
  int local_c8;
  QString local_c0;
  size_t local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  Data *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_70 = (QArrayData *)QString::fromAscii_helper("HID Host Hook/Allowed Sources",0x1d);
  QVariant::QVariant(&local_80,"");
  QSettings::value((QString *)&local_68,&local_48);
  QVariant::toString();
  local_88 = (QArrayData *)QString::fromAscii_helper(";",1);
  QString::split(&local_50,&local_58,&local_88,1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cd9e5e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100cd9e5e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cd9e8e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cd9e8e:
  QVariant::~QVariant(&local_68);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cd9ed0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cd9ed0:
  pQVar5 = (QArrayData *)QString::fromAscii_helper("WacomTabletDriver",0x11);
  local_90 = pQVar5;
  FUN_1000341d0(&local_50,&local_90);
  pQVar6 = (QArrayData *)QString::fromAscii_helper("vncserver",9);
  local_98 = pQVar6;
  FUN_1000341d0(&local_50,&local_98);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("teleportd",9);
  local_a0 = pQVar7;
  FUN_1000341d0(&local_50,&local_a0);
  pQVar8 = (QArrayData *)QString::fromAscii_helper("LCore",5);
  local_a8 = pQVar8;
  FUN_1000341d0(&local_50,&local_a8);
  pQVar9 = (QArrayData *)QString::fromAscii_helper("LogiMgrDaemon",0xd);
  local_b0 = pQVar9;
  FUN_1000341d0(&local_50,&local_b0);
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cd9fd4;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_100cd9fd4:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cd9fff;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100cd9fff:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cda02e;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100cda02e:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cda05d;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100cda05d:
  iVar14 = 0;
  if (*(int *)pQVar5 != -1) {
    iVar14 = 0;
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cda090;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100cda090:
  do {
    local_b8 = 0;
    iVar4 = _sysctl((int *)&DAT_101daf280,3,(void *)0x0,&local_b8,(void *)0x0,0);
    if (iVar4 < 0) {
      piVar11 = ___error();
      FUN_100df99c0("","hid",0,
                    "[HIDMacHook] Fail to get list of processes (size): sysctl is failed (%d)",
                    *piVar11);
      goto LAB_100cda633;
    }
    pvVar10 = _malloc(local_b8);
    if (pvVar10 == (void *)0x0) {
      FUN_100df99c0("","hid",0,"[HIDMacHook] Fail to get list of processes: out of memory");
      goto LAB_100cda633;
    }
    iVar4 = _sysctl((int *)&DAT_101daf280,3,pvVar10,&local_b8,(void *)0x0,0);
    if (-1 < iVar4) {
      if (local_b8 < 0x288) goto LAB_100cda62b;
      uVar16 = 0;
      goto LAB_100cda253;
    }
    piVar11 = ___error();
    if (*piVar11 != 0xc) {
      piVar11 = ___error();
      FUN_100df99c0("","hid",0,
                    "[HIDMacHook] Fail to get list of processes (info), sysctl is failed (%d)",
                    *piVar11);
      goto LAB_100cda62b;
    }
    _free(pvVar10);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 1000);
  FUN_100df99c0("","hid",0,"[HIDMacHook] Fail to get list of processes: max try count reached");
  goto LAB_100cda633;
LAB_100cda253:
  do {
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_e0 = local_50;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 == 0) {
        QListData::detach((int)&local_e0);
        iVar14 = *(int *)(local_e0 + 8);
        if (iVar14 != *(int *)(local_e0 + 0xc)) {
          pDVar15 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
          pDVar13 = local_e0 + (long)iVar14 * 8 + 0x10;
          lVar17 = (long)*(int *)(local_e0 + 0xc) * 8 + (long)iVar14 * -8;
          do {
            piVar11 = *(int **)pDVar15;
            *(int **)pDVar13 = piVar11;
            if (1 < *piVar11 + 1U) {
              LOCK();
              *piVar11 = *piVar11 + 1;
              local_31 = *piVar11 != 0;
              UNLOCK();
            }
            pDVar13 = pDVar13 + 8;
            pDVar15 = pDVar15 + 8;
            lVar17 = lVar17 + -8;
          } while (lVar17 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
    }
    local_d8 = local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10;
    local_d0 = local_e0 + (long)*(int *)(local_e0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_e0 + 8) != *(int *)(local_e0 + 0xc)) {
      pcVar2 = (char *)((long)pvVar10 + uVar16 * 0x288 + 0xf3);
      puVar1 = (undefined4 *)((long)pvVar10 + uVar16 * 0x288 + 0x28);
      do {
        local_c8 = 1;
        QString::operator=(&local_c0,(QString *)local_d8);
        if (local_c8 != 0) {
          sVar12 = _strlen(pcVar2);
          local_e8 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar12);
          cVar3 = QString::startsWith(&local_c0,&local_e8,1);
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_31 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cda3c3;
            }
            QArrayData::deallocate(local_e8,2,8);
          }
LAB_100cda3c3:
          if (cVar3 != '\0') {
            if (1 < DAT_10230ffd0) {
              QString::toUtf8();
              FUN_100df99c0("","hid",2,
                            "[HIDMacHook] Add process <%s> (%s) with pid %d to allowed sources",
                            pcVar2,local_f0 + *(long *)(local_f0 + 0x10),*puVar1);
              if (*(int *)local_f0 != -1) {
                if (*(int *)local_f0 != 0) {
                  LOCK();
                  *(int *)local_f0 = *(int *)local_f0 + -1;
                  local_31 = *(int *)local_f0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cda457;
                }
                QArrayData::deallocate(local_f0,1,8);
              }
            }
LAB_100cda457:
            sVar12 = _strlen(pcVar2);
            local_f8 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar12);
            FUN_100cdea30(param_1 + 0x500,puVar1,&local_f8);
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_31 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cda4ca;
              }
              QArrayData::deallocate(local_f8,2,8);
            }
          }
        }
LAB_100cda4ca:
        local_d8 = local_d8 + 8;
      } while (local_d8 != local_d0);
    }
    pDVar15 = local_e0;
    local_c8 = 1;
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cda590;
      }
      iVar14 = *(int *)(local_e0 + 0xc);
      if (iVar14 != *(int *)(local_e0 + 8)) {
        lVar17 = (long)*(int *)(local_e0 + 8) * 8 + (long)iVar14 * -8;
        pDVar13 = local_e0 + (long)iVar14 * 8 + 8;
        do {
          pQVar5 = *(QArrayData **)pDVar13;
          if (*(int *)pQVar5 == 0) {
LAB_100cda56f:
            QArrayData::deallocate(pQVar5,2,8);
          }
          else if (*(int *)pQVar5 != -1) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar5 = *(QArrayData **)pDVar13;
              goto LAB_100cda56f;
            }
          }
          pDVar13 = pDVar13 + -8;
          lVar17 = lVar17 + 8;
        } while (lVar17 != 0);
      }
      QListData::dispose(pDVar15);
    }
LAB_100cda590:
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cda5c6;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_100cda5c6:
    uVar16 = (ulong)((int)uVar16 + 1);
  } while (uVar16 < local_b8 / 0x288);
  if (pvVar10 != (void *)0x0) {
LAB_100cda62b:
    _free(pvVar10);
  }
LAB_100cda633:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cda6c1;
    }
    iVar14 = *(int *)(local_50 + 0xc);
    if (iVar14 != *(int *)(local_50 + 8)) {
      lVar17 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar14 * -8;
      pDVar15 = local_50 + (long)iVar14 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar5 == 0) {
LAB_100cda6a0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar15;
            goto LAB_100cda6a0;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar17 = lVar17 + 8;
      } while (lVar17 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_100cda6c1:
  QSettings::~QSettings((QSettings *)&local_48);
  return;
}

