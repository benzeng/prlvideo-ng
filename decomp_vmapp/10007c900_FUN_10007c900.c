
ulong FUN_10007c900(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  CVmCoherence *pCVar4;
  CVmSharing *pCVar5;
  CVmSharedVolumes *pCVar6;
  CVmSharedProfile *pCVar7;
  CVmSharedApplications *pCVar8;
  CVmNativeLook *pCVar9;
  CVmWin7Look *pCVar10;
  CVmVideo *pCVar11;
  undefined4 *puVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  long *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  CVmEventParameter *local_2f0;
  undefined8 *local_2e8;
  undefined8 *puStack_2e0;
  undefined8 *local_2d8;
  CVmEvent local_2d0 [224];
  QEvent local_1f0 [32];
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QString local_190;
  CVmConfiguration local_188 [248];
  QArrayData *local_90;
  QString local_88;
  long *local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_10011a560(&local_80);
  cVar2 = (**(code **)(*(long *)local_80[2] + 0x10))();
  if (cVar2 == '\0') {
    puVar12 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar12 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar12,PTR_typeinfo_100ba22d8,0);
  }
  lVar16 = 0;
  if (local_80 != (long *)0x0) {
    lVar16 = local_80[2];
  }
  FUN_10011ccf0(&local_88,lVar16);
  lVar16 = 0;
  if (local_80 != (long *)0x0) {
    lVar16 = local_80[2];
  }
  FUN_10011ce90(&local_90,lVar16);
  CVmConfiguration::CVmConfiguration(local_188,(CVmConfiguration *)(param_1 + 0x28));
  local_190.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  pCVar4 = operator_new(200);
  CVmCoherence::CVmCoherence(pCVar4);
  local_198 = local_90;
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_31 = *(int *)local_90 != 0;
    UNLOCK();
  }
  iVar3 = CBaseNode::fromString
                    ((CBaseNode *)(pCVar4 + 0x10),(QTypedArrayData<unsigned_short> *)&local_198,
                     false,(QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007ca1e;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10007ca1e:
  if (iVar3 < 0) {
    (**(code **)(*(long *)pCVar4 + 0x20))(pCVar4);
    pCVar5 = operator_new(0xb8);
    CVmSharing::CVmSharing(pCVar5);
    local_1a0 = local_90;
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
    iVar3 = CBaseNode::fromString
                      ((CBaseNode *)(pCVar5 + 0x10),(QTypedArrayData<unsigned_short> *)&local_1a0,
                       false,(QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10007cb6e;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_10007cb6e:
    if (iVar3 < 0) {
      (**(code **)(*(long *)pCVar5 + 0x20))(pCVar5);
      pCVar6 = operator_new(0xb0);
      CVmSharedVolumes::CVmSharedVolumes(pCVar6);
      local_1a8 = local_90;
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      iVar3 = CBaseNode::fromString
                        ((CBaseNode *)(pCVar6 + 0x10),(QTypedArrayData<unsigned_short> *)&local_1a8,
                         false,(QString *)0x0,(int *)0x0,(int *)0x0);
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10007cc8d;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
LAB_10007cc8d:
      if (iVar3 < 0) {
        (**(code **)(*(long *)pCVar6 + 0x20))(pCVar6);
        pCVar7 = operator_new(0xb0);
        CVmSharedProfile::CVmSharedProfile(pCVar7);
        local_1b0 = local_90;
        if (1 < *(int *)local_90 + 1U) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + 1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
        }
        iVar3 = CBaseNode::fromString
                          ((CBaseNode *)(pCVar7 + 0x10),
                           (QTypedArrayData<unsigned_short> *)&local_1b0,false,(QString *)0x0,
                           (int *)0x0,(int *)0x0);
        if (*(int *)local_1b0 != -1) {
          if (*(int *)local_1b0 != 0) {
            LOCK();
            *(int *)local_1b0 = *(int *)local_1b0 + -1;
            local_31 = *(int *)local_1b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10007cdac;
          }
          QArrayData::deallocate(local_1b0,2,8);
        }
LAB_10007cdac:
        if (iVar3 < 0) {
          (**(code **)(*(long *)pCVar7 + 0x20))(pCVar7);
          pCVar8 = operator_new(0xc0);
          CVmSharedApplications::CVmSharedApplications(pCVar8);
          local_1b8 = local_90;
          if (1 < *(int *)local_90 + 1U) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + 1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
          }
          iVar3 = CBaseNode::fromString
                            ((CBaseNode *)(pCVar8 + 0x10),
                             (QTypedArrayData<unsigned_short> *)&local_1b8,false,(QString *)0x0,
                             (int *)0x0,(int *)0x0);
          if (*(int *)local_1b8 != -1) {
            if (*(int *)local_1b8 != 0) {
              LOCK();
              *(int *)local_1b8 = *(int *)local_1b8 + -1;
              local_31 = *(int *)local_1b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10007cecb;
            }
            QArrayData::deallocate(local_1b8,2,8);
          }
LAB_10007cecb:
          if (iVar3 < 0) {
            (**(code **)(*(long *)pCVar8 + 0x20))(pCVar8);
            pCVar9 = operator_new(0xb0);
            CVmNativeLook::CVmNativeLook(pCVar9);
            local_1c0 = local_90;
            if (1 < *(int *)local_90 + 1U) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + 1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
            }
            iVar3 = CBaseNode::fromString
                              ((CBaseNode *)(pCVar9 + 0x10),
                               (QTypedArrayData<unsigned_short> *)&local_1c0,false,(QString *)0x0,
                               (int *)0x0,(int *)0x0);
            if (*(int *)local_1c0 != -1) {
              if (*(int *)local_1c0 != 0) {
                LOCK();
                *(int *)local_1c0 = *(int *)local_1c0 + -1;
                local_31 = *(int *)local_1c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10007cfea;
              }
              QArrayData::deallocate(local_1c0,2,8);
            }
LAB_10007cfea:
            if (iVar3 < 0) {
              (**(code **)(*(long *)pCVar9 + 0x20))(pCVar9);
              pCVar10 = operator_new(0xb0);
              CVmWin7Look::CVmWin7Look(pCVar10);
              local_1c8 = local_90;
              if (1 < *(int *)local_90 + 1U) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + 1;
                local_31 = *(int *)local_90 != 0;
                UNLOCK();
              }
              iVar3 = CBaseNode::fromString
                                ((CBaseNode *)(pCVar10 + 0x10),
                                 (QTypedArrayData<unsigned_short> *)&local_1c8,false,(QString *)0x0,
                                 (int *)0x0,(int *)0x0);
              if (*(int *)local_1c8 != -1) {
                if (*(int *)local_1c8 != 0) {
                  LOCK();
                  *(int *)local_1c8 = *(int *)local_1c8 + -1;
                  local_31 = *(int *)local_1c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10007d109;
                }
                QArrayData::deallocate(local_1c8,2,8);
              }
LAB_10007d109:
              if (iVar3 < 0) {
                (**(code **)(*(long *)pCVar10 + 0x20))(pCVar10);
                pCVar11 = operator_new(0xe0);
                CVmVideo::CVmVideo(pCVar11);
                local_1d0 = local_90;
                if (1 < *(int *)local_90 + 1U) {
                  LOCK();
                  *(int *)local_90 = *(int *)local_90 + 1;
                  local_31 = *(int *)local_90 != 0;
                  UNLOCK();
                }
                iVar3 = CBaseNode::fromString
                                  ((CBaseNode *)(pCVar11 + 0x10),
                                   (QTypedArrayData<unsigned_short> *)&local_1d0,false,
                                   (QString *)0x0,(int *)0x0,(int *)0x0);
                if (*(int *)local_1d0 != -1) {
                  if (*(int *)local_1d0 != 0) {
                    LOCK();
                    *(int *)local_1d0 = *(int *)local_1d0 + -1;
                    local_31 = *(int *)local_1d0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10007d229;
                  }
                  QArrayData::deallocate(local_1d0,2,8);
                }
LAB_10007d229:
                if (iVar3 < 0) {
                  (**(code **)(*(long *)pCVar11 + 0x20))(pCVar11);
                  puVar12 = (undefined4 *)___cxa_allocate_exception(4);
                  *puVar12 = 0x80033000;
                    /* WARNING: Subroutine does not return */
                  ___cxa_throw(puVar12,PTR_typeinfo_100ba22d8,0);
                }
                pCVar11 = (CVmVideo *)CVmConfiguration::getVmHardwareList();
                CVmHardware::setVideo(pCVar11);
                QString::fromUtf8_helper((char *)&local_40,0x9e5813);
                QString::operator=(&local_190,&local_40);
                if (*(int *)local_40.field0_0x0 != -1) {
                  if (*(int *)local_40.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                    local_31 = *(int *)local_40.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10007d29e;
                  }
                  QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
                }
              }
              else {
                CVmConfiguration::getVmSettings();
                pCVar10 = (CVmWin7Look *)CVmSettings::getVmTools();
                CVmTools::setWin7Look(pCVar10);
                QString::fromUtf8_helper((char *)&local_48,0x9e57fe);
                QString::operator=(&local_190,&local_48);
                if (*(int *)local_48.field0_0x0 != -1) {
                  if (*(int *)local_48.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
                    local_31 = *(int *)local_48.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10007d29e;
                  }
                  QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
                }
              }
            }
            else {
              CVmConfiguration::getVmSettings();
              pCVar9 = (CVmNativeLook *)CVmSettings::getVmTools();
              CVmTools::setNativeLook(pCVar9);
              QString::fromUtf8_helper((char *)&local_50,0x9e57e6);
              QString::operator=(&local_190,&local_50);
              if (*(int *)local_50.field0_0x0 != -1) {
                if (*(int *)local_50.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
                  local_31 = *(int *)local_50.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10007d29e;
                }
                QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
              }
            }
          }
          else {
            CVmConfiguration::getVmSettings();
            pCVar8 = (CVmSharedApplications *)CVmSettings::getVmTools();
            CVmTools::setVmSharedApplications(pCVar8);
            QString::fromUtf8_helper((char *)&local_58,0x9e57c6);
            QString::operator=(&local_190,&local_58);
            if (*(int *)local_58.field0_0x0 != -1) {
              if (*(int *)local_58.field0_0x0 != 0) {
                LOCK();
                *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
                local_31 = *(int *)local_58.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10007d29e;
              }
              QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
            }
          }
        }
        else {
          CVmConfiguration::getVmSettings();
          pCVar7 = (CVmSharedProfile *)CVmSettings::getVmTools();
          CVmTools::setVmSharedProfile(pCVar7);
          QString::fromUtf8_helper((char *)&local_60,0x9e57aa);
          QString::operator=(&local_190,&local_60);
          if (*(int *)local_60.field0_0x0 != -1) {
            if (*(int *)local_60.field0_0x0 != 0) {
              LOCK();
              *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
              local_31 = *(int *)local_60.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10007d29e;
            }
            QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          }
        }
      }
      else {
        CVmConfiguration::getVmSettings();
        pCVar6 = (CVmSharedVolumes *)CVmSettings::getVmTools();
        CVmTools::setSharedVolumes(pCVar6);
        QString::fromUtf8_helper((char *)&local_68,0x9e578f);
        QString::operator=(&local_190,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10007d29e;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
      }
    }
    else {
      CVmConfiguration::getVmSettings();
      pCVar5 = (CVmSharing *)CVmSettings::getVmTools();
      CVmTools::setVmSharing(pCVar5);
      QString::fromUtf8_helper((char *)&local_70,0x9e5774);
      QString::operator=(&local_190,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10007d29e;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
    }
  }
  else {
    CVmConfiguration::getVmSettings();
    pCVar4 = (CVmCoherence *)CVmSettings::getVmTools();
    CVmTools::setVmCoherence(pCVar4);
    QString::fromUtf8_helper((char *)&local_78,0x9e575e);
    QString::operator=(&local_190,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10007d29e;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
  }
LAB_10007d29e:
  cVar2 = operator==(&local_88,(QString *)(*(long *)(param_1 + 0x10) + 0x18));
  if (cVar2 == '\0') {
    puVar12 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar12 = 0x80000105;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar12,PTR_typeinfo_100ba22d8,0);
  }
  cVar2 = FUN_10007a1b0(local_188,(CVmConfiguration *)(param_1 + 0x28));
  if (cVar2 != '\0') {
    puVar12 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar12 = 0x80033001;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar12,PTR_typeinfo_100ba22d8,0);
  }
  CVmEvent::CVmEvent(local_2d0);
  iVar3 = FUN_100075b40(param_1,local_188,local_2d0);
  if (iVar3 < 0) {
    piVar14 = (int *)___cxa_allocate_exception(4);
    *piVar14 = iVar3;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(piVar14,PTR_typeinfo_100ba22d8,0);
  }
  local_2e8 = (undefined8 *)0x0;
  puStack_2e0 = (undefined8 *)0x0;
  local_2d8 = (undefined8 *)0x0;
  local_2f0 = operator_new(0xd0);
  local_2f8 = local_90;
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_31 = *(int *)local_90 != 0;
    UNLOCK();
  }
  local_300 = (QArrayData *)local_190.field0_0x0;
  if (1 < *(int *)local_190.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + 1;
    local_31 = *(int *)local_190.field0_0x0 != 0;
    UNLOCK();
  }
  CVmEventParameter::CVmEventParameter(local_2f0,1,&local_2f8);
  if (puStack_2e0 == local_2d8) {
    FUN_10002da50(&local_2e8,&local_2f0);
  }
  else {
    *puStack_2e0 = local_2f0;
    puStack_2e0 = puStack_2e0 + 1;
  }
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_31 = *(int *)local_300 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007d5bc;
    }
    QArrayData::deallocate(local_300,2,8);
  }
LAB_10007d5bc:
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_31 = *(int *)local_2f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007d5f2;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_10007d5f2:
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  plVar15 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_308 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    *(undefined4 *)(plVar15 + 1) = 1;
    plVar15[2] = 0;
    *plVar15 = (long)&PTR_FUN_100bef0d0;
    local_308 = plVar15;
  }
  FUN_100063770(uVar1,0x186bc,0,&local_2e8,0xbbb,&local_308);
  if (local_308 != (long *)0x0) {
    LOCK();
    plVar15 = local_308 + 1;
    lVar16 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)(*local_308 + 0x10))();
    }
  }
  if (local_2e8 != (undefined8 *)0x0) {
    if (puStack_2e0 != local_2e8) {
      puStack_2e0 = (undefined8 *)
                    ((~((long)puStack_2e0 + (-8 - (long)local_2e8)) & 0xfffffffffffffff8U) +
                    (long)puStack_2e0);
    }
    operator_delete(local_2e8);
  }
  QEvent::~QEvent(local_1f0);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_2d0);
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_31 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007d6fc;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_10007d6fc:
  CVmConfiguration::~CVmConfiguration(local_188);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007d73e;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10007d73e:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007d76e;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10007d76e:
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar15 = local_80 + 1;
    lVar16 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  uVar13 = FUN_10006b4e0(param_1,param_2,0);
  return uVar13 & 0xffffffffffffff01;
}

