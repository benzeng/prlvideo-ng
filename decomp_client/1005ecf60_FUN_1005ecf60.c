
void FUN_1005ecf60(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  QVariant local_1c0;
  QArrayData *local_1b0;
  QString local_1a8;
  QVariant local_1a0;
  QVariant local_190;
  QVariant local_180;
  QString local_170;
  QArrayData *local_168;
  QString local_160;
  QArrayData *local_158;
  undefined1 local_150 [24];
  QString local_138;
  QString local_130 [3];
  int local_118;
  QString local_110;
  QString local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined1 local_60 [8];
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  lVar4 = CDeclarativeWizardPage::pageContentItem();
  puVar1 = PTR_shared_null_1021e1288;
  if (lVar4 == 0) {
    return;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  if (*(int *)(lVar4 + 0x50) == 8) {
    uVar5 = FUN_100748240();
    local_158 = (QArrayData *)QString::fromAscii_helper("os.win.preview",0xe);
    uVar5 = FUN_100748290(uVar5,&local_158);
    FUN_100746ae0(local_150,uVar5);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_29 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ed03a;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_1005ed03a:
    QString::operator=(&local_38,&local_138);
    QString::operator=(&local_40,local_130);
    local_168 = (QArrayData *)
                QString::fromAscii_helper("qrc:/pixmaps/OsIcons/os-windows-%1_512x512.png",0x2e);
    iVar2 = 8;
    if (local_118 != 0) {
      iVar2 = local_118;
    }
    QString::arg(&local_160,&local_168,iVar2,0,10,0x20);
    QString::operator=(&local_48,&local_160);
    if (*(int *)local_160.field0_0x0 != -1) {
      if (*(int *)local_160.field0_0x0 != 0) {
        LOCK();
        *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
        local_29 = *(int *)local_160.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ed0eb;
      }
      QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
    }
LAB_1005ed0eb:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_29 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ed121;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_1005ed121:
    QMetaObject::tr((char *)&local_170,"",0x1e05d31);
    QString::operator=(&local_50,&local_170);
    if (*(int *)local_170.field0_0x0 != -1) {
      if (*(int *)local_170.field0_0x0 != 0) {
        LOCK();
        *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
        local_29 = *(int *)local_170.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ed189;
      }
      QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
    }
LAB_1005ed189:
    FUN_10012ac30(local_150);
LAB_1005ed195:
    if (*(int *)(local_38.field0_0x0 + 4) == 0) {
      CAbstractWizardPage::wizardCtrl();
      CWizardController::goNext();
    }
    else {
      pcVar6 = (char *)CDeclarativeWizardPage::pageContentItem();
      QVariant::QVariant(&local_180,&local_48);
      QObject::setProperty(pcVar6,(QVariant *)"applianceLogo");
      QVariant::~QVariant(&local_180);
      CAbstractWizardPage::setTitle(*(QString **)(param_1 + 0x10));
      pcVar6 = (char *)CDeclarativeWizardPage::pageContentItem();
      QVariant::QVariant(&local_190,&local_50);
      QObject::setProperty(pcVar6,(QVariant *)"notice");
      QVariant::~QVariant(&local_190);
      pcVar6 = (char *)CDeclarativeWizardPage::pageContentItem();
      local_1b0 = (QArrayData *)
                  QString::fromAscii_helper
                            ("<html><style>a { color: #aaddf0; }</style><body>%1</body></html>",0x40
                            );
      QString::arg(&local_1a8,&local_1b0,&local_38,0,0x20);
      QVariant::QVariant(&local_1a0,&local_1a8);
      QObject::setProperty(pcVar6,(QVariant *)"applianceDescription");
      QVariant::~QVariant(&local_1a0);
      if (*(int *)local_1a8.field0_0x0 != -1) {
        if (*(int *)local_1a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
          local_29 = *(int *)local_1a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ed2da;
        }
        QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
      }
LAB_1005ed2da:
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_29 = *(int *)local_1b0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ed310;
        }
        QArrayData::deallocate(local_1b0,2,8);
      }
LAB_1005ed310:
      pcVar6 = (char *)CDeclarativeWizardPage::pageContentItem();
      QVariant::QVariant(&local_1c0,"WorkState");
      QObject::setProperty(pcVar6,(QVariant *)"state");
      QVariant::~QVariant(&local_1c0);
    }
  }
  else {
    uVar5 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
    lVar4 = FUN_1005ee670(uVar5);
    if (lVar4 != 0) {
      CAppliance::getAppliancePresentation();
      local_68 = (QArrayData *)puVar1;
      FUN_1005ccbb0(&local_58,local_60,&local_68);
      QString::operator=(&local_38,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_29 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ed3d5;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1005ed3d5:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ed405;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1005ed405:
      FUN_100036370(local_60);
      CAppliance::getType();
      iVar2 = QString::compare_helper
                        (local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(local_70 + 4),
                         PTR_s_GetTrialWindows_102275040,0xffffffff,1);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ed475;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1005ed475:
      if (iVar2 == 0) {
        QMetaObject::tr((char *)&local_80,"",0x1e05cee);
        CAppliance::getApplianceOsVer();
        EnumUtils::OsVerToString((uint)&local_88);
        QString::arg(&local_78,&local_80,&local_88,0,0x20);
        QString::operator=(&local_40,&local_78);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_29 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ed74b;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_1005ed74b:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_29 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ed77b;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1005ed77b:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_29 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ed895;
          }
          QArrayData::deallocate(local_80,2,8);
        }
      }
      else {
        CAppliance::getType();
        iVar2 = QString::compare_helper
                          (local_90 + *(long *)(local_90 + 0x10),*(undefined4 *)(local_90 + 4),
                           PTR_s_ModernIE_102275038,0xffffffff,1);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_29 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ed4ef;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1005ed4ef:
        if (iVar2 == 0) {
          QMetaObject::tr((char *)&local_98,"",0x1e05cf5);
          QString::operator=(&local_40,&local_98);
          if (*(int *)local_98.field0_0x0 != -1) {
            if (*(int *)local_98.field0_0x0 != 0) {
              LOCK();
              *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
              local_29 = *(int *)local_98.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1005ed895;
            }
            QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
          }
        }
        else {
          CAppliance::getType();
          iVar2 = QString::compare_helper
                            (local_a0 + *(long *)(local_a0 + 0x10),*(undefined4 *)(local_a0 + 4),
                             PTR_s_Windows_10_development_102275048,0xffffffff,1);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_29 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1005ed569;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_1005ed569:
          if (iVar2 == 0) {
            QMetaObject::tr((char *)&local_a8,"",
                            (int)PTR_s_Windows_10_Development_Environme_102270928);
            QString::operator=(&local_40,&local_a8);
            if (*(int *)local_a8.field0_0x0 != -1) {
              if (*(int *)local_a8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                local_29 = *(int *)local_a8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1005ed895;
              }
              QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
            }
          }
          else {
            CAppliance::getApplianceName();
            QString::operator=(&local_40,&local_b0);
            if (*(int *)local_b0.field0_0x0 != -1) {
              if (*(int *)local_b0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
                local_29 = *(int *)local_b0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1005ed895;
              }
              QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
            }
          }
        }
      }
LAB_1005ed895:
      lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
      local_c0 = *(QArrayData **)(lVar4 + 0x98);
      if (1 < *(int *)local_c0 + 1U) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + 1;
        local_29 = *(int *)local_c0 != 0;
        UNLOCK();
      }
      lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
      FUN_1005cc300(&local_b8,&local_c0,*(undefined8 *)(lVar4 + 0xb0));
      QString::operator=(&local_48,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_29 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ed92e;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_1005ed92e:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_29 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ed964;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1005ed964:
      CAppliance::getType();
      iVar2 = QString::compare_helper
                        (local_c8 + *(long *)(local_c8 + 0x10),*(undefined4 *)(local_c8 + 4),
                         PTR_s_GetTrialWindows_102275040,0xffffffff,1);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_29 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ed9d0;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1005ed9d0:
      if (iVar2 == 0) {
        QMetaObject::tr((char *)&local_e0,"",0x1e05cff);
        uVar3 = CAppliance::getTrialPeriod();
        QString::arg(&local_d8,&local_e0,uVar3,0,10,0x20);
        CAppliance::getApplianceOsVer();
        EnumUtils::OsVerToString((uint)&local_e8);
        QString::arg(&local_d0,&local_d8,&local_e8,0,0x20);
        QString::operator=(&local_50,&local_d0);
        if (*(int *)local_d0.field0_0x0 != -1) {
          if (*(int *)local_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
            local_29 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005edc0c;
          }
          QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
        }
LAB_1005edc0c:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_29 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005edc42;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_1005edc42:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_29 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005edc78;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_1005edc78:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_29 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ed195;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
      }
      else {
        CAppliance::getType();
        iVar2 = QString::compare_helper
                          (local_f0 + *(long *)(local_f0 + 0x10),*(undefined4 *)(local_f0 + 4),
                           PTR_s_ModernIE_102275038,0xffffffff,1);
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_29 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005eda4a;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_1005eda4a:
        if (iVar2 == 0) {
          QMetaObject::tr((char *)&local_f8,"",0x1dd1f44);
          QString::operator=(&local_50,&local_f8);
          if (*(int *)local_f8.field0_0x0 != -1) {
            if (*(int *)local_f8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
              local_29 = *(int *)local_f8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1005ed195;
            }
            QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
          }
        }
        else {
          CAppliance::getType();
          iVar2 = QString::compare_helper
                            (local_100 + *(long *)(local_100 + 0x10),*(undefined4 *)(local_100 + 4),
                             PTR_s_Windows_10_development_102275048,0xffffffff,1);
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_29 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1005edac4;
            }
            QArrayData::deallocate(local_100,2,8);
          }
LAB_1005edac4:
          if (iVar2 == 0) {
            QMetaObject::tr((char *)&local_108,"",
                            (int)PTR_s_This_is_an_evaluation_virtual_ma_102270930);
            QString::operator=(&local_50,&local_108);
            if (*(int *)local_108.field0_0x0 != -1) {
              if (*(int *)local_108.field0_0x0 != 0) {
                LOCK();
                *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
                local_29 = *(int *)local_108.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1005ed195;
              }
              QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
            }
          }
          else {
            QMetaObject::tr((char *)&local_110,"",0x1e05d31);
            QString::operator=(&local_50,&local_110);
            if (*(int *)local_110.field0_0x0 != -1) {
              if (*(int *)local_110.field0_0x0 != 0) {
                LOCK();
                *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                local_29 = *(int *)local_110.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1005ed195;
              }
              QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
            }
          }
        }
      }
      goto LAB_1005ed195;
    }
    CAbstractWizardPage::wizardCtrl();
    CWizardController::goBack();
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ed623;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1005ed623:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ed653;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005ed653:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ed683;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005ed683:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

