
void FUN_1009b1820(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  QString *this;
  long lVar8;
  long lVar9;
  bool bVar10;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  int local_8c;
  long local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  long local_60;
  QArrayData *local_58;
  long local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  lVar4 = FUN_1009983c0();
  lVar4 = *(long *)(lVar4 + 0x28);
  lVar8 = 0;
  if (lVar4 != 0) {
    (*DAT_102310a48)(lVar4);
    lVar8 = lVar4;
  }
  lVar4 = FUN_1009983c0(param_1);
  local_50 = 0;
  lVar4 = *(long *)(lVar4 + 0x30);
  lVar9 = 0;
  if (lVar4 != 0) {
    local_50 = lVar4;
    (*DAT_102310a48)(lVar4);
    lVar9 = lVar4;
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar3 = FUN_10099dc60(DAT_102310c88,&local_50,&local_58);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAMigration_GetComputerName, hMigration, computerName)",
                  "Pages/WPEnableAutoLogon.cpp",0x52,"Initialize");
  }
  local_60 = 0;
  iVar3 = (*DAT_102310e60)(lVar9,&local_60);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_GetUserInfo","(hMigration, &hUserInfo.GetHandle())",
                  "Pages/WPEnableAutoLogon.cpp",0x55,"Initialize");
  }
  local_68 = (QArrayData *)puVar1;
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  local_78 = (QArrayData *)puVar1;
  local_80 = (QArrayData *)puVar1;
  iVar3 = FUN_10099dc60(DAT_102310e68,&local_60,&local_68);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAUserInfo_GetName, hUserInfo, userName)","Pages/WPEnableAutoLogon.cpp",0x5d
                  ,"Initialize");
  }
  iVar3 = FUN_10099dc60(DAT_102310e70,&local_60,&local_70);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAUserInfo_GetDomain, hUserInfo, userDomain)","Pages/WPEnableAutoLogon.cpp",
                  0x5e,"Initialize");
  }
  iVar3 = FUN_10099dc60(DAT_102310e78,&local_60,&local_78);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAUserInfo_GetDisplayName, hUserInfo, userDisplayName)",
                  "Pages/WPEnableAutoLogon.cpp",0x5f,"Initialize");
  }
  iVar3 = FUN_10099dc60(DAT_102310e88,&local_60,&local_80);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAUserInfo_GetInetPrincipalName, hUserInfo, userInetPrincipalName)",
                  "Pages/WPEnableAutoLogon.cpp",0x60,"Initialize");
  }
  iVar3 = QString::compare(&local_70,&local_58,0);
  if ((iVar3 == 0) &&
     (local_70.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288)) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QString::operator=(&local_70,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b1b84;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1009b1b84:
  uVar5 = FUN_1009983c0(param_1);
  cVar2 = FUN_100991a90(uVar5);
  if (cVar2 != '\0') {
    local_88 = 0;
    iVar3 = (*DAT_102310ab8)(lVar8,&local_88);
    if (iVar3 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAgent_GetAuthInfo","(hAgent, &hAuthInfo.GetHandle())",
                    "Pages/WPEnableAutoLogon.cpp",0x6b,"Initialize");
    }
    local_8c = 0;
    iVar3 = (*DAT_102310ac0)(local_88,&local_8c);
    if (iVar3 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAuthInfo_GetAuthType","(hAuthInfo, &authType)",
                    "Pages/WPEnableAutoLogon.cpp",0x6f,"Initialize");
    }
    if (local_8c == 1) {
      local_98 = (QArrayData *)puVar1;
      local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
      iVar3 = FUN_10099dc60(DAT_102310ae0,&local_88,&local_98);
      if (iVar3 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                      "(PrlPTAuthInfo_GetUser, hAuthInfo, authUserName)",
                      "Pages/WPEnableAutoLogon.cpp",0x75,"Initialize");
      }
      iVar3 = FUN_10099dc60(DAT_102310ad0,&local_88,&local_a0);
      if (iVar3 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                      "(PrlPTAuthInfo_GetDomain, hAuthInfo, authUserDomain)",
                      "Pages/WPEnableAutoLogon.cpp",0x76,"Initialize");
      }
      iVar3 = QString::compare(&local_a0,&local_58,0);
      if ((iVar3 == 0) &&
         (local_a0.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288)) {
        local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
        QString::operator=(&local_a0,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009b1dd9;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
      }
LAB_1009b1dd9:
      local_c0 = (QArrayData *)QString::fromAscii_helper("%1%2%3",6);
      QString::arg(&local_b8,&local_c0,&local_a0,0,0x20);
      pcVar7 = "\\";
      pcVar6 = "\\";
      if (*(int *)(local_a0.field0_0x0 + 4) == 0) {
        pcVar6 = "";
      }
      local_c8 = (QArrayData *)
                 QString::fromAscii_helper(pcVar6,(uint)(*(int *)(local_a0.field0_0x0 + 4) != 0));
      QString::arg(&local_b0,&local_b8,&local_c8,0,0x20);
      QString::arg(&local_a8,&local_b0,&local_98,0,0x20);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b1ebf;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1009b1ebf:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b1ef5;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1009b1ef5:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b1f2b;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1009b1f2b:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b1f61;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1009b1f61:
      local_e8 = (QArrayData *)QString::fromAscii_helper("%1%2%3",6);
      QString::arg(&local_e0,&local_e8,&local_70,0,0x20);
      if (*(int *)(local_70.field0_0x0 + 4) == 0) {
        pcVar7 = "";
      }
      local_f0 = (QArrayData *)
                 QString::fromAscii_helper(pcVar7,(uint)(*(int *)(local_70.field0_0x0 + 4) != 0));
      QString::arg(&local_d8,&local_e0,&local_f0,0,0x20);
      QString::arg(&local_d0,&local_d8,&local_68,0,0x20);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b2030;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_1009b2030:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b2066;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_1009b2066:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b209c;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_1009b209c:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b20d2;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_1009b20d2:
      if (*(int *)(local_a8 + 4) != 0) {
        iVar3 = QString::compare(&local_a8,&local_d0,0);
        bVar10 = true;
        if (iVar3 != 0) {
          iVar3 = QString::compare(&local_a8,&local_80,0);
          bVar10 = iVar3 == 0;
        }
        *(bool *)(param_1 + 0x58) = bVar10;
      }
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b214b;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1009b214b:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b2181;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1009b2181:
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b21b7;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_1009b21b7:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009b21ed;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
LAB_1009b21ed:
    if (local_88 != 0) {
      (*DAT_102310a50)();
    }
    local_88 = 0;
  }
  if (*(int *)(local_80 + 4) == 0) {
    local_110 = (QArrayData *)QString::fromAscii_helper("%1%2%3",6);
    QString::arg(&local_108,&local_110,&local_70,0,0x20);
    pcVar6 = "\\";
    if (*(int *)(local_70.field0_0x0 + 4) == 0) {
      pcVar6 = "";
    }
    local_118 = (QArrayData *)
                QString::fromAscii_helper(pcVar6,(uint)(*(int *)(local_70.field0_0x0 + 4) != 0));
    QString::arg(&local_100,&local_108,&local_118,0,0x20);
    bVar10 = true;
    QString::arg(&local_f8,&local_100,&local_68,0,0x20);
  }
  else {
    local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_80;
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
    bVar10 = false;
  }
  this = (QString *)(param_1 + 0x50);
  QString::operator=(this,&local_f8);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b2322;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1009b2322:
  if (bVar10) {
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b2360;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_1009b2360:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b2396;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_1009b2396:
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b23cc;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_1009b23cc:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b2402;
      }
      QArrayData::deallocate(local_110,2,8);
    }
  }
LAB_1009b2402:
  if ((*(int *)(local_78 + 4) != 0) && (iVar3 = QString::compare(&local_78,this,1), iVar3 != 0)) {
    local_130 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
    QString::arg(&local_128,&local_130,&local_78,0,0x20);
    QString::arg(&local_120,&local_128,this,0,0x20);
    QString::operator=(this,&local_120);
    if (*(int *)local_120.field0_0x0 != -1) {
      if (*(int *)local_120.field0_0x0 != 0) {
        LOCK();
        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
        local_31 = *(int *)local_120.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b24c3;
      }
      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
    }
LAB_1009b24c3:
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b24f9;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_1009b24f9:
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b252f;
      }
      QArrayData::deallocate(local_130,2,8);
    }
  }
LAB_1009b252f:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b255f;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1009b255f:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b258f;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1009b258f:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b25bf;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1009b25bf:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b25ef;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009b25ef:
  if (local_60 != 0) {
    (*DAT_102310a50)();
  }
  local_60 = 0;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b263c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009b263c:
  if (lVar9 != 0) {
    (*DAT_102310a50)(lVar9);
  }
  local_50 = 0;
  if (lVar8 != 0) {
    (*DAT_102310a50)(lVar8);
  }
  return;
}

