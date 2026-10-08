
void FUN_10038ffd0(long param_1)

{
  QString *pQVar1;
  QObject *pQVar2;
  QPixmap *pQVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  QHBoxLayout *this;
  QArrayData *pQVar10;
  QPixmap local_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  QWidget *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  Data_conflict local_108;
  undefined4 local_100;
  QArrayData *local_f8;
  QVariant local_f0;
  QVariant local_e0;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  QVariant local_90;
  QVariant local_80;
  QArrayData *local_70;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  QObject *local_50;
  int *local_48;
  QObject *local_40;
  int *local_38;
  undefined1 local_29;
  
  FUN_100390cd0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10));
  uVar6 = FUN_1006915d0();
  lVar7 = FUN_100691620(uVar6,0x86,*(undefined8 *)PTR_self_1021e1388);
  if ((lVar7 != 0) && (cVar4 = QAction::isVisible(), cVar4 != '\0')) {
    cVar4 = FUN_1006272c0();
    pQVar1 = *(QString **)(param_1 + 0xe0);
    if (cVar4 == '\0') {
      QLabel::text();
      QSettings::QSettings((QSettings *)&local_f0,(QObject *)0x0);
      local_f8 = (QArrayData *)QString::fromAscii_helper("LastReleasedVersion",0x13);
      local_100 = 0x80000000;
      local_108.field7 = 0;
      QSettings::value((QString *)&local_e0,&local_f0);
      iVar5 = QVariant::toInt((bool *)&local_e0);
      QString::arg(&local_c8,&local_d0,(long)iVar5,0,10,0x20);
      local_110 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME",0xe);
      FUN_1001c72e0(&local_118);
      QString::replace(&local_c8,&local_110,&local_118,1);
      QLabel::setText(pQVar1);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_29 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003904fa;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1003904fa:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_29 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100390530;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100390530:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_29 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100390566;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100390566:
      QVariant::~QVariant(&local_e0);
      QVariant::~QVariant((QVariant *)&local_108);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_29 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003905b4;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_1003905b4:
      QSettings::~QSettings((QSettings *)&local_f0);
      if (*(int *)local_d0 == -1) goto LAB_1003905f6;
      local_c0 = local_d0;
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        iVar5 = *(int *)local_d0;
        UNLOCK();
        goto joined_r0x0001003905de;
      }
    }
    else {
      QMetaObject::tr((char *)&local_70,"",0x1de01d2);
      QSettings::QSettings((QSettings *)&local_90,(QObject *)0x0);
      local_98 = (QArrayData *)QString::fromAscii_helper("LastReleasedVersion",0x13);
      local_a0 = 0x80000000;
      local_a8.field7 = 0;
      QSettings::value((QString *)&local_80,&local_90);
      iVar5 = QVariant::toInt((bool *)&local_80);
      QString::arg(&local_68,&local_70,(long)iVar5,0,10,0x20);
      local_b0 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME",0xe);
      FUN_1001c72e0(&local_b8);
      QString::replace(&local_68,&local_b0,&local_b8,1);
      QLabel::setText(pQVar1);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_29 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10039015d;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_10039015d:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_29 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100390193;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100390193:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003901c3;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1003901c3:
      QVariant::~QVariant(&local_80);
      QVariant::~QVariant((QVariant *)&local_a8);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_29 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10039020e;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_10039020e:
      QSettings::~QSettings((QSettings *)&local_90);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10039024a;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10039024a:
      pQVar1 = *(QString **)(param_1 + 0x100);
      QMetaObject::tr((char *)&local_c0,"",0x1de0249);
      QAbstractButton::setText(pQVar1);
      if (*(int *)local_c0 == -1) goto LAB_1003905f6;
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        iVar5 = *(int *)local_c0;
        UNLOCK();
joined_r0x0001003905de:
        local_29 = iVar5 != 0;
        if ((bool)local_29) goto LAB_1003905f6;
      }
    }
    QArrayData::deallocate(local_c0,2,8);
    goto LAB_1003905f6;
  }
  local_38 = (int *)PTR_shared_null_1021e15e8;
  pQVar2 = *(QObject **)(param_1 + 200);
  piVar8 = (int *)0x0;
  if (pQVar2 != (QObject *)0x0) {
    piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  local_48 = piVar8;
  local_40 = pQVar2;
  FUN_10007b8d0(&local_38,&local_48);
  local_50 = *(QObject **)(param_1 + 0xd0);
  piVar9 = (int *)0x0;
  if (local_50 != (QObject *)0x0) {
    piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_50);
  }
  local_58 = piVar9;
  FUN_10007b8d0(&local_38,&local_58);
  if (piVar9 != (int *)0x0) {
    LOCK();
    *piVar9 = *piVar9 + -1;
    local_29 = *piVar9 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar9);
    }
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_29 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar8);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_10006b440(&local_60,&local_38);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(uVar6,&local_60);
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_29 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003903a2;
    }
    FUN_10006b5d0(&local_60,local_60);
  }
LAB_1003903a2:
  if (*local_38 != -1) {
    if (*local_38 != 0) {
      LOCK();
      *local_38 = *local_38 + -1;
      local_29 = *local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003905f6;
    }
    FUN_10006b5d0(&local_38,local_38);
  }
LAB_1003905f6:
  QWidget::setFixedWidth((int)*(undefined8 *)(param_1 + 0x10));
  local_198 = *(undefined8 *)(param_1 + 0xb8);
  uStack_190 = *(undefined8 *)(param_1 + 0xb0);
  local_188 = *(undefined8 *)(param_1 + 0x138);
  uStack_180 = *(undefined8 *)(param_1 + 0x140);
  local_170 = *(undefined8 *)(param_1 + 0x100);
  local_178 = *(undefined8 *)(param_1 + 0x158);
  lVar7 = *(long *)(*(long *)(param_1 + 0x168) + 0x30);
  local_150 = *(undefined8 *)(lVar7 + 0x70);
  local_168 = *(undefined8 *)(lVar7 + 0x18);
  uStack_160 = *(undefined8 *)(lVar7 + 0x20);
  local_158 = *(undefined8 *)(lVar7 + 0x60);
  local_148 = *(undefined8 *)(lVar7 + 0x80);
  local_140 = *(undefined8 *)(lVar7 + 0x38);
  local_138 = *(QWidget **)(param_1 + 0x80);
  uStack_130 = *(undefined8 *)(param_1 + 0x88);
  local_128 = *(undefined8 *)(param_1 + 0x50);
  local_120 = *(undefined8 *)(param_1 + 0x148);
  FontUtils::setH3Font(local_138,true);
  FontUtils::setH3Font(*(QWidget **)(param_1 + 0x88),true);
  pQVar3 = *(QPixmap **)(param_1 + 0x50);
  FUN_1001c8260(local_1b8,7);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_1b8);
  QWidget::setParent(*(QWidget **)(param_1 + 0x168));
  this = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this,*(QWidget **)(param_1 + 0x90));
  QLayout::setMargin((int)this);
  QBoxLayout::setSpacing((int)this);
  QBoxLayout::addWidget(this,*(undefined8 *)(param_1 + 0x168),0,0);
  QObject::installEventFilter(*(QObject **)(param_1 + 0x90));
  QObject::installEventFilter(*(QObject **)(param_1 + 0x10));
  FUN_100397360(*(undefined8 *)(param_1 + 0x160));
  pQVar1 = *(QString **)(param_1 + 0x10);
  pQVar10 = (QArrayData *)QString::fromAscii_helper("",0);
  QWidget::setWindowTitle(pQVar1);
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      UNLOCK();
      if (*(int *)pQVar10 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
  return;
}

