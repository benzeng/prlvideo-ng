
undefined1 FUN_100431f50(QObject *param_1,QEvent *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  QArrayData *pQVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  QPaintDevice *pQVar12;
  char *pcVar13;
  QPoint *pQVar14;
  bool bVar15;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QPixmap local_c0 [32];
  QPainter local_a0 [8];
  QVariant local_98;
  QVariant local_88;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  undefined1 local_31;
  
  lVar10 = (**(code **)(*(long *)param_2 + 8))(param_2,"QComboBox");
  if ((lVar10 != 0) && (*(short *)(param_3 + 0x10) == 0xc)) {
    lVar10 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
    QObject::property((char *)&local_88);
    iVar6 = QVariant::userType();
    if (iVar6 == 0x2a) {
      piVar11 = (int *)QVariant::constData();
      iVar6 = *piVar11;
    }
    else {
      local_78 = -1;
      local_74 = 0xffffffff;
      local_68 = 0;
      local_70 = 0;
      cVar4 = QVariant::convert((int)&local_88,(void *)0x2a);
      iVar6 = -1;
      if (cVar4 != '\0') {
        iVar6 = local_78;
      }
    }
    QObject::property((char *)&local_98);
    QVariant::operator=(&local_88,&local_98);
    QVariant::~QVariant(&local_98);
    iVar7 = QVariant::userType();
    if (iVar7 == 0x2a) {
      piVar11 = (int *)QVariant::constData();
      iVar7 = *piVar11;
    }
    else {
      local_60 = -1;
      local_5c = 0xffffffff;
      local_50 = 0;
      local_58 = 0;
      cVar4 = QVariant::convert((int)&local_88,(void *)0x2a);
      iVar7 = -1;
      if (cVar4 != '\0') {
        iVar7 = local_60;
      }
    }
    pQVar12 = (QPaintDevice *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      pQVar12 = (QPaintDevice *)0x0;
    }
    QPainter::QPainter(local_a0,pQVar12);
    pcVar13 = ":/pixmaps/item_arrows_black.png";
    if (iVar7 == iVar6) {
      pcVar13 = ":/pixmaps/item_arrows_white.png";
    }
    local_c8 = (QArrayData *)QString::fromAscii_helper(pcVar13,0x1f);
    QPixmap::QPixmap(local_c0,&local_c8,0,0);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100432270;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100432270:
    iVar6 = *(int *)(*(long *)(lVar10 + 0x28) + 0x1c);
    iVar7 = *(int *)(*(long *)(lVar10 + 0x28) + 0x14);
    iVar8 = QPixmap::width();
    iVar1 = *(int *)(*(long *)(lVar10 + 0x28) + 0x18);
    iVar2 = *(int *)(*(long *)(lVar10 + 0x28) + 0x20);
    iVar9 = QPixmap::height();
    local_48 = (double)(((iVar6 + 1) - iVar7) + iVar8 * -2);
    local_40 = (double)((((iVar2 + 1) - iVar1) - iVar9) / 2);
    QPainter::drawPixmap((QPointF *)local_a0,(QPixmap *)&local_48);
    QPixmap::~QPixmap(local_c0);
    QPainter::~QPainter(local_a0);
    QVariant::~QVariant(&local_88);
    return 1;
  }
  if (*(short *)(param_3 + 0x10) != 6) goto LAB_1004324fe;
  QObject::property((char *)&local_d8);
  cVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_d8);
  if (cVar4 == '\0') goto LAB_1004324fe;
  lVar10 = ___dynamic_cast(param_3,PTR_typeinfo_1021e1710,PTR_typeinfo_1021e1750,0);
  pQVar14 = (QPoint *)0x0;
  if ((*(uint *)(*(long *)(param_2 + 8) + 0x20) & 1) != 0) {
    pQVar14 = (QPoint *)param_2;
  }
  local_e0 = (QArrayData *)QString::fromAscii_helper("\\/:*?\"<>|%",10);
  if ((lVar10 != 0) && (pQVar14 != (QPoint *)0x0)) {
    pQVar3 = *(QArrayData **)(lVar10 + 0x20);
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    if (*(int *)(pQVar3 + 4) == 0) {
      bVar15 = false;
    }
    else {
      local_e8 = *(QArrayData **)(lVar10 + 0x20);
      if (1 < *(int *)local_e8 + 1U) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + 1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
      }
      iVar6 = QString::indexOf(&local_e0,&local_e8,0,1);
      bVar15 = iVar6 != -1;
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100432317;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
    }
LAB_100432317:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100432346;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_100432346:
    if (bVar15) {
      local_f8 = QWidget::pos();
      local_f0 = QWidget::mapToGlobal(pQVar14);
      QMetaObject::tr((char *)&local_108,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_A_file_name_can_t_contain_any_of_10226ec98);
      local_110 = (QArrayData *)QString::fromAscii_helper("\\/:*?\"&lt;&gt;|%",0x10);
      QString::arg(&local_100,&local_108,&local_110,0,0x20);
      QToolTip::showText((QPoint *)&local_f0,&local_100,(QWidget *)pQVar14);
      if (*(int *)local_100.field0_0x0 != -1) {
        if (*(int *)local_100.field0_0x0 != 0) {
          LOCK();
          *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
          local_31 = *(int *)local_100.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10043241f;
        }
        QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
      }
LAB_10043241f:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100432455;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100432455:
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10043248b;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_10043248b:
      if (*(int *)local_e0 == -1) {
        return 1;
      }
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        UNLOCK();
        if (*(int *)local_e0 != 0) {
          return 1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_e0,2,8);
      return 1;
    }
  }
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004324fe;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004324fe:
  uVar5 = QStyledItemDelegate::eventFilter(param_1,param_2);
  return uVar5;
}

