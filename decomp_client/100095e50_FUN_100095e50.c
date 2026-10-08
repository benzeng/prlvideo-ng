
void FUN_100095e50(QString *param_1,QTypedArrayData<unsigned_short> *param_2)

{
  QPixmap *pQVar1;
  QString *pQVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  QTypedArrayData<unsigned_short> *pQVar8;
  QString local_178;
  QArrayData *local_170;
  QString local_168;
  QArrayData *local_160;
  QString local_158;
  QString local_150;
  QString local_148;
  QPixmap local_140 [32];
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QPixmap local_108 [32];
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QPixmap local_d0 [32];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  pQVar8 = *(QTypedArrayData<unsigned_short> **)(param_2 + 8);
  param_1[10].field0_0x0 = pQVar8;
  param_1[0x111].field0_0x0 = pQVar8;
  param_1[0x110].field0_0x0 = param_2;
  puVar3 = PTR_shared_null_1021e1288;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  if (((*(uint *)(param_2 + 0x18) | 4) != 5) && (cVar4 = QWidget::isActiveWindow(), cVar4 == '\0'))
  {
    QWidget::activateWindow();
  }
  QString::fromUtf16((ushort *)&local_58,(int)param_1[0x110].field0_0x0 + 0x38);
  QString::normalized(&local_50,&local_58,1,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100095f0a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100095f0a:
  local_68 = (QArrayData *)local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_29 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  FUN_100099ff0(&local_60,&local_68);
  QString::operator=(&local_50,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100095f6d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100095f6d:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100095f9d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100095f9d:
  uVar5 = QDir::separator();
  iVar6 = QString::lastIndexOf(&local_50,uVar5,0xffffffff,1);
  if (iVar6 != -1) {
    QString::remove((int)&local_50,0);
  }
  pQVar8 = param_1[0x110].field0_0x0;
  switch(*(undefined4 *)(pQVar8 + 0x18)) {
  case 0:
    if (*(int *)((long)&param_1[8].field0_0x0 + 4) != 0) {
      QMetaObject::tr((char *)&local_70,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbad55);
      QWidget::setWindowTitle(param_1);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100096055;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100096055:
      QStackedWidget::setCurrentWidget(*(QWidget **)param_1[6].field0_0x0);
      pQVar2 = *(QString **)(param_1[6].field0_0x0 + 0x18);
      QMetaObject::tr((char *)&local_78,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbad5d);
      QLabel::setText(pQVar2);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000960c8;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1000960c8:
      *(undefined4 *)((long)&param_1[8].field0_0x0 + 4) = 0;
      pQVar8 = param_1[0x110].field0_0x0;
    }
    *(undefined8 *)pQVar8 = 9;
    FUN_1000901c0(param_1[7].field0_0x0);
    break;
  case 1:
    if (*(int *)((long)&param_1[8].field0_0x0 + 4) != 1) {
      QMetaObject::tr((char *)&local_80,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbad6c);
      QWidget::setWindowTitle(param_1);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10009614e;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_10009614e:
      QStackedWidget::setCurrentWidget(*(QWidget **)param_1[6].field0_0x0);
      *(undefined4 *)((long)&param_1[8].field0_0x0 + 4) = 1;
      pQVar8 = param_1[0x110].field0_0x0;
    }
    QString::setNum((ulonglong)&local_40,*(int *)(pQVar8 + 0x20));
    QString::setNum((ulonglong)&local_48,*(int *)(param_1[0x110].field0_0x0 + 0x24));
    QProgressBar::setMaximum((int)*(undefined8 *)(param_1[6].field0_0x0 + 0x20));
    QProgressBar::setValue((int)*(undefined8 *)(param_1[6].field0_0x0 + 0x20));
    pQVar2 = *(QString **)(param_1[6].field0_0x0 + 0x18);
    QMetaObject::tr((char *)&local_98,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbad71);
    QString::arg(&local_90,&local_98,&local_40,0,0x20);
    QString::arg(&local_88,&local_90,&local_48,0,0x20);
    QLabel::setText(pQVar2);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10009627b;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10009627b:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000962b1;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1000962b1:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000962e7;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1000962e7:
    QMetaObject::tr((char *)&local_a8,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbad88);
    QString::arg(&local_a0,&local_a8,&local_50,0,0x20);
    QString::operator=(&local_38,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_29 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10009636e;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_10009636e:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000963a4;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1000963a4:
    QLabel::setText(*(QString **)(param_1[6].field0_0x0 + 0x28));
    pQVar8 = param_1[0x110].field0_0x0;
    *(undefined4 *)pQVar8 = 9;
    *(undefined4 *)(pQVar8 + 4) = 0;
    FUN_1000901c0(param_1[7].field0_0x0);
    break;
  case 2:
    if (*(int *)((long)&param_1[8].field0_0x0 + 4) != 2) {
      QMetaObject::tr((char *)&local_b0,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbad91);
      QWidget::setWindowTitle(param_1);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_29 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100096688;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100096688:
      QStackedWidget::setCurrentWidget(*(QWidget **)param_1[6].field0_0x0);
      pQVar1 = *(QPixmap **)(param_1[6].field0_0x0 + 0x50);
      plVar7 = (long *)QApplication::style();
      (**(code **)(*plVar7 + 0xf8))(local_d0,plVar7,0xc,0,0);
      QLabel::setPixmap(pQVar1);
      QPixmap::~QPixmap(local_d0);
      *(undefined4 *)((long)&param_1[8].field0_0x0 + 4) = 2;
    }
    pQVar2 = *(QString **)(param_1[6].field0_0x0 + 0x58);
    QMetaObject::tr((char *)&local_e0,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbad99);
    QString::arg(&local_d8,&local_e0,&local_50,0,0x20);
    QLabel::setText(pQVar2);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10009677c;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_10009677c:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_29 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
    break;
  case 3:
    if (*(int *)((long)&param_1[8].field0_0x0 + 4) != 3) {
      QMetaObject::tr((char *)&local_e8,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbadd5);
      QWidget::setWindowTitle(param_1);
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_29 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100096826;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100096826:
      QStackedWidget::setCurrentWidget(*(QWidget **)param_1[6].field0_0x0);
      pQVar1 = *(QPixmap **)(param_1[6].field0_0x0 + 0x70);
      plVar7 = (long *)QApplication::style();
      (**(code **)(*plVar7 + 0xf8))(local_108,plVar7,10,0,0);
      QLabel::setPixmap(pQVar1);
      QPixmap::~QPixmap(local_108);
      *(undefined4 *)((long)&param_1[8].field0_0x0 + 4) = 3;
    }
    pQVar2 = *(QString **)(param_1[6].field0_0x0 + 0x80);
    QMetaObject::tr((char *)&local_118,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbaddd);
    QString::arg(&local_110,&local_118,&local_50,0,0x20);
    QLabel::setText(pQVar2);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_29 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10009691d;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_10009691d:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_29 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(local_118,2,8);
    }
    break;
  case 4:
    if (*(int *)((long)&param_1[8].field0_0x0 + 4) != 4) {
      QMetaObject::tr((char *)&local_120,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbae16);
      QWidget::setWindowTitle(param_1);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_29 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100096471;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_100096471:
      QStackedWidget::setCurrentWidget(*(QWidget **)param_1[6].field0_0x0);
      pQVar1 = *(QPixmap **)(param_1[6].field0_0x0 + 0xa0);
      plVar7 = (long *)QApplication::style();
      (**(code **)(*plVar7 + 0xf8))(local_140,plVar7,0xb,0,0);
      QLabel::setPixmap(pQVar1);
      QPixmap::~QPixmap(local_140);
      *(undefined4 *)((long)&param_1[8].field0_0x0 + 4) = 4;
      pQVar8 = param_1[0x110].field0_0x0;
    }
    local_148.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
    iVar6 = *(int *)(pQVar8 + 0x1c);
    if (iVar6 - 2U < 4) {
      QMetaObject::tr((char *)&local_170,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbaeac);
      QString::arg(&local_168,&local_170,&local_50,0,0x20);
      QString::operator=(&local_148,&local_168);
      if (*(int *)local_168.field0_0x0 != -1) {
        if (*(int *)local_168.field0_0x0 != 0) {
          LOCK();
          *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
          local_29 = *(int *)local_168.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10009657f;
        }
        QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
      }
LAB_10009657f:
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_29 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100096b1b;
        }
        QArrayData::deallocate(local_170,2,8);
      }
    }
    else if (iVar6 == 0xb) {
      QMetaObject::tr((char *)&local_160,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbae5d);
      QString::arg(&local_158,&local_160,&local_50,0,0x20);
      QString::operator=(&local_148,&local_158);
      if (*(int *)local_158.field0_0x0 != -1) {
        if (*(int *)local_158.field0_0x0 != 0) {
          LOCK();
          *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
          local_29 = *(int *)local_158.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000969f3;
        }
        QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
      }
LAB_1000969f3:
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_29 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100096b1b;
        }
        QArrayData::deallocate(local_160,2,8);
      }
    }
    else if (iVar6 == 8) {
      QMetaObject::tr((char *)&local_150,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbae1c);
      QString::operator=(&local_148,&local_150);
      if (*(int *)local_150.field0_0x0 != -1) {
        if (*(int *)local_150.field0_0x0 != 0) {
          LOCK();
          *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
          local_29 = *(int *)local_150.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100096b1b;
        }
        QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
      }
    }
    else {
      QMetaObject::tr((char *)&local_178,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbaecd);
      QString::operator=(&local_148,&local_178);
      if (*(int *)local_178.field0_0x0 != -1) {
        if (*(int *)local_178.field0_0x0 != 0) {
          LOCK();
          *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
          local_29 = *(int *)local_178.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100096b1b;
        }
        QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
      }
    }
LAB_100096b1b:
    QLabel::setText(*(QString **)(param_1[6].field0_0x0 + 0x98));
    if (*(int *)local_148.field0_0x0 != -1) {
      if (*(int *)local_148.field0_0x0 != 0) {
        LOCK();
        *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
        local_29 = *(int *)local_148.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
    }
    break;
  case 5:
    QProgressBar::setMaximum((int)*(undefined8 *)(param_1[6].field0_0x0 + 0x20));
    QProgressBar::setValue((int)*(undefined8 *)(param_1[6].field0_0x0 + 0x20));
    pQVar8 = param_1[0x110].field0_0x0;
    *(undefined4 *)pQVar8 = 9;
    *(undefined4 *)(pQVar8 + 4) = 0;
    FUN_1000901c0(param_1[7].field0_0x0);
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100096b98;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100096b98:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100096bc8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100096bc8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100096bf8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100096bf8:
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

