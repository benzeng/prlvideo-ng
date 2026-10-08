
void FUN_100428970(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  Data *pDVar6;
  long *plVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  Data *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  QCoreApplication::translate((char *)&local_68,"CVmEdHddCreateDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004289e5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004289e5:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_70,"CVmEdHddCreateDialog","Type:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428a46;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100428a46:
  QComboBox::clear();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_78 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_80,"CVmEdHddCreateDialog","New image file",0);
  FUN_1000341d0(&local_78,&local_80);
  QCoreApplication::translate((char *)&local_88,"CVmEdHddCreateDialog","Existing image file",0);
  FUN_1000341d0(&local_78,&local_88);
  QCoreApplication::translate((char *)&local_90,"CVmEdHddCreateDialog","Boot Camp",0);
  FUN_1000341d0(&local_78);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428b2c;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100428b2c:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428b5c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100428b5c:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428b8c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100428b8c:
  pDVar6 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428c11;
    }
    iVar1 = *(int *)(local_78 + 0xc);
    if (iVar1 != *(int *)(local_78 + 8)) {
      lVar10 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_78 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100428bf0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100428bf0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100428c11:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_98,"CVmEdHddCreateDialog","Location:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428c7b;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100428c7b:
  pcVar4 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_b0,"CVmEdHddCreateDialog","initFileDevSelectorWidget",0);
  QVariant::QVariant(&local_a8,&local_b0);
  QObject::setProperty(pcVar4,(QVariant *)"initer");
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_29 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428d0b;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100428d0b:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_b8,"CVmEdHddCreateDialog","Size:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428d75;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100428d75:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_c0,"CVmEdHddCreateDialog"," GB",0);
  QDoubleSpinBox::setSuffix(pQVar2);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428ddf;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100428ddf:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_c8,"CVmEdHddCreateDialog","Split the disk image into 2 GB files",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428e49;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100428e49:
  pQVar2 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_d0,"CVmEdHddCreateDialog","Expanding disk",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428eb3;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100428eb3:
  plVar7 = (long *)QTreeWidget::headerItem();
  QCoreApplication::translate((char *)&local_d8,"CVmEdHddCreateDialog","System Name",0);
  pcVar5 = *(code **)(*plVar7 + 0x20);
  QVariant::QVariant(&local_60,&local_d8);
  (*pcVar5)(plVar7,3,0);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_29 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428f49;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100428f49:
  QCoreApplication::translate((char *)&local_e0,"CVmEdHddCreateDialog","Type",0);
  pcVar5 = *(code **)(*plVar7 + 0x20);
  QVariant::QVariant(&local_50,&local_e0);
  (*pcVar5)(plVar7,2,0);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_29 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100428fd0;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_100428fd0:
  QCoreApplication::translate((char *)&local_e8,"CVmEdHddCreateDialog","Size",0);
  pcVar5 = *(code **)(*plVar7 + 0x20);
  QVariant::QVariant(&local_40,&local_e8);
  (*pcVar5)(plVar7,1,0);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_29 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100429057;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_100429057:
  pQVar2 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate((char *)&local_f0,"CVmEdHddCreateDialog","Password:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004290c4;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004290c4:
  pQVar2 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate((char *)&local_f8,"CVmEdHddCreateDialog","Enter HDD password.",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      UNLOCK();
      if (*(int *)local_f8 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
  return;
}

