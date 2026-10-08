
void FUN_1009a01a0(long param_1)

{
  char cVar1;
  QString *pQVar2;
  QString *pQVar3;
  QPixmap *pQVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QPixmap local_a8 [32];
  Data_conflict local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar6 = FUN_1009983c0();
  lVar6 = *(long *)(lVar6 + 0x30);
  lVar11 = 0;
  if (lVar6 != 0) {
    (*DAT_102310a48)(lVar6);
    lVar11 = lVar6;
  }
  iVar5 = (*DAT_102310db0)();
  if (iVar5 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_RemoveInaccessiblePaths","(hMigration)",
                  "Pages/WPDestinationPath.cpp",0x112,"UpdateRequirements");
  }
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  QString::toUtf8();
  FUN_100df99c0("","TransporterWizardModel",0,"VM location: \'%s\'",
                local_c0 + *(long *)(local_c0 + 0x10));
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a02c2;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_1009a02c2:
  uVar7 = FUN_1009983c0(param_1);
  uVar8 = FUN_100992f10(uVar7);
  FUN_100df99c0("","TransporterWizardModel",0,"VM free space required: %llu",uVar8);
  uVar9 = 0;
  if (*(int *)(local_b8 + 4) != 0) {
    uVar9 = FUN_100db9d70(&local_b8);
  }
  FUN_100df99c0("","TransporterWizardModel",0,"VM free space available: %llu",uVar9);
  *(bool *)(param_1 + 0x69) = uVar8 < uVar9;
  lVar6 = *(long *)(param_1 + 0x60);
  pQVar2 = *(QString **)(lVar6 + 0x50);
  pQVar3 = *(QString **)(lVar6 + 0x60);
  cVar1 = *(char *)(param_1 + 0x68);
  iVar5 = *(int *)(local_b8 + 4);
  pQVar4 = *(QPixmap **)(lVar6 + 0x68);
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Required__<b>_1<_b>_10227e048);
  if (cVar1 == '\0') {
    FUN_100def650(&local_50,uVar8,1);
  }
  else {
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_calculating____10227dff8);
  }
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  QLabel::setText(pQVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a042e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009a042e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a045e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009a045e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a048e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009a048e:
  if (pQVar3 != (QString *)0x0) {
    if (iVar5 == 0) {
      local_58 = (QArrayData *)PTR_shared_null_1021e1288;
    }
    else {
      FUN_100def650(&local_58,uVar9,1);
    }
    QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Available__<b>_1<_b>_10227e050);
    QString::arg(&local_60,&local_68,&local_58,0,0x20);
    QLabel::setText(pQVar3);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009a053c;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1009a053c:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009a056c;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1009a056c:
    bVar13 = iVar5 == 0;
    bVar12 = uVar8 < uVar9;
    if (bVar12 || bVar13) {
      QVariant::QVariant((QVariant *)&local_78,true);
    }
    else {
      local_70 = 0x80000000;
      local_78.field7 = 0;
    }
    QObject::setProperty((char *)pQVar3,(QVariant *)"highlightColor");
    QVariant::~QVariant((QVariant *)&local_78);
    if (bVar12 || bVar13) {
      local_80 = 0x80000000;
      local_88.field7 = 0;
    }
    else {
      QVariant::QVariant((QVariant *)&local_88,true);
    }
    QObject::setProperty((char *)pQVar3,(QVariant *)"warningColor");
    QVariant::~QVariant((QVariant *)&local_88);
    plVar10 = (long *)QWidget::style();
    (**(code **)(*plVar10 + 0x68))(plVar10,pQVar3);
    plVar10 = (long *)QWidget::style();
    (**(code **)(*plVar10 + 0x60))(plVar10,pQVar3);
    QWidget::update();
    if (pQVar4 != (QPixmap *)0x0) {
      if (bVar12 || bVar13) {
        QPixmap::QPixmap(local_a8);
      }
      else {
        local_b0 = (QArrayData *)
                   QString::fromAscii_helper(":/pixmaps/PD10_Theme/alert_16x16.png",0x24);
        QPixmap::QPixmap(local_a8,&local_b0,0,0);
      }
      QLabel::setPixmap(pQVar4);
      QPixmap::~QPixmap(local_a8);
      if ((!bVar12 && !bVar13) && (*(int *)local_b0 != -1)) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009a06e5;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
    }
LAB_1009a06e5:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009a0715;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_1009a0715:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0));
  FUN_1009bf300(param_1);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a0770;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1009a0770:
  if (lVar11 != 0) {
    (*DAT_102310a50)();
  }
  return;
}

