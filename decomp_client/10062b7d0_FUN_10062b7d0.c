
void FUN_10062b7d0(long *param_1,int param_2)

{
  QString *pQVar1;
  char cVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  QString local_6a8;
  QString local_6a0;
  QString local_698;
  CDownloadedKeyInfo local_690 [240];
  Data *local_5a0;
  Data *local_598;
  Data *local_590;
  uint local_588;
  CDownloadedKeyInfo local_580 [240];
  Data *local_490;
  Data *local_488;
  Data *local_480;
  uint local_478;
  QString local_470;
  CDownloadedKeyInfo local_468 [240];
  CDownloadedKeyInfo local_378 [240];
  QString local_288;
  QString local_280;
  QString local_278;
  QString local_270;
  QString local_268;
  CDownloadedKeyInfo local_260 [240];
  Data *local_170;
  Data *local_168;
  Data *local_160;
  uint local_158;
  CDownloadedKeyInfo local_150 [240];
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar2 = CAbstractTask::isFinished();
  if (cVar2 != '\0') {
    return;
  }
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&PTR_PTR_102209070);
  if (lVar3 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    param_2 = -0x7fffffff;
LAB_10062b90d:
                    /* WARNING: Could not recover jumptable at 0x00010062b91e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return;
  }
  if (param_2 < 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    goto LAB_10062b90d;
  }
  FUN_1002ca170(&local_40,lVar3);
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)(param_1 + 0x1c),SUB81(&local_40,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062b880;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10062b880:
  local_60 = (Data *)param_1[0x1a];
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar4 = (long)*(int *)(local_60 + 8);
      lVar3 = param_1[0x1a];
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_60 + lVar4 * 8) &&
         (lVar6 = *(int *)(local_60 + 0xc) - lVar4, lVar6 != 0 && lVar4 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  pQVar1 = (QString *)(param_1 + 0x1b);
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      CDownloadedKeyInfo::CDownloadedKeyInfo(local_150,*(CDownloadedKeyInfo **)local_58);
      if (local_48 != 0) {
        local_170 = (Data *)param_1[0x2f];
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 == 0) {
            QListData::detach((int)&local_170);
            lVar4 = (long)*(int *)(local_170 + 8);
            lVar3 = param_1[0x2f];
            if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_170 + lVar4 * 8) &&
               (lVar6 = *(int *)(local_170 + 0xc) - lVar4,
               lVar6 != 0 && lVar4 <= *(int *)(local_170 + 0xc))) {
              _memcpy(local_170 + lVar4 * 8 + 0x10,
                      (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + 1;
            local_31 = *(int *)local_170 != 0;
            UNLOCK();
          }
        }
        local_168 = local_170 + (long)*(int *)(local_170 + 8) * 8 + 0x10;
        local_160 = local_170 + (long)*(int *)(local_170 + 0xc) * 8 + 0x10;
        local_158 = 1;
        bVar8 = false;
        if (*(int *)(local_170 + 8) != *(int *)(local_170 + 0xc)) {
          do {
            CDownloadedKeyInfo::CDownloadedKeyInfo(local_260,*(CDownloadedKeyInfo **)local_168);
            if (local_158 != 0) {
              CDownloadedKeyInfo::getKey();
              CDownloadedKeyInfo::getKey();
              cVar2 = operator==(&local_268,&local_270);
              if (*(int *)local_270.field0_0x0 != -1) {
                if (*(int *)local_270.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
                  local_31 = *(int *)local_270.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10062baf1;
                }
                QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
              }
LAB_10062baf1:
              if (*(int *)local_268.field0_0x0 != -1) {
                if (*(int *)local_268.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
                  local_31 = *(int *)local_268.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10062bb27;
                }
                QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
              }
LAB_10062bb27:
              if (cVar2 == '\0') {
                local_158 = 0;
              }
              else {
                CBaseNode::toString(SUB81(&local_278,0),SUB81(local_150,0));
                CBaseNode::toString(SUB81(&local_280,0),SUB81(local_260,0));
                cVar2 = operator==(&local_278,&local_280);
                if (*(int *)local_280.field0_0x0 != -1) {
                  if (*(int *)local_280.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
                    local_31 = *(int *)local_280.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10062bba0;
                  }
                  QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
                }
LAB_10062bba0:
                if (*(int *)local_278.field0_0x0 != -1) {
                  if (*(int *)local_278.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
                    local_31 = *(int *)local_278.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10062bbd6;
                  }
                  QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
                }
LAB_10062bbd6:
                bVar8 = true;
                if (cVar2 == '\0') {
                  if (*(int *)(pQVar1->field0_0x0 + 4) != 0) {
                    CDownloadedKeyInfo::getKey();
                    cVar2 = operator==(pQVar1,&local_288);
                    if (*(int *)local_288.field0_0x0 != -1) {
                      if (*(int *)local_288.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + -1;
                        local_31 = *(int *)local_288.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10062bc4c;
                      }
                      QArrayData::deallocate((QArrayData *)local_288.field0_0x0,2,8);
                    }
LAB_10062bc4c:
                    if (cVar2 == '\0') goto LAB_10062bcaa;
                  }
                  CDownloadedKeyInfo::CDownloadedKeyInfo(local_468,local_150);
                  CDownloadedKeyInfo::CDownloadedKeyInfo(local_378,local_260);
                  FUN_10062c6e0(param_1 + 0x32,local_468);
                  CDownloadedKeyInfo::~CDownloadedKeyInfo(local_378);
                  CDownloadedKeyInfo::~CDownloadedKeyInfo(local_468);
                }
              }
            }
LAB_10062bcaa:
            CDownloadedKeyInfo::~CDownloadedKeyInfo(local_260);
            local_168 = local_168 + 8;
            uVar5 = local_158 ^ 1;
            bVar7 = local_158 != 1;
            local_158 = uVar5;
          } while ((bVar7) && (local_168 != local_160));
        }
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 != 0) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + -1;
            local_31 = *(int *)local_170 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062bd13;
          }
          QListData::dispose(local_170);
        }
LAB_10062bd13:
        if (!bVar8) {
          if (*(int *)(pQVar1->field0_0x0 + 4) != 0) {
            CDownloadedKeyInfo::getKey();
            cVar2 = operator==(pQVar1,&local_470);
            if (*(int *)local_470.field0_0x0 != -1) {
              if (*(int *)local_470.field0_0x0 != 0) {
                LOCK();
                *(int *)local_470.field0_0x0 = *(int *)local_470.field0_0x0 + -1;
                local_31 = *(int *)local_470.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10062bd83;
              }
              QArrayData::deallocate((QArrayData *)local_470.field0_0x0,2,8);
            }
LAB_10062bd83:
            if (cVar2 == '\0') goto LAB_10062bd96;
          }
          FUN_10062c780(param_1 + 0x31,local_150);
        }
LAB_10062bd96:
        local_48 = 0;
      }
      CDownloadedKeyInfo::~CDownloadedKeyInfo(local_150);
      local_58 = local_58 + 8;
      uVar5 = local_48 ^ 1;
      bVar8 = local_48 != 1;
      local_48 = uVar5;
    } while ((bVar8) && (local_58 != local_50));
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062bdf8;
    }
    QListData::dispose(local_60);
  }
LAB_10062bdf8:
  local_490 = (Data *)param_1[0x2f];
  if (*(int *)local_490 != -1) {
    if (*(int *)local_490 == 0) {
      QListData::detach((int)&local_490);
      lVar4 = (long)*(int *)(local_490 + 8);
      lVar3 = param_1[0x2f];
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_490 + lVar4 * 8) &&
         (lVar6 = *(int *)(local_490 + 0xc) - lVar4,
         lVar6 != 0 && lVar4 <= *(int *)(local_490 + 0xc))) {
        _memcpy(local_490 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_490 = *(int *)local_490 + 1;
      local_31 = *(int *)local_490 != 0;
      UNLOCK();
    }
  }
  local_488 = local_490 + (long)*(int *)(local_490 + 8) * 8 + 0x10;
  local_480 = local_490 + (long)*(int *)(local_490 + 0xc) * 8 + 0x10;
  local_478 = 1;
  if (*(int *)(local_490 + 8) != *(int *)(local_490 + 0xc)) {
    do {
      CDownloadedKeyInfo::CDownloadedKeyInfo(local_580,*(CDownloadedKeyInfo **)local_488);
      if (local_478 != 0) {
        local_5a0 = (Data *)param_1[0x1a];
        if (*(int *)local_5a0 != -1) {
          if (*(int *)local_5a0 == 0) {
            QListData::detach((int)&local_5a0);
            lVar4 = (long)*(int *)(local_5a0 + 8);
            lVar3 = param_1[0x1a];
            if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_5a0 + lVar4 * 8) &&
               (lVar6 = *(int *)(local_5a0 + 0xc) - lVar4,
               lVar6 != 0 && lVar4 <= *(int *)(local_5a0 + 0xc))) {
              _memcpy(local_5a0 + lVar4 * 8 + 0x10,
                      (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_5a0 = *(int *)local_5a0 + 1;
            local_31 = *(int *)local_5a0 != 0;
            UNLOCK();
          }
        }
        local_598 = local_5a0 + (long)*(int *)(local_5a0 + 8) * 8 + 0x10;
        local_590 = local_5a0 + (long)*(int *)(local_5a0 + 0xc) * 8 + 0x10;
        local_588 = 1;
        if (*(int *)(local_5a0 + 8) == *(int *)(local_5a0 + 0xc)) {
          bVar7 = false;
        }
        else {
          bVar8 = false;
          do {
            CDownloadedKeyInfo::CDownloadedKeyInfo(local_690,*(CDownloadedKeyInfo **)local_598);
            bVar7 = bVar8;
            if (local_588 != 0) {
              CDownloadedKeyInfo::getKey();
              CDownloadedKeyInfo::getKey();
              cVar2 = operator==(&local_698,&local_6a0);
              if (*(int *)local_6a0.field0_0x0 != -1) {
                if (*(int *)local_6a0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_6a0.field0_0x0 = *(int *)local_6a0.field0_0x0 + -1;
                  local_31 = *(int *)local_6a0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10062c01e;
                }
                QArrayData::deallocate((QArrayData *)local_6a0.field0_0x0,2,8);
              }
LAB_10062c01e:
              if (*(int *)local_698.field0_0x0 != -1) {
                if (*(int *)local_698.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_698.field0_0x0 = *(int *)local_698.field0_0x0 + -1;
                  local_31 = *(int *)local_698.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10062c054;
                }
                QArrayData::deallocate((QArrayData *)local_698.field0_0x0,2,8);
              }
LAB_10062c054:
              bVar7 = true;
              if (cVar2 == '\0') {
                local_588 = 0;
                bVar7 = bVar8;
              }
            }
            CDownloadedKeyInfo::~CDownloadedKeyInfo(local_690);
            local_598 = local_598 + 8;
            uVar5 = local_588 ^ 1;
            bVar8 = local_588 != 1;
            local_588 = uVar5;
          } while ((bVar8) && (bVar8 = bVar7, local_598 != local_590));
        }
        if (*(int *)local_5a0 != -1) {
          if (*(int *)local_5a0 != 0) {
            LOCK();
            *(int *)local_5a0 = *(int *)local_5a0 + -1;
            local_31 = *(int *)local_5a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062c0dc;
          }
          QListData::dispose(local_5a0);
        }
LAB_10062c0dc:
        if (!bVar7) {
          if (*(int *)(pQVar1->field0_0x0 + 4) != 0) {
            CDownloadedKeyInfo::getKey();
            cVar2 = operator==(pQVar1,&local_6a8);
            if (*(int *)local_6a8.field0_0x0 != -1) {
              if (*(int *)local_6a8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_6a8.field0_0x0 = *(int *)local_6a8.field0_0x0 + -1;
                local_31 = *(int *)local_6a8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10062c155;
              }
              QArrayData::deallocate((QArrayData *)local_6a8.field0_0x0,2,8);
            }
LAB_10062c155:
            if (cVar2 == '\0') goto LAB_10062c16d;
          }
          FUN_10062c780(param_1 + 0x30,local_580);
        }
LAB_10062c16d:
        local_478 = 0;
      }
      CDownloadedKeyInfo::~CDownloadedKeyInfo(local_580);
      local_488 = local_488 + 8;
      uVar5 = local_478 ^ 1;
      bVar8 = local_478 != 1;
      local_478 = uVar5;
    } while ((bVar8) && (local_488 != local_480));
  }
  if (*(int *)local_490 != -1) {
    if (*(int *)local_490 != 0) {
      LOCK();
      *(int *)local_490 = *(int *)local_490 + -1;
      local_31 = *(int *)local_490 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062c1ea;
    }
    QListData::dispose(local_490);
  }
LAB_10062c1ea:
  if (((*(int *)(param_1[0x30] + 0xc) == *(int *)(param_1[0x30] + 8)) &&
      (*(int *)(param_1[0x31] + 0xc) == *(int *)(param_1[0x31] + 8))) &&
     (*(int *)(param_1[0x32] + 0xc) == *(int *)(param_1[0x32] + 8))) {
    CAbstractTask::prependSubTask((int)param_1);
  }
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

