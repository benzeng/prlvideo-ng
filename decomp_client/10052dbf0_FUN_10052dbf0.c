
void FUN_10052dbf0(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  long lVar9;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QString local_198;
  QVariant local_190;
  QArrayData *local_180;
  QArrayData *local_178;
  QString local_170;
  QVariant local_168;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  Data *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  Data *local_110;
  QArrayData *local_108;
  QString local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QString local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QVariant local_80;
  QString local_70;
  QVariant local_68;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CAppPreferencesGeneralPage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052dc67;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10052dc67:
  QCoreApplication::translate((char *)&local_58,"CAppPreferencesGeneralPage","General",0);
  QVariant::QVariant(&local_50,&local_58);
  QObject::setProperty((char *)param_2,(QVariant *)"pageName");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052dce1;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10052dce1:
  QCoreApplication::translate((char *)&local_70,"CAppPreferencesGeneralPage","PREFS_USR_GENERAL",0);
  QVariant::QVariant(&local_68,&local_70);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052dd5b;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10052dd5b:
  QCoreApplication::translate
            ((char *)&local_88,"CAppPreferencesGeneralPage","NSPreferencesGeneral",0);
  QVariant::QVariant(&local_80,&local_88);
  QObject::setProperty((char *)param_2,(QVariant *)"nsStandardAction");
  QVariant::~QVariant(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052ddd5;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10052ddd5:
  pQVar2 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_90,"CAppPreferencesGeneralPage","Parallels menu:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052de3f;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10052de3f:
  pQVar2 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_98,"CAppPreferencesGeneralPage","Show Parallels icon in menu bar",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052dea9;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10052dea9:
  pcVar3 = *(char **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_b0,"CAppPreferencesGeneralPage","Pd",0);
  QVariant::QVariant(&local_a8,&local_b0);
  QObject::setProperty(pcVar3,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052df39;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_10052df39:
  pQVar2 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate
            ((char *)&local_b8,"CAppPreferencesGeneralPage","Virtual Machines Folder:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052dfa3;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10052dfa3:
  pcVar3 = *(char **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_d0,"CAppPreferencesGeneralPage","Pw",0);
  QVariant::QVariant(&local_c8,&local_d0);
  QObject::setProperty(pcVar3,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e033;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_10052e033:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_d8,"CAppPreferencesGeneralPage","Notification area: ",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e09d;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10052e09d:
  pQVar2 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_e0,"CAppPreferencesGeneralPage","Show tray icon",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e107;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10052e107:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_e8,"CAppPreferencesGeneralPage","Minimize to tray",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e171;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10052e171:
  pcVar3 = *(char **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_100,"CAppPreferencesGeneralPage","Pd",0);
  QVariant::QVariant(&local_f8,&local_100);
  QObject::setProperty(pcVar3,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e201;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_10052e201:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_108,"CAppPreferencesGeneralPage","Virtual Machine Dock Icons:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e26b;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10052e26b:
  QComboBox::clear();
  puVar5 = PTR_shared_null_1021e15e8;
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  local_110 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_118,"CAppPreferencesGeneralPage","OS Icon",0);
  FUN_1000341d0(&local_110,&local_118);
  QCoreApplication::translate((char *)&local_120,"CAppPreferencesGeneralPage","Live Screenshot",0);
  FUN_1000341d0(&local_110);
  QComboBox::insertItems((int)uVar4,(QStringList *)0x0);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e337;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10052e337:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e36d;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10052e36d:
  pDVar6 = local_110;
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e401;
    }
    iVar1 = *(int *)(local_110 + 0xc);
    if (iVar1 != *(int *)(local_110 + 8)) {
      lVar9 = (long)*(int *)(local_110 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_110 + (long)iVar1 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10052e3e0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10052e3e0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_10052e401:
  pQVar2 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate
            ((char *)&local_128,"CAppPreferencesGeneralPage","Check for Updates:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e46b;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10052e46b:
  QComboBox::clear();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  local_130 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_138,"CAppPreferencesGeneralPage","Once a day",0);
  FUN_1000341d0(&local_130,&local_138);
  QCoreApplication::translate((char *)&local_140,"CAppPreferencesGeneralPage","Once a week",0);
  FUN_1000341d0(&local_130,&local_140);
  QCoreApplication::translate((char *)&local_148,"CAppPreferencesGeneralPage","Once a month",0);
  FUN_1000341d0(&local_130);
  QComboBox::insertItems((int)uVar4,(QStringList *)0x0);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e56b;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10052e56b:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e5a1;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10052e5a1:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e5d7;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10052e5d7:
  pDVar6 = local_130;
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e671;
    }
    iVar1 = *(int *)(local_130 + 0xc);
    if (iVar1 != *(int *)(local_130 + 8)) {
      lVar9 = (long)*(int *)(local_130 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_130 + (long)iVar1 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10052e650:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10052e650;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_10052e671:
  pQVar2 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate
            ((char *)&local_150,"CAppPreferencesGeneralPage","Download updates automatically",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e6de;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10052e6de:
  pQVar2 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate((char *)&local_158,"CAppPreferencesGeneralPage","Check Now",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e74b;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10052e74b:
  pcVar3 = *(char **)(param_1 + 0x98);
  QCoreApplication::translate((char *)&local_170,"CAppPreferencesGeneralPage","Pw",0);
  QVariant::QVariant(&local_168,&local_170);
  QObject::setProperty(pcVar3,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_168);
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_31 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e7de;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_10052e7de:
  pQVar2 = *(QString **)(param_1 + 0xa0);
  QCoreApplication::translate
            ((char *)&local_178,"CAppPreferencesGeneralPage",
             "Manage remotely with Parallels Management Console",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e84b;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10052e84b:
  pQVar2 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate((char *)&local_180,"CAppPreferencesGeneralPage","OS X Resume:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e8b8;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_10052e8b8:
  pcVar3 = *(char **)(param_1 + 0xb8);
  QCoreApplication::translate((char *)&local_198,"CAppPreferencesGeneralPage","Pd",0);
  QVariant::QVariant(&local_190,&local_198);
  QObject::setProperty(pcVar3,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_190);
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      local_31 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e94b;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_10052e94b:
  pQVar2 = *(QString **)(param_1 + 200);
  QCoreApplication::translate
            ((char *)&local_1a0,"CAppPreferencesGeneralPage","Disable for @@PRODUCT_NAME",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e9b8;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10052e9b8:
  pQVar2 = *(QString **)(param_1 + 0xd0);
  QCoreApplication::translate
            ((char *)&local_1a8,"CAppPreferencesGeneralPage",
             "Virtual machines shut down according\nto their startup and shutdown settings.",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      UNLOCK();
      if (*(int *)local_1a8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
  return;
}

