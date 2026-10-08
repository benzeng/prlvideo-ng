
undefined1 FUN_1009ae2a0(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QDialog local_f8 [152];
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  lVar4 = FUN_1009983c0();
  lVar4 = *(long *)(lVar4 + 0x28);
  lVar7 = 0;
  if (lVar4 != 0) {
    (*DAT_102310a48)(lVar4);
    lVar7 = lVar4;
  }
  local_38 = 0;
  iVar3 = (*DAT_102310ab8)(lVar7,&local_38);
  puVar1 = PTR_shared_null_1021e1288;
  if (iVar3 < 0) {
    uVar6 = 0;
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to get auth info error 0x%X",iVar3);
    goto LAB_1009ae912;
  }
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar3 = FUN_10099dc60(DAT_102310ae0,&local_38,&local_40);
  if (iVar3 < 0) {
    uVar6 = 0;
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to get auth info user name error 0x%X",iVar3);
  }
  else {
    iVar3 = FUN_10099dc60(DAT_102310ad0,&local_38,&local_48);
    if (iVar3 < 0) {
      uVar6 = 0;
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error : Unable to get auth info user domain error 0x%X",iVar3);
    }
    else {
      iVar3 = FUN_10099dc60(DAT_102310af0,&local_38,&local_50);
      if (iVar3 < 0) {
        uVar6 = 0;
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error : Unable to get auth info user password error 0x%X",iVar3);
      }
      else {
        local_58 = (QArrayData *)puVar1;
        local_60 = 0;
        iVar3 = (*DAT_102310b58)(lVar7,&local_60);
        if (iVar3 < 0) {
          uVar6 = 0;
          FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to get agent info error 0x%X",
                        iVar3);
        }
        else {
          iVar3 = FUN_10099dc60(DAT_102310b60,&local_60,&local_58);
          if (iVar3 < 0) {
            uVar6 = 0;
            FUN_100df99c0("","TransporterWizardModel",0,
                          "Error : Unable to get agent info host name error 0x%X",iVar3);
          }
          else if ((*(int *)(local_58 + 4) == 0) &&
                  (iVar3 = FUN_10099dc60(DAT_102310b68,&local_60,&local_58), iVar3 < 0)) {
            uVar6 = 0;
            FUN_100df99c0("","TransporterWizardModel",0,
                          "Error : Unable to get agent info host address error 0x%X",iVar3);
          }
          else {
            FUN_100998560(&local_100,param_1);
            uVar5 = FUN_100998580(param_1);
            FUN_1009b7b90(local_f8,&local_100,&local_58,uVar5);
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                local_29 = *(int *)local_100 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1009ae44c;
              }
              QArrayData::deallocate(local_100,2,8);
            }
LAB_1009ae44c:
            FUN_1009b7ce0(local_f8,&local_40,&local_48,&local_50);
            iVar3 = FUN_1009b7be0(local_f8);
            if (iVar3 == 1) {
              FUN_1009b7f90(local_f8,&local_40,&local_48,&local_50);
              iVar3 = (*DAT_102310ac8)(local_38,1);
              lVar4 = local_38;
              pcVar2 = DAT_102310ae8;
              if (iVar3 < 0) {
                uVar6 = 0;
                FUN_100df99c0("","TransporterWizardModel",0,
                              "Error : Unable to set auth type error 0x%X",iVar3);
              }
              else {
                QString::toUtf8();
                iVar3 = (*pcVar2)(lVar4,local_108 + *(long *)(local_108 + 0x10));
                if (*(int *)local_108 != -1) {
                  if (*(int *)local_108 != 0) {
                    LOCK();
                    *(int *)local_108 = *(int *)local_108 + -1;
                    local_29 = *(int *)local_108 != 0;
                    UNLOCK();
                    if ((bool)local_29) goto LAB_1009ae518;
                  }
                  QArrayData::deallocate(local_108,1,8);
                }
LAB_1009ae518:
                lVar4 = local_38;
                pcVar2 = DAT_102310ad8;
                if (iVar3 < 0) {
                  uVar6 = 0;
                  FUN_100df99c0("","TransporterWizardModel",0,
                                "Error : Unable to set auth user name error 0x%X",iVar3);
                }
                else {
                  QString::toUtf8();
                  iVar3 = (*pcVar2)(lVar4,local_110 + *(long *)(local_110 + 0x10));
                  if (*(int *)local_110 != -1) {
                    if (*(int *)local_110 != 0) {
                      LOCK();
                      *(int *)local_110 = *(int *)local_110 + -1;
                      local_29 = *(int *)local_110 != 0;
                      UNLOCK();
                      if ((bool)local_29) goto LAB_1009ae589;
                    }
                    QArrayData::deallocate(local_110,1,8);
                  }
LAB_1009ae589:
                  lVar4 = local_38;
                  pcVar2 = DAT_102310af8;
                  if (iVar3 < 0) {
                    uVar6 = 0;
                    FUN_100df99c0("","TransporterWizardModel",0,
                                  "Error : Unable to set auth user domain error 0x%X",iVar3);
                  }
                  else {
                    QString::toUtf8();
                    iVar3 = (*pcVar2)(lVar4,local_118 + *(long *)(local_118 + 0x10));
                    if (*(int *)local_118 != -1) {
                      if (*(int *)local_118 != 0) {
                        LOCK();
                        *(int *)local_118 = *(int *)local_118 + -1;
                        local_29 = *(int *)local_118 != 0;
                        UNLOCK();
                        if ((bool)local_29) goto LAB_1009ae5fa;
                      }
                      QArrayData::deallocate(local_118,1,8);
                    }
LAB_1009ae5fa:
                    uVar6 = 1;
                    if (iVar3 < 0) {
                      uVar6 = 0;
                      FUN_100df99c0("","TransporterWizardModel",0,
                                    "Error : Unable to set auth user password error 0x%X",iVar3);
                    }
                  }
                }
              }
            }
            else {
              iVar3 = (*DAT_102310b50)(local_38);
              uVar6 = 0;
              if (iVar3 < 0) {
                FUN_100df99c0("","TransporterWizardModel",0,
                              "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                              "PrlPTAuthInfo_Clear","(hAuthInfo)","Pages/WPConnectViaNetwork.cpp",
                              0x148,"requestLoginPassword");
              }
            }
            QDialog::~QDialog(local_f8);
          }
        }
        if (local_60 != 0) {
          (*DAT_102310a50)();
        }
        local_60 = 0;
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_29 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1009ae882;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
    }
  }
LAB_1009ae882:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009ae8b2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009ae8b2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009ae8e2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009ae8e2:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009ae912;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009ae912:
  if (local_38 != 0) {
    (*DAT_102310a50)();
  }
  local_38 = 0;
  if (lVar7 != 0) {
    (*DAT_102310a50)(lVar7);
  }
  return uVar6;
}

