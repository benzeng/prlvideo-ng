
void FUN_1009b0280(QObject *param_1,int param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  Data *pDVar9;
  QObject *this;
  char *pcVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  QVariant local_a0;
  QObject *local_90;
  int local_84;
  QArrayData *local_80;
  uint local_74;
  long local_70;
  undefined4 local_64;
  QArrayData *local_60;
  int local_54;
  long local_50;
  uint local_44;
  long local_40;
  undefined1 local_31;
  
  lVar8 = FUN_1009983c0();
  lVar8 = *(long *)(lVar8 + 0x28);
  lVar14 = 0;
  if (lVar8 != 0) {
    (*DAT_102310a48)(lVar8);
    lVar14 = lVar8;
  }
  local_40 = 0;
  iVar6 = (*DAT_102310b80)(lVar14,&local_40);
  if (iVar6 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to get self peer info error 0x%X",
                  iVar6);
    goto LAB_1009b08c3;
  }
  local_44 = 0;
  iVar6 = (*DAT_102310ba0)(local_40,&local_44);
  if (iVar6 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to get self peer info modes error 0x%X",iVar6);
    goto LAB_1009b08c3;
  }
  local_50 = 0;
  iVar6 = (*DAT_102311148)(*param_3,&local_50);
  if (iVar6 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to get endpoint info error 0x%X",
                  iVar6);
  }
  else {
    local_54 = 0;
    iVar6 = (*DAT_102311100)(local_50,&local_54);
    if (iVar6 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error : Unable to get endpoint info type error 0x%X",iVar6);
    }
    else if (local_54 == 2) {
      local_60 = (QArrayData *)PTR_shared_null_1021e1288;
      local_64 = 0;
      iVar6 = FUN_10099dc60(DAT_102311158,param_3,&local_60);
      if (iVar6 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error : Unable to get extract listen address error 0x%X",iVar6);
      }
      else {
        iVar6 = (*DAT_102311160)(*param_3,&local_64);
        if (iVar6 < 0) {
          FUN_100df99c0("","TransporterWizardModel",0,
                        "Error : Unable to get extract listen port error 0x%X",iVar6);
        }
        else {
          local_70 = 0;
          iVar6 = (*DAT_102311150)(*param_3,&local_70);
          if (iVar6 < 0) {
            FUN_100df99c0("","TransporterWizardModel",0,
                          "Error : Unable to get \'iam\' info error 0x%X",iVar6);
          }
          else {
            local_74 = 0;
            iVar6 = (*DAT_102311130)(local_70,&local_74);
            if (iVar6 < 0) {
              FUN_100df99c0("","TransporterWizardModel",0,
                            "Error : Unable to get \'iam\' info modes error 0x%X",iVar6);
            }
            else if ((local_74 & local_44) != 0) {
              if (param_2 == 0) {
LAB_1009b066a:
                local_80 = (QArrayData *)PTR_shared_null_1021e1288;
                iVar6 = FUN_10099dc60(DAT_102311118,&local_70,&local_80);
                if (iVar6 < 0) {
                  bVar5 = true;
                  FUN_100df99c0("","TransporterWizardModel",0,
                                "Error : Unable to get \'iam\' info host name error 0x%X",iVar6);
                }
                else {
                  local_84 = 0;
                  iVar7 = (*DAT_102311128)(local_70,&local_84);
                  iVar6 = local_84;
                  if (iVar7 < 0) {
                    bVar5 = true;
                    FUN_100df99c0("","TransporterWizardModel",0,
                                  "Error : Unable to get \'iam\' info protocol version used error 0x%X"
                                  ,iVar7);
                  }
                  else {
                    FUN_1009b0080(param_1,&local_60);
                    lVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102233830);
                    bVar5 = false;
                    if (lVar8 == 0) {
                      this = operator_new(0x28);
                      QObject::QObject(this,param_1);
                      *(undefined ***)this = &PTR_FUN_102233870;
                      *(QArrayData **)(this + 0x10) = local_80;
                      if (1 < *(int *)local_80 + 1U) {
                        LOCK();
                        *(int *)local_80 = *(int *)local_80 + 1;
                        local_31 = *(int *)local_80 != 0;
                        UNLOCK();
                      }
                      *(QArrayData **)(this + 0x18) = local_60;
                      if (1 < *(int *)local_60 + 1U) {
                        LOCK();
                        *(int *)local_60 = *(int *)local_60 + 1;
                        local_31 = *(int *)local_60 != 0;
                        UNLOCK();
                      }
                      this[0x20] = (QObject)(iVar6 == 9);
                      local_90 = this;
                      FUN_1000630f0(param_1 + 0x50,&local_90);
                      bVar5 = false;
                    }
                  }
                }
                if (*(int *)local_80 != -1) {
                  if (*(int *)local_80 != 0) {
                    LOCK();
                    *(int *)local_80 = *(int *)local_80 + -1;
                    local_31 = *(int *)local_80 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1009b07db;
                  }
                  QArrayData::deallocate(local_80,2,8);
                }
LAB_1009b07db:
                if (bVar5) goto LAB_1009b0859;
              }
              else if (param_2 == 1) {
                lVar8 = FUN_1009b0080(param_1,&local_60);
                if (lVar8 != 0) {
                  puVar4 = *(uint **)(param_1 + 0x50);
                  uVar2 = puVar4[3];
                  uVar3 = puVar4[2];
                  lVar11 = (long)(int)uVar3;
                  if ((int)uVar3 < (int)uVar2) {
                    puVar12 = puVar4 + lVar11 * 2 + 2;
                    lVar13 = (long)(int)uVar2 * 8 + lVar11 * -8;
                    do {
                      if (lVar13 == 0) goto LAB_1009b0523;
                      lVar13 = lVar13 + -8;
                      puVar1 = puVar12 + 2;
                      puVar12 = puVar12 + 2;
                    } while (*(long *)puVar1 != lVar8);
                    puVar1 = puVar4 + lVar11 * 2 + 4;
                    iVar6 = (int)((ulong)((long)puVar12 - (long)puVar1) >> 3);
                    if (((iVar6 != -1) && (-1 < iVar6)) && (iVar6 < (int)(uVar2 - uVar3))) {
                      iVar6 = (int)(param_1 + 0x50);
                      if (1 < *puVar4) {
                        pDVar9 = (Data *)QListData::detach(iVar6);
                        lVar8 = *(long *)(param_1 + 0x50);
                        lVar11 = (long)*(int *)(lVar8 + 8);
                        puVar4 = (uint *)(lVar8 + 0x10 + lVar11 * 8);
                        if ((puVar1 != puVar4) &&
                           (lVar13 = *(int *)(lVar8 + 0xc) - lVar11,
                           lVar13 != 0 && lVar11 <= *(int *)(lVar8 + 0xc))) {
                          _memcpy(puVar4,puVar1,lVar13 * 8);
                        }
                        if (*(int *)pDVar9 != -1) {
                          if (*(int *)pDVar9 != 0) {
                            LOCK();
                            *(int *)pDVar9 = *(int *)pDVar9 + -1;
                            local_31 = *(int *)pDVar9 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1009b0519;
                          }
                          QListData::dispose(pDVar9);
                        }
                      }
LAB_1009b0519:
                      QListData::remove(iVar6);
                    }
                  }
LAB_1009b0523:
                  QObject::deleteLater();
                }
              }
              else if (param_2 == 2) goto LAB_1009b066a;
              lVar8 = CDeclarativeWizardPage::pageContentItem();
              if (lVar8 != 0) {
                pcVar10 = (char *)CDeclarativeWizardPage::pageContentItem();
                if (DAT_102273ff8 == 0) {
                  DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
                }
                QVariant::QVariant(&local_a0,DAT_102273ff8,param_1 + 0x50,0);
                QObject::setProperty(pcVar10,(QVariant *)"agentListModel");
                QVariant::~QVariant(&local_a0);
              }
            }
          }
LAB_1009b0859:
          if (local_70 != 0) {
            (*DAT_102310a50)();
          }
          local_70 = 0;
        }
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b08a6;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
  }
LAB_1009b08a6:
  if (local_50 != 0) {
    (*DAT_102310a50)();
  }
  local_50 = 0;
LAB_1009b08c3:
  if (local_40 != 0) {
    (*DAT_102310a50)();
  }
  local_40 = 0;
  if (lVar14 != 0) {
    (*DAT_102310a50)(lVar14);
  }
  return;
}

