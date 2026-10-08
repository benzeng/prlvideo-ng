
undefined1 FUN_1009a1e10(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 in_stack_fffffffffffffee0;
  QArrayData **ppQVar9;
  undefined4 uVar10;
  undefined8 in_stack_fffffffffffffee8;
  uint uVar11;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QFileInfo local_f0 [8];
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QDir local_d0 [8];
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  int local_38;
  undefined1 local_31;
  
  uVar10 = (undefined4)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  uVar11 = (uint)((ulong)in_stack_fffffffffffffee8 >> 0x20);
  uVar6 = FUN_1009983a0();
  cVar3 = FUN_100990a80(uVar6);
  if (cVar3 != '\0') {
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
    local_48 = (QArrayData *)PTR_shared_null_1021e1288;
    cVar3 = FUN_1009c9640(&local_40,&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009a1e8a;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1009a1e8a:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009a1eba;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1009a1eba:
    if (cVar3 == '\0') {
      FUN_100df99c0("","TransporterWizardModel",0,"Error : Invalid MAS receipt, exit application.");
      QCoreApplication::exit(0xad);
    }
  }
  lVar7 = FUN_1009983c0(param_1);
  lVar7 = *(long *)(lVar7 + 0x30);
  lVar8 = 0;
  if (lVar7 != 0) {
    (*DAT_102310a48)(lVar7);
    lVar8 = lVar7;
  }
  QLineEdit::text();
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"Selected VM name \'%s\'",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009a1f8d;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
LAB_1009a1f8d:
  cVar3 = FUN_1009a19b0(param_1,&local_50);
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    CPrlFileDevSelectorWidget::getCurrentSystemName();
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","TransporterWizardModel",2,"Selected destination path \'%s\'",
                    local_68 + *(long *)(local_68 + 0x10));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a201e;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
LAB_1009a201e:
    cVar3 = FUN_100d36fb0(&local_60);
    if (cVar3 == '\0') {
LAB_1009a2290:
      local_b8 = (QArrayData *)QString::fromAscii_helper("%1.%2",5);
      QString::arg(&local_b0,&local_b8,&local_50,0,0x20);
      local_c0 = (QArrayData *)QString::fromAscii_helper("pvm",3);
      QString::arg(&local_a8,&local_b0,&local_c0,0,0x20);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a2337;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1009a2337:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a236d;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1009a236d:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a23a3;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1009a23a3:
      QDir::QDir(local_d0,&local_60);
      QDir::absoluteFilePath(&local_c8);
      QString::operator=(&local_60,&local_c8);
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a2413;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
LAB_1009a2413:
      QDir::~QDir(local_d0);
      pcVar2 = DAT_102310d88;
      QString::toUtf8();
      iVar5 = (*pcVar2)(lVar8,local_d8 + *(long *)(local_d8 + 0x10));
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a2481;
        }
        QArrayData::deallocate(local_d8,1,8);
      }
LAB_1009a2481:
      if (iVar5 < 0) {
        uVar6 = CONCAT44(uVar10,0x1da);
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                      "PrlPTAMigration_SetVmName","(hMigration, QSTR2UTF8(vmName))",
                      "Pages/WPDestinationPath.cpp",uVar6,"Commit");
        uVar10 = (undefined4)((ulong)uVar6 >> 0x20);
      }
      local_38 = 1;
      iVar5 = (*DAT_102310c00)(lVar8,&local_38);
      if (iVar5 < 0) {
        uVar6 = CONCAT44(uVar10,0x61);
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                      "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",uVar6,"GetVal");
        uVar10 = (undefined4)((ulong)uVar6 >> 0x20);
      }
      pcVar2 = DAT_102310d80;
      if (local_38 == 0) {
        QString::toUtf8();
        iVar5 = (*pcVar2)(lVar8,local_e0 + *(long *)(local_e0 + 0x10));
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009a25ab;
          }
          QArrayData::deallocate(local_e0,1,8);
        }
LAB_1009a25ab:
        if (iVar5 < 0) {
          uVar6 = CONCAT44(uVar10,0x1df);
          FUN_100df99c0("","TransporterWizardModel",0,
                        "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                        "PrlPTAMigration_SetGeneralHddName","(hMigration, QSTR2UTF8(vmName))",
                        "Pages/WPDestinationPath.cpp",uVar6,"Commit");
          uVar10 = (undefined4)((ulong)uVar6 >> 0x20);
        }
      }
      pcVar2 = DAT_102310d98;
      QString::toUtf8();
      iVar5 = (*pcVar2)(lVar8,local_e8 + *(long *)(local_e8 + 0x10));
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a265f;
        }
        QArrayData::deallocate(local_e8,1,8);
      }
LAB_1009a265f:
      if (iVar5 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                      "PrlPTAMigration_SetDestinationDir","(hMigration, QSTR2UTF8(destPath))",
                      "Pages/WPDestinationPath.cpp",CONCAT44(uVar10,0x1e1),"Commit");
      }
      QFileInfo::QFileInfo(local_f0,&local_60);
      cVar3 = QFileInfo::exists();
      QFileInfo::~QFileInfo(local_f0);
      if (cVar3 == '\0') {
        uVar6 = FUN_1009983a0(param_1);
        cVar3 = FUN_100990a60(uVar6);
        if (cVar3 == '\0') {
          uVar6 = FUN_1009983a0(param_1);
          cVar3 = FUN_100990a70(uVar6);
          if (cVar3 != '\0') {
            uVar6 = FUN_1009983c0(param_1);
            cVar3 = FUN_100991af0(uVar6);
            if (cVar3 == '\0') goto LAB_1009a2821;
          }
        }
        else {
LAB_1009a2821:
          FUN_1009a15f0(param_1);
        }
        cVar3 = FUN_10099f150(param_1);
        uVar4 = 1;
        if (cVar3 == '\0') {
          uVar4 = FUN_10099e190(param_1);
        }
      }
      else {
        uVar6 = FUN_100998580(param_1);
        FUN_100998560(&local_f8,param_1);
        QMetaObject::tr((char *)&local_100,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_An_item_with_this_name_already_e_10227e0c0);
        QMetaObject::tr((char *)&local_108,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Please_use_another_name__10227e0c8);
        FUN_100a08530(uVar6,&local_f8,&local_100,&local_108);
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009a279a;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_1009a279a:
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009a27d0;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_1009a27d0:
        if (*(int *)local_f8 == -1) {
          uVar4 = 0;
        }
        else {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) {
              uVar4 = 0;
              goto LAB_1009a2871;
            }
          }
          QArrayData::deallocate(local_f8,2,8);
          uVar4 = 0;
        }
      }
LAB_1009a2871:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a28a7;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
    }
    else {
      uVar6 = FUN_100998580(param_1);
      FUN_100998560(&local_70,param_1);
      QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_The_specified_destination_volume_10227e0b8);
      QString::arg(&local_78,&local_80,&local_60,0,0x20);
      puVar1 = PTR_shared_null_1021e1288;
      local_88 = (QArrayData *)PTR_shared_null_1021e1288;
      QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,(int)PTR_s_Yes_10227de98);
      QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,(int)PTR_s_No_10227dea0);
      local_a0 = (QArrayData *)puVar1;
      ppQVar9 = &local_a0;
      iVar5 = FUN_100a084e0(3,uVar6,&local_70,&local_78,&local_88,&local_90,&local_98,ppQVar9,
                            (ulong)uVar11 << 0x20);
      uVar10 = (undefined4)((ulong)ppQVar9 >> 0x20);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a2151;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1009a2151:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a2187;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1009a2187:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a21bd;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1009a21bd:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a21ed;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1009a21ed:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a221d;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1009a221d:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a224d;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1009a224d:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a227d;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1009a227d:
      if (iVar5 == 0) goto LAB_1009a2290;
      uVar4 = 0;
    }
LAB_1009a28a7:
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009a28d7;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1009a28d7:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a2907;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009a2907:
  if (lVar8 != 0) {
    (*DAT_102310a50)(lVar8);
  }
  return uVar4;
}

