
void FUN_100166730(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  QObject *pQVar8;
  int *piVar9;
  ulonglong uVar10;
  QDateTime QVar11;
  CVmConfiguration *pCVar12;
  long lVar13;
  undefined8 uVar14;
  QObject *pQVar15;
  QArrayData *pQVar16;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  long local_298;
  long local_290;
  long local_288;
  QArrayData *local_280;
  CVmConfiguration local_278 [248];
  QString local_180;
  QString local_178;
  QString local_170;
  QDateTime local_168;
  QArrayData *local_160;
  CVmConfiguration local_158 [16];
  undefined1 local_148 [232];
  QString local_60;
  long local_58;
  QString local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  local_48 = *param_2;
  if (local_48 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getResultHandle(&local_40,&local_48);
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (local_40 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: result handle is invalid.");
    goto LAB_100166ee6;
  }
  local_58 = local_40;
  _PrlHandle_AddRef();
  SdkUtils::getParamXML(&local_50,&local_58,0);
  if (local_58 != 0) {
    _PrlHandle_Free();
  }
  pQVar8 = (QObject *)FUN_10015cb20(param_1,param_3);
  if ((pQVar8 != (QObject *)0x0) &&
     (piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8), piVar9 != (int *)0x0
     )) {
    if (piVar9[1] != 0) {
      cVar3 = FUN_10018c2b0(pQVar8);
      CBaseNode::toString(SUB81(&local_60,0),(bool)(cVar3 + '\x10'));
      cVar3 = operator==(&local_50,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016683a;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_10016683a:
      if (cVar3 == '\0') {
        CVmConfiguration::CVmConfiguration(local_158);
        local_160 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        CBaseNode::fromString
                  ((QTypedArrayData<unsigned_short> *)local_148,SUB81(&local_160,0),(QString *)0x0,
                   (int *)0x0,(int *)0x0);
        if (*(int *)local_160 != -1) {
          if (*(int *)local_160 != 0) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + -1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001668c0;
          }
          QArrayData::deallocate(local_160,2,8);
        }
LAB_1001668c0:
        iVar6 = CVmConfiguration::getValidRc();
        if (iVar6 < 0) {
          iVar6 = CVmConfiguration::getValidRc();
          pQVar15 = (QObject *)0x0;
          if (piVar9[1] != 0) {
            pQVar15 = pQVar8;
          }
          FUN_10018c2b0(pQVar15);
          iVar7 = CVmConfiguration::getValidRc();
          if ((iVar6 != iVar7) ||
             ((iVar6 = CVmConfiguration::getValidRc(), iVar6 != -0x7ffffd7d &&
              (iVar6 = CVmConfiguration::getValidRc(), iVar6 != -0x7ffffbac)))) goto LAB_100166929;
        }
        else {
LAB_100166929:
          uVar10 = CVmConfiguration::getVmIdentification();
          pQVar15 = (QObject *)0x0;
          if (piVar9[1] != 0) {
            pQVar15 = pQVar8;
          }
          FUN_10018c2b0(pQVar15);
          CVmConfiguration::getVmIdentification();
          CVmIdentification::getVmUptimeInSeconds();
          CVmIdentification::setVmUptimeInSeconds(uVar10);
          QVar11.field0_0x0.field0_0x0 =
               (QSharedDataPointer<QDateTimePrivate>)CVmConfiguration::getVmIdentification();
          pQVar15 = (QObject *)0x0;
          if (piVar9[1] != 0) {
            pQVar15 = pQVar8;
          }
          FUN_10018c2b0(pQVar15);
          CVmConfiguration::getVmIdentification();
          CVmIdentification::getVmUptimeStartDateTime();
          CVmIdentification::setVmUptimeStartDateTime(QVar11);
          QDateTime::~QDateTime(&local_168);
          CBaseNode::toString(SUB81(&local_170,0),
                              SUB81((QTypedArrayData<unsigned_short> *)local_148,0));
          pQVar15 = (QObject *)0x0;
          if (piVar9[1] != 0) {
            pQVar15 = pQVar8;
          }
          cVar3 = FUN_10018c2b0(pQVar15);
          CBaseNode::toString(SUB81(&local_178,0),(bool)(cVar3 + '\x10'));
          cVar3 = operator==(&local_170,&local_178);
          if (*(int *)local_178.field0_0x0 != -1) {
            if (*(int *)local_178.field0_0x0 != 0) {
              LOCK();
              *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
              local_31 = *(int *)local_178.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100166a3d;
            }
            QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
          }
LAB_100166a3d:
          if (*(int *)local_170.field0_0x0 != -1) {
            if (*(int *)local_170.field0_0x0 != 0) {
              LOCK();
              *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
              local_31 = *(int *)local_170.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100166a73;
            }
            QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
          }
LAB_100166a73:
          if (cVar3 == '\0') {
            pQVar15 = (QObject *)0x0;
            if (piVar9[1] != 0) {
              pQVar15 = pQVar8;
            }
            pCVar12 = (CVmConfiguration *)FUN_10018c2b0(pQVar15);
            local_180.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("diff",4);
            CXmlModelHelper::printConfigDiff(local_158,pCVar12,1,&local_180);
            if (*(int *)local_180.field0_0x0 != -1) {
              if (*(int *)local_180.field0_0x0 != 0) {
                LOCK();
                *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
                local_31 = *(int *)local_180.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100166af9;
              }
              QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
            }
LAB_100166af9:
            pQVar15 = (QObject *)0x0;
            if (piVar9[1] != 0) {
              pQVar15 = pQVar8;
            }
            bVar4 = FUN_10018c770(pQVar15);
            pQVar15 = (QObject *)0x0;
            if (piVar9[1] != 0) {
              pQVar15 = pQVar8;
            }
            pCVar12 = (CVmConfiguration *)FUN_10018c2b0(pQVar15);
            CVmConfiguration::CVmConfiguration(local_278,pCVar12);
            pQVar15 = (QObject *)0x0;
            if (piVar9[1] != 0) {
              pQVar15 = pQVar8;
            }
            lVar13 = FUN_10018c2b0(pQVar15);
            local_280 = (QArrayData *)local_50.field0_0x0;
            if (1 < *(int *)local_50.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
              local_31 = *(int *)local_50.field0_0x0 != 0;
              UNLOCK();
            }
            CBaseNode::fromString
                      ((QTypedArrayData<unsigned_short> *)(lVar13 + 0x10),SUB81(&local_280,0),
                       (QString *)0x0,(int *)0x0,(int *)0x0);
            if (*(int *)local_280 != -1) {
              if (*(int *)local_280 != 0) {
                LOCK();
                *(int *)local_280 = *(int *)local_280 + -1;
                local_31 = *(int *)local_280 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100166bad;
              }
              QArrayData::deallocate(local_280,2,8);
            }
LAB_100166bad:
            pQVar15 = (QObject *)0x0;
            if (piVar9[1] != 0) {
              pQVar15 = pQVar8;
            }
            FUN_10018c2c0(pQVar15,local_278);
            if (piVar9[1] != 0) {
              bVar5 = FUN_10018c770(pQVar8);
              if ((bVar4 ^ bVar5) == 1) {
                pQVar15 = (QObject *)0x0;
                if (piVar9[1] != 0) {
                  pQVar15 = pQVar8;
                }
                FUN_10018c610(pQVar15);
              }
              if (piVar9[1] != 0) {
                local_288 = 0;
                FUN_10018c250(&local_290,pQVar8);
                lVar13 = local_290;
                if ((local_290 != 0) && (_PrlHandle_AddRef(local_290), local_290 != 0)) {
                  _PrlHandle_Free();
                }
                if (local_288 != 0) {
                  _PrlHandle_Free();
                }
                local_288 = 0;
                iVar6 = _PrlVmCfg_GetAccessRights(lVar13,&local_288);
                pQVar15 = (QObject *)0x0;
                if (piVar9[1] != 0) {
                  pQVar15 = pQVar8;
                }
                if (iVar6 < 0) {
                  FUN_10018d830(&local_2a8,pQVar15);
                  QString::toUtf8();
                  pQVar16 = local_2a0 + *(long *)(local_2a0 + 0x10);
                  pQVar15 = (QObject *)0x0;
                  if (piVar9[1] != 0) {
                    pQVar15 = pQVar8;
                  }
                  FUN_100188480(&local_2b8,pQVar15);
                  QString::toUtf8();
                  pQVar2 = local_2b0;
                  lVar1 = *(long *)(local_2b0 + 0x10);
                  uVar14 = FUN_100dddcf0(iVar6);
                  FUN_100df99c0("","prl_client_app",0,
                                "Failed to retrieve ACL for VM \'%s\' \'%s\' with error code: %.8X \'%s\'"
                                ,pQVar16,pQVar2 + lVar1,iVar6,uVar14);
                  if (*(int *)local_2b0 != -1) {
                    if (*(int *)local_2b0 != 0) {
                      LOCK();
                      *(int *)local_2b0 = *(int *)local_2b0 + -1;
                      local_31 = *(int *)local_2b0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100166dc0;
                    }
                    QArrayData::deallocate(local_2b0,1,8);
                  }
LAB_100166dc0:
                  if (*(int *)local_2b8 != -1) {
                    if (*(int *)local_2b8 != 0) {
                      LOCK();
                      *(int *)local_2b8 = *(int *)local_2b8 + -1;
                      local_31 = *(int *)local_2b8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100166df6;
                    }
                    QArrayData::deallocate(local_2b8,2,8);
                  }
LAB_100166df6:
                  if (*(int *)local_2a0 != -1) {
                    if (*(int *)local_2a0 != 0) {
                      LOCK();
                      *(int *)local_2a0 = *(int *)local_2a0 + -1;
                      local_31 = *(int *)local_2a0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100166e33;
                    }
                    QArrayData::deallocate(local_2a0,1,8);
                  }
LAB_100166e33:
                  if (*(int *)local_2a8 != -1) {
                    if (*(int *)local_2a8 != 0) {
                      LOCK();
                      *(int *)local_2a8 = *(int *)local_2a8 + -1;
                      local_31 = *(int *)local_2a8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100166e69;
                    }
                    QArrayData::deallocate(local_2a8,2,8);
                  }
                }
                else {
                  local_298 = local_288;
                  if (local_288 != 0) {
                    _PrlHandle_AddRef();
                  }
                  FUN_10018e250(pQVar15,&local_298);
                  if (local_298 != 0) {
                    _PrlHandle_Free();
                  }
                }
LAB_100166e69:
                if (local_288 != 0) {
                  _PrlHandle_Free();
                }
                if (lVar13 != 0) {
                  _PrlHandle_Free(lVar13);
                }
              }
            }
            CVmConfiguration::~CVmConfiguration(local_278);
          }
        }
        CVmConfiguration::~CVmConfiguration(local_158);
      }
    }
    LOCK();
    *piVar9 = *piVar9 + -1;
    local_31 = *piVar9 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar9);
    }
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100166ee6;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100166ee6:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return;
}

