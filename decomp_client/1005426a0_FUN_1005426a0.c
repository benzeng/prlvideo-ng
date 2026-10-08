
void FUN_1005426a0(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_258;
  QArrayData *local_250;
  AnonymousUnion0 local_248;
  QVariant local_240;
  QArrayData *local_230;
  AnonymousUnion0 local_228;
  QVariant local_220;
  QArrayData *local_210;
  QArrayData *local_208;
  AnonymousUnion0 local_200;
  QVariant local_1f8;
  QArrayData *local_1e8;
  AnonymousUnion0 local_1e0;
  QVariant local_1d8;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  AnonymousUnion0 local_1b8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  AnonymousUnion0 local_198;
  QVariant local_190;
  QArrayData *local_180;
  QArrayData *local_178;
  AnonymousUnion0 local_170;
  QVariant local_168;
  QArrayData *local_158;
  AnonymousUnion0 local_150;
  QVariant local_148;
  QArrayData *local_138;
  QArrayData *local_130;
  AnonymousUnion0 local_128;
  QVariant local_120;
  QArrayData *local_110;
  AnonymousUnion0 local_108;
  QVariant local_100;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  AnonymousUnion0 local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  AnonymousUnion0 local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QVariant local_68;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CAppPreferencesSecurityPage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542717;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100542717:
  QCoreApplication::translate((char *)&local_58,"CAppPreferencesSecurityPage","Security",0);
  QVariant::QVariant(&local_50,&local_58);
  QObject::setProperty((char *)param_2,(QVariant *)"pageName");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542791;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100542791:
  QCoreApplication::translate((char *)&local_70,"CAppPreferencesSecurityPage","PREFS_SECURITY",0);
  QVariant::QVariant(&local_68,&local_70);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054280b;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10054280b:
  pQVar2 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_78,"CAppPreferencesSecurityPage","Restrict user actions with password:",
             0);
  QLabel::setText(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054286c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10054286c:
  pQVar2 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_80,"CAppPreferencesSecurityPage","Turn On...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005428cd;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005428cd:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_88,"CAppPreferencesSecurityPage","Change Password...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054292e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10054292e:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_90,"CAppPreferencesSecurityPage",
             "You can also deploy these settings to other computers. <a href=\"%1\">Learn more...</a>"
             ,0);
  QLabel::setText(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542998;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100542998:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_98,"CAppPreferencesSecurityPage","Encryption Engine:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542a02;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100542a02:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_a0,"CAppPreferencesSecurityPage","Allow third-party plugins",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542a6c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100542a6c:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x60);
  local_b8.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate
            ((char *)&local_c0,"CAppPreferencesSecurityPage","WorkspacePreferences.PluginsAllowed",0
            );
  FUN_1000341d0(&local_b8,&local_c0);
  QVariant::QVariant(&local_b0,(QStringList *)&local_b8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542b1e;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100542b1e:
  AVar5 = local_b8;
  if (*(int *)local_b8.field1 != -1) {
    if (*(int *)local_b8.field1 != 0) {
      LOCK();
      *(int *)local_b8.field1 = *(int *)local_b8.field1 + -1;
      local_31 = *(int *)local_b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542bb1;
    }
    iVar1 = *(int *)(local_b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_b8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100542b90:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100542b90;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100542bb1:
  pcVar3 = *(char **)(param_1 + 0x60);
  local_d8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_e0,"CAppPreferencesSecurityPage","DispPreferences",0);
  FUN_1000341d0(&local_d8,&local_e0);
  QVariant::QVariant(&local_d0,(QStringList *)&local_d8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542c5c;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100542c5c:
  AVar5 = local_d8;
  if (*(int *)local_d8.field1 != -1) {
    if (*(int *)local_d8.field1 != 0) {
      LOCK();
      *(int *)local_d8.field1 = *(int *)local_d8.field1 + -1;
      local_31 = *(int *)local_d8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542cf1;
    }
    iVar1 = *(int *)(local_d8.field1 + 0xc);
    if (iVar1 != *(int *)(local_d8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_d8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_d8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100542cd0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100542cd0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100542cf1:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_e8,"CAppPreferencesSecurityPage",
             "To learn more about external plugins, see <a href=\"%1\">here</a>.",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542d5b;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100542d5b:
  pQVar2 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate
            ((char *)&local_f0,"CAppPreferencesSecurityPage","Creating new virtual machines",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542dc5;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100542dc5:
  pcVar3 = *(char **)(param_1 + 0x70);
  local_108.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_110,"CAppPreferencesSecurityPage",
             "PasswordProtectedOperations.LockedOperation",0);
  FUN_1000341d0(&local_108,&local_110);
  QVariant::QVariant(&local_100,(QStringList *)&local_108.field0);
  QObject::setProperty(pcVar3,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_100);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542e70;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100542e70:
  AVar5 = local_108;
  if (*(int *)local_108.field1 != -1) {
    if (*(int *)local_108.field1 != 0) {
      LOCK();
      *(int *)local_108.field1 = *(int *)local_108.field1 + -1;
      local_31 = *(int *)local_108.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542f01;
    }
    iVar1 = *(int *)(local_108.field1 + 0xc);
    if (iVar1 != *(int *)(local_108.field1 + 8)) {
      lVar8 = (long)*(int *)(local_108.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_108.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100542ee0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100542ee0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100542f01:
  pcVar3 = *(char **)(param_1 + 0x70);
  local_128.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_130,"CAppPreferencesSecurityPage","DispPreferences",0);
  FUN_1000341d0(&local_128,&local_130);
  QVariant::QVariant(&local_120,(QStringList *)&local_128.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_120);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542fac;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100542fac:
  AVar5 = local_128;
  if (*(int *)local_128.field1 != -1) {
    if (*(int *)local_128.field1 != 0) {
      LOCK();
      *(int *)local_128.field1 = *(int *)local_128.field1 + -1;
      local_31 = *(int *)local_128.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100543041;
    }
    iVar1 = *(int *)(local_128.field1 + 0xc);
    if (iVar1 != *(int *)(local_128.field1 + 8)) {
      lVar8 = (long)*(int *)(local_128.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_128.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100543020:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100543020;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100543041:
  pQVar2 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate
            ((char *)&local_138,"CAppPreferencesSecurityPage","Adding an existing virtual machine",0
            );
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005430ab;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1005430ab:
  pcVar3 = *(char **)(param_1 + 0x78);
  local_150.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_158,"CAppPreferencesSecurityPage",
             "PasswordProtectedOperations.LockedOperation",0);
  FUN_1000341d0(&local_150,&local_158);
  QVariant::QVariant(&local_148,(QStringList *)&local_150.field0);
  QObject::setProperty(pcVar3,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_148);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100543156;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100543156:
  AVar5 = local_150;
  if (*(int *)local_150.field1 != -1) {
    if (*(int *)local_150.field1 != 0) {
      LOCK();
      *(int *)local_150.field1 = *(int *)local_150.field1 + -1;
      local_31 = *(int *)local_150.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005431e1;
    }
    iVar1 = *(int *)(local_150.field1 + 0xc);
    if (iVar1 != *(int *)(local_150.field1 + 8)) {
      lVar8 = (long)*(int *)(local_150.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_150.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1005431c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1005431c0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1005431e1:
  pcVar3 = *(char **)(param_1 + 0x78);
  local_170.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_178,"CAppPreferencesSecurityPage","DispPreferences",0);
  FUN_1000341d0(&local_170,&local_178);
  QVariant::QVariant(&local_168,(QStringList *)&local_170.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_168);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054328c;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10054328c:
  AVar5 = local_170;
  if (*(int *)local_170.field1 != -1) {
    if (*(int *)local_170.field1 != 0) {
      LOCK();
      *(int *)local_170.field1 = *(int *)local_170.field1 + -1;
      local_31 = *(int *)local_170.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100543321;
    }
    iVar1 = *(int *)(local_170.field1 + 0xc);
    if (iVar1 != *(int *)(local_170.field1 + 8)) {
      lVar8 = (long)*(int *)(local_170.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_170.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100543300:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100543300;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100543321:
  pQVar2 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate
            ((char *)&local_180,"CAppPreferencesSecurityPage","Removing virtual machines",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054338e;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_10054338e:
  pcVar3 = *(char **)(param_1 + 0x80);
  local_198.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_1a0,"CAppPreferencesSecurityPage",
             "PasswordProtectedOperations.LockedOperation",0);
  FUN_1000341d0(&local_198,&local_1a0);
  QVariant::QVariant(&local_190,(QStringList *)&local_198.field0);
  QObject::setProperty(pcVar3,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_190);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054343c;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10054343c:
  AVar5 = local_198;
  if (*(int *)local_198.field1 != -1) {
    if (*(int *)local_198.field1 != 0) {
      LOCK();
      *(int *)local_198.field1 = *(int *)local_198.field1 + -1;
      local_31 = *(int *)local_198.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005434d1;
    }
    iVar1 = *(int *)(local_198.field1 + 0xc);
    if (iVar1 != *(int *)(local_198.field1 + 8)) {
      lVar8 = (long)*(int *)(local_198.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_198.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1005434b0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1005434b0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1005434d1:
  pcVar3 = *(char **)(param_1 + 0x80);
  local_1b8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_1c0,"CAppPreferencesSecurityPage","DispPreferences",0);
  FUN_1000341d0(&local_1b8,&local_1c0);
  QVariant::QVariant(&local_1b0,(QStringList *)&local_1b8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1b0);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054357f;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_10054357f:
  AVar5 = local_1b8;
  if (*(int *)local_1b8.field1 != -1) {
    if (*(int *)local_1b8.field1 != 0) {
      LOCK();
      *(int *)local_1b8.field1 = *(int *)local_1b8.field1 + -1;
      local_31 = *(int *)local_1b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100543611;
    }
    iVar1 = *(int *)(local_1b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1b8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_1b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_1b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1005435f0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1005435f0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100543611:
  pQVar2 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate
            ((char *)&local_1c8,"CAppPreferencesSecurityPage",
             "Cloning or converting virtual machines to a template",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054367e;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_10054367e:
  pcVar3 = *(char **)(param_1 + 0x88);
  local_1e0.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_1e8,"CAppPreferencesSecurityPage",
             "PasswordProtectedOperations.LockedOperation",0);
  FUN_1000341d0(&local_1e0,&local_1e8);
  QVariant::QVariant(&local_1d8,(QStringList *)&local_1e0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_1d8);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054372c;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_10054372c:
  AVar5 = local_1e0;
  if (*(int *)local_1e0.field1 != -1) {
    if (*(int *)local_1e0.field1 != 0) {
      LOCK();
      *(int *)local_1e0.field1 = *(int *)local_1e0.field1 + -1;
      local_31 = *(int *)local_1e0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005437c1;
    }
    iVar1 = *(int *)(local_1e0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1e0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_1e0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_1e0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1005437a0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1005437a0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1005437c1:
  pcVar3 = *(char **)(param_1 + 0x88);
  local_200.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_208,"CAppPreferencesSecurityPage","DispPreferences",0);
  FUN_1000341d0(&local_200,&local_208);
  QVariant::QVariant(&local_1f8,(QStringList *)&local_200.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1f8);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054386f;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_10054386f:
  AVar5 = local_200;
  if (*(int *)local_200.field1 != -1) {
    if (*(int *)local_200.field1 != 0) {
      LOCK();
      *(int *)local_200.field1 = *(int *)local_200.field1 + -1;
      local_31 = *(int *)local_200.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100543901;
    }
    iVar1 = *(int *)(local_200.field1 + 0xc);
    if (iVar1 != *(int *)(local_200.field1 + 8)) {
      lVar8 = (long)*(int *)(local_200.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_200.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1005438e0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1005438e0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100543901:
  pQVar2 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate
            ((char *)&local_210,"CAppPreferencesSecurityPage",
             "Opening Parallels Desktop preferences",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054396e;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_10054396e:
  pcVar3 = *(char **)(param_1 + 0x90);
  local_228.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_230,"CAppPreferencesSecurityPage",
             "PasswordProtectedOperations.LockedOperation",0);
  FUN_1000341d0(&local_228,&local_230);
  QVariant::QVariant(&local_220,(QStringList *)&local_228.field0);
  QObject::setProperty(pcVar3,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_220);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100543a1c;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_100543a1c:
  AVar5 = local_228;
  if (*(int *)local_228.field1 != -1) {
    if (*(int *)local_228.field1 != 0) {
      LOCK();
      *(int *)local_228.field1 = *(int *)local_228.field1 + -1;
      local_31 = *(int *)local_228.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100543ab1;
    }
    iVar1 = *(int *)(local_228.field1 + 0xc);
    if (iVar1 != *(int *)(local_228.field1 + 8)) {
      lVar8 = (long)*(int *)(local_228.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_228.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100543a90:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100543a90;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100543ab1:
  pcVar3 = *(char **)(param_1 + 0x90);
  local_248.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_250,"CAppPreferencesSecurityPage","DispPreferences",0);
  FUN_1000341d0(&local_248,&local_250);
  QVariant::QVariant(&local_240,(QStringList *)&local_248.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_240);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100543b5f;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_100543b5f:
  AVar5 = local_248;
  if (*(int *)local_248.field1 != -1) {
    if (*(int *)local_248.field1 != 0) {
      LOCK();
      *(int *)local_248.field1 = *(int *)local_248.field1 + -1;
      local_31 = *(int *)local_248.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100543bf1;
    }
    iVar1 = *(int *)(local_248.field1 + 0xc);
    if (iVar1 != *(int *)(local_248.field1 + 8)) {
      lVar8 = (long)*(int *)(local_248.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_248.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100543bd0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100543bd0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100543bf1:
  pQVar2 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate
            ((char *)&local_258,"CAppPreferencesSecurityPage","Require Password to:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      UNLOCK();
      if (*(int *)local_258 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_258,2,8);
  }
  return;
}

