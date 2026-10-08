
void FUN_1005ef7e0(QString *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  QString *pQVar8;
  char *pcVar9;
  QArrayData *local_1d0;
  QVariant local_1c8;
  QVariant local_1b8;
  QString local_1a8;
  QString local_1a0;
  QArrayData *local_198;
  QString local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QString local_168;
  QArrayData *local_160;
  QString local_158;
  QArrayData *local_150;
  undefined1 local_148 [8];
  QArrayData *local_140;
  QArrayData *local_138;
  QString local_130;
  QVariant local_128;
  QString local_118;
  QVariant local_110;
  QString local_100;
  QVariant local_f8;
  QString local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QVariant local_90;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  lVar4 = CDeclarativeWizardPage::pageContentItem();
  if (lVar4 == 0) {
    return;
  }
  pQVar8 = param_1 + 7;
  lVar4 = FUN_1005ec990(pQVar8);
  lVar4 = *(long *)(lVar4 + 0xb0);
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(?)Warning: Appliance descriptor doesn\'t containt selected appliance.");
    CAbstractWizardPage::wizardCtrl();
    CWizardController::goBack();
    return;
  }
  CAppliance::getType();
  iVar2 = QString::compare_helper
                    (local_48 + *(long *)(local_48 + 0x10),*(undefined4 *)(local_48 + 4),
                     PTR_s_GetTrialWindows_102275040,0xffffffff,1);
  if (iVar2 == 0) {
    QMetaObject::tr((char *)&local_50,(char *)&PTR_PTR_10221fb40,0x1e05cee);
    CAppliance::getApplianceOsVer();
    EnumUtils::OsVerToString((uint)&local_58);
    QString::arg(&local_40,&local_50,&local_58,0,0x20);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ef975;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1005ef975:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005efa05;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
  else {
    CAppliance::getType();
    iVar2 = QString::compare_helper
                      (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),
                       PTR_s_Windows_10_development_102275048,0xffffffff,1);
    if (iVar2 == 0) {
      QMetaObject::tr((char *)&local_40,(char *)&PTR_PTR_10221fb40,
                      (int)PTR_s_Windows_10_Development_Environme_102270928);
    }
    else {
      FUN_1005cf0b0(&local_40,lVar4);
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005efa05;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1005efa05:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efa35;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005efa35:
  CAbstractWizardPage::setTitle(param_1);
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  lVar6 = FUN_1005ec990(pQVar8);
  local_80 = *(QArrayData **)(lVar6 + 0x98);
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_31 = *(int *)local_80 != 0;
    UNLOCK();
  }
  lVar6 = FUN_1005ec990(pQVar8);
  FUN_1005cc300(&local_78,&local_80,*(undefined8 *)(lVar6 + 0xb0));
  QVariant::QVariant(&local_70,&local_78);
  QObject::setProperty(pcVar5,(QVariant *)"applianceLogo");
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efae5;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1005efae5:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efb15;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005efb15:
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  uVar7 = CAppliance::getPackedSize();
  FUN_100def650(&local_98,uVar7,1);
  local_a0 = (QArrayData *)QString::fromAscii_helper(".0 ",3);
  local_a8 = (QArrayData *)QString::fromAscii_helper(" ",1);
  pQVar8 = (QString *)QString::replace(&local_98,&local_a0,&local_a8,1);
  QVariant::QVariant(&local_90,pQVar8);
  QObject::setProperty(pcVar5,(QVariant *)"packedSize");
  QVariant::~QVariant(&local_90);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efbf2;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005efbf2:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efc28;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005efc28:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efc5e;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005efc5e:
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  uVar7 = CAppliance::getUnpackedSize();
  FUN_100def650(&local_c0,uVar7,1);
  local_c8 = (QArrayData *)QString::fromAscii_helper(".0 ",3);
  local_d0 = (QArrayData *)QString::fromAscii_helper(" ",1);
  pQVar8 = (QString *)QString::replace(&local_c0,&local_c8,&local_d0,1);
  QVariant::QVariant(&local_b8,pQVar8);
  QObject::setProperty(pcVar5,(QVariant *)"unpackedSize");
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efd3b;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1005efd3b:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efd71;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1005efd71:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efda7;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1005efda7:
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  CAppliance::getLogin();
  QVariant::QVariant(&local_e0,&local_e8);
  QObject::setProperty(pcVar5,(QVariant *)"login");
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_31 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efe2c;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_1005efe2c:
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  CAppliance::getPassword();
  QVariant::QVariant(&local_f8,&local_100);
  QObject::setProperty(pcVar5,(QVariant *)"password");
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efeb1;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_1005efeb1:
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  FUN_1005cf0b0(&local_118,lVar4);
  QVariant::QVariant(&local_110,&local_118);
  QObject::setProperty(pcVar5,(QVariant *)"applianceName");
  QVariant::~QVariant(&local_110);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005eff36;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_1005eff36:
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  local_138 = (QArrayData *)
              QString::fromAscii_helper
                        ("<html><style>a { color: #aaddf0; }</style><body>%1</body></html>",0x40);
  CAppliance::getApplianceDescription();
  puVar1 = PTR_shared_null_1021e1288;
  local_150 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1005ccbb0(&local_140,local_148,&local_150);
  QString::arg(&local_130,&local_138,&local_140,0,0x20);
  QVariant::QVariant(&local_128,&local_130);
  QObject::setProperty(pcVar5,(QVariant *)"applianceDescription");
  QVariant::~QVariant(&local_128);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f001d;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_1005f001d:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f0053;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1005f0053:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f0089;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1005f0089:
  FUN_100036370(local_148);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f00cb;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1005f00cb:
  local_158.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  CAppliance::getType();
  iVar2 = QString::compare_helper
                    (local_160 + *(long *)(local_160 + 0x10),*(undefined4 *)(local_160 + 4),
                     PTR_s_GetTrialWindows_102275040,0xffffffff,1);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f013e;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1005f013e:
  if (iVar2 == 0) {
    QMetaObject::tr((char *)&local_178,(char *)&PTR_PTR_10221fb40,0x1e05cff);
    uVar3 = CAppliance::getTrialPeriod();
    QString::arg(&local_170,&local_178,uVar3,0,10,0x20);
    CAppliance::getApplianceOsVer();
    EnumUtils::OsVerToString((uint)&local_180);
    QString::arg(&local_168,&local_170,&local_180,0,0x20);
    QString::operator=(&local_158,&local_168);
    if (*(int *)local_168.field0_0x0 != -1) {
      if (*(int *)local_168.field0_0x0 != 0) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
        local_31 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f0380;
      }
      QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
    }
LAB_1005f0380:
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f03b6;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_1005f03b6:
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f03ec;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_1005f03ec:
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f0515;
      }
      QArrayData::deallocate(local_178,2,8);
    }
  }
  else {
    CAppliance::getType();
    iVar2 = QString::compare_helper
                      (local_188 + *(long *)(local_188 + 0x10),*(undefined4 *)(local_188 + 4),
                       PTR_s_ModernIE_102275038,0xffffffff,1);
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f01b8;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_1005f01b8:
    if (iVar2 == 0) {
      QMetaObject::tr((char *)&local_190,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Test_Environments_102270918);
      QString::operator=(&local_158,&local_190);
      if (*(int *)local_190.field0_0x0 != -1) {
        if (*(int *)local_190.field0_0x0 != 0) {
          LOCK();
          *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
          local_31 = *(int *)local_190.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f0515;
        }
        QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
      }
    }
    else {
      CAppliance::getType();
      iVar2 = QString::compare_helper
                        (local_198 + *(long *)(local_198 + 0x10),*(undefined4 *)(local_198 + 4),
                         PTR_s_Windows_10_development_102275048,0xffffffff,1);
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f0232;
        }
        QArrayData::deallocate(local_198,2,8);
      }
LAB_1005f0232:
      if (iVar2 == 0) {
        QMetaObject::tr((char *)&local_1a0,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_This_is_an_evaluation_virtual_ma_102270930);
        QString::operator=(&local_158,&local_1a0);
        if (*(int *)local_1a0.field0_0x0 != -1) {
          if (*(int *)local_1a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
            local_31 = *(int *)local_1a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005f0515;
          }
          QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_1a8,(char *)&PTR_PTR_10221fb40,0x1e05d31);
        QString::operator=(&local_158,&local_1a8);
        if (*(int *)local_1a8.field0_0x0 != -1) {
          if (*(int *)local_1a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
            local_31 = *(int *)local_1a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005f0515;
          }
          QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
        }
      }
    }
  }
LAB_1005f0515:
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  QVariant::QVariant(&local_1b8,&local_158);
  QObject::setProperty(pcVar5,(QVariant *)"notice");
  QVariant::~QVariant(&local_1b8);
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  CAppliance::getLogin();
  if (*(int *)(local_1d0 + 4) == 0) {
    pcVar9 = "WorkStateWithoutAdministrationInterfaces";
  }
  else {
    pcVar9 = "WorkState";
  }
  QVariant::QVariant(&local_1c8,pcVar9);
  QObject::setProperty(pcVar5,(QVariant *)"state");
  QVariant::~QVariant(&local_1c8);
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_31 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f05f0;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_1005f05f0:
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_31 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f0626;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_1005f0626:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

