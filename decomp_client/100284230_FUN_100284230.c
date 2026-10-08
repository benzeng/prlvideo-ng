
undefined8 FUN_100284230(long param_1)

{
  long *plVar1;
  Data *pDVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  QString QVar8;
  QString QVar9;
  long lVar10;
  long lVar11;
  QArrayData *pQVar12;
  Data *pDVar13;
  bool bVar14;
  QString local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  Data *local_a0;
  QArrayData *local_98;
  QString local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  uint local_68;
  QString local_60;
  QArrayData *local_58;
  long local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10015b140(&local_40,uVar7,0x703,1);
  lVar10 = local_40;
  if (local_40 == 0) {
    uVar7 = 0x80000009;
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to create VM from Lion recovery. Failed to create default VM configuration"
                 );
    goto LAB_100284a43;
  }
  plVar6 = operator_new(0xf8);
  local_50 = lVar10;
  _PrlHandle_AddRef(lVar10);
  FUN_10018d690(&local_48,&local_50);
  FUN_100129dd0(plVar6,&local_48);
  plVar1 = *(long **)(param_1 + 0x28);
  if ((plVar1 != plVar6) && (*(long **)(param_1 + 0x28) = plVar6, plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100284303;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100284303:
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100109c10(&local_58,uVar7);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("macOS",5);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar7 = FUN_10015a340(uVar7);
  FUN_10011e480(&local_88,uVar7);
  local_80 = local_88;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
      QListData::detach((int)&local_80);
      lVar10 = (long)*(int *)(local_80 + 8);
      if ((local_88 + (long)*(int *)(local_88 + 8) * 8 != local_80 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_80 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_80 + 0xc))) {
        _memcpy(local_80 + lVar10 * 8 + 0x10,local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10,
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  local_68 = 1;
  if (*(int *)local_88 == -1) {
LAB_100284453:
    do {
      if (local_78 == local_70) break;
      if (local_68 != 0) {
        uVar7 = *(undefined8 *)local_78;
        CHwHddPartition::getSystemName();
        cVar3 = operator==((QString *)(param_1 + 0x30),&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002844d4;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_1002844d4:
        if (cVar3 == '\0') {
          local_68 = 0;
        }
        else {
          FUN_1005ce450(&local_98,uVar7);
          if (*(int *)(local_98 + 4) != 0) {
            local_a8 = (QArrayData *)QString::fromAscii_helper(".",1);
            QString::split(&local_a0,&local_98,&local_a8,0,1);
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10028456d;
              }
              QArrayData::deallocate(local_a8,2,8);
            }
LAB_10028456d:
            if (((*(int *)(local_a0 + 0xc) - *(int *)(local_a0 + 8) < 2) ||
                (iVar4 = QString::toInt((bool *)(local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10)
                                        ,0), iVar4 != 10)) ||
               (iVar4 = QString::toInt((bool *)(local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x18),
                                       0), 0xb < iVar4)) {
              local_c8 = (QArrayData *)QString::fromAscii_helper("macOS %1",8);
              QString::arg(&local_c0,&local_c8,&local_98,0,0x20);
              QString::operator=(&local_60,&local_c0);
              if (*(int *)local_c0.field0_0x0 != -1) {
                if (*(int *)local_c0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                  local_31 = *(int *)local_c0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10028471c;
                }
                QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
              }
LAB_10028471c:
              if (*(int *)local_c8 != -1) {
                if (*(int *)local_c8 != 0) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + -1;
                  local_31 = *(int *)local_c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100284752;
                }
                QArrayData::deallocate(local_c8,2,8);
              }
            }
            else {
              local_b8 = (QArrayData *)QString::fromAscii_helper("OS X %1",7);
              QString::arg(&local_b0,&local_b8,&local_98,0,0x20);
              QString::operator=(&local_60,&local_b0);
              if (*(int *)local_b0.field0_0x0 != -1) {
                if (*(int *)local_b0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
                  local_31 = *(int *)local_b0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100284645;
                }
                QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
              }
LAB_100284645:
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 != 0) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + -1;
                  local_31 = *(int *)local_b8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100284752;
                }
                QArrayData::deallocate(local_b8,2,8);
              }
            }
LAB_100284752:
            pDVar2 = local_a0;
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002847f8;
              }
              iVar4 = *(int *)(local_a0 + 0xc);
              if (iVar4 != *(int *)(local_a0 + 8)) {
                lVar10 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar4 * -8;
                pDVar13 = local_a0 + (long)iVar4 * 8 + 8;
                do {
                  pQVar12 = *(QArrayData **)pDVar13;
                  if (*(int *)pQVar12 == 0) {
LAB_1002847d0:
                    QArrayData::deallocate(pQVar12,2,8);
                  }
                  else if (*(int *)pQVar12 != -1) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + -1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                    if (!(bool)local_31) {
                      pQVar12 = *(QArrayData **)pDVar13;
                      goto LAB_1002847d0;
                    }
                  }
                  pDVar13 = pDVar13 + -8;
                  lVar10 = lVar10 + 8;
                } while (lVar10 != 0);
              }
              QListData::dispose(pDVar2);
            }
          }
LAB_1002847f8:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100284830;
            }
            QArrayData::deallocate(local_98,2,8);
          }
        }
      }
LAB_100284830:
      local_78 = local_78 + 8;
      uVar5 = local_68 ^ 1;
      bVar14 = local_68 != 1;
      local_68 = uVar5;
    } while (bVar14);
  }
  else {
    if (*(int *)local_88 == 0) {
LAB_100284443:
      QListData::dispose(local_88);
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100284443;
    }
    if (local_68 != 0) goto LAB_100284453;
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100284876;
    }
    QListData::dispose(local_80);
  }
LAB_100284876:
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1005cb9c0(&local_d0,uVar7,&local_60,&local_58);
  QString::operator=(&local_60,&local_d0);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002848e7;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1002848e7:
  QVar8.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
  QVar9.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  CVmIdentification::setVmName(QVar8);
  if (*(int *)QVar9.field0_0x0 != -1) {
    if (*(int *)QVar9.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar9.field0_0x0 = *(int *)QVar9.field0_0x0 + -1;
      local_31 = *(int *)QVar9.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100284951;
    }
    QArrayData::deallocate((QArrayData *)QVar9.field0_0x0,2,8);
  }
LAB_100284951:
  CVmConfiguration::getVmHardwareList();
  uVar5 = CVmHardware::getVideo();
  CVmVideo::setMemorySize(uVar5);
  CVmConfiguration::getVmSettings();
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmSettings::getVmStartupOptions();
  pQVar12 = *(QArrayData **)(param_1 + 0x30);
  if (1 < *(int *)pQVar12 + 1U) {
    LOCK();
    *(int *)pQVar12 = *(int *)pQVar12 + 1;
    local_31 = *(int *)pQVar12 != 0;
    UNLOCK();
  }
  CVmStartupOptionsBase::setRecoveryVolumeSystemName(QVar9);
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002849e1;
    }
    QArrayData::deallocate(pQVar12,2,8);
  }
LAB_1002849e1:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100284a11;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100284a11:
  uVar7 = 0;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100284a43;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100284a43:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return uVar7;
}

