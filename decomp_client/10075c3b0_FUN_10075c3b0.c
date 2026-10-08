
void FUN_10075c3b0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  QPixmap *pQVar3;
  undefined *puVar4;
  undefined1 uVar5;
  QObject *pQVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  QString *pQVar11;
  char *pcVar12;
  undefined8 uVar13;
  QVariant local_158;
  Data *local_148;
  Data *local_140;
  Data *local_138;
  undefined4 local_130;
  QArrayData *local_128;
  Data *local_120;
  QVariant local_118;
  Data *local_108;
  Data *local_100;
  Data *local_f8;
  undefined4 local_f0;
  QArrayData *local_e8;
  Data *local_e0;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  undefined4 local_c0;
  QArrayData *local_b8;
  QRegExp local_b0 [8];
  Data *local_a8;
  QArrayData *local_a0;
  QPixmap local_98 [32];
  QArrayData *local_78;
  QPixmap local_70 [32];
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar6 = operator_new(0x30);
  QWidget::QWidget((QWidget *)pQVar6,0,0);
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  piVar8 = *(int **)(param_1 + 0x180);
  if (piVar8 != piVar7) {
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      piVar8 = *(int **)(param_1 + 0x180);
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x180) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x180));
      }
    }
    *(int **)(param_1 + 0x180) = piVar7;
    *(QObject **)(param_1 + 0x188) = pQVar6;
  }
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
  }
  pQVar11 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (pQVar11 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x180) + 4) != 0)) {
    pQVar11 = *(QString **)(param_1 + 0x188);
  }
  FUN_10019bb00(&local_40);
  QWidget::setStyleSheet(pQVar11);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075c4bc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10075c4bc:
  pcVar12 = (char *)0x0;
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (pcVar12 = (char *)0x0, *(int *)(*(long *)(param_1 + 0x180) + 4) != 0)) {
    pcVar12 = *(char **)(param_1 + 0x188);
  }
  QVariant::QVariant(&local_50,true);
  QObject::setProperty(pcVar12,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_50);
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x180) + 4) != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x188);
  }
  FUN_10075e2a0(param_1 + 0x28,uVar13);
  plVar1 = *(long **)(param_1 + 0x140);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar5 = FUN_100124f90();
  (*pcVar2)(plVar1,uVar5);
  pQVar3 = *(QPixmap **)(param_1 + 0x30);
  local_78 = (QArrayData *)QString::fromAscii_helper(":/images/Clean_up_hdd.png",0x19);
  QPixmap::QPixmap(local_70,&local_78,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075c5b6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10075c5b6:
  local_a0 = (QArrayData *)QString::fromAscii_helper(":/images/Header_divider.png",0x1b);
  QPixmap::QPixmap(local_98,&local_a0,0,0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075c61b;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10075c61b:
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x180) + 4) != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x188);
  }
  local_b8 = (QArrayData *)QString::fromAscii_helper("*Divider",8);
  QRegExp::QRegExp(local_b0,&local_b8,1,1);
  puVar4 = PTR_shared_null_1021e15e8;
  local_a8 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(uVar13,local_b0,PTR_staticMetaObject_1021e14a8,&local_a8,1);
  QRegExp::~QRegExp(local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075c6e0;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10075c6e0:
  local_d8 = local_a8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 == 0) {
      QListData::detach((int)&local_d8);
      lVar9 = (long)*(int *)(local_d8 + 8);
      if ((local_a8 + (long)*(int *)(local_a8 + 8) * 8 != local_d8 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_d8 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_d8 + 0xc))) {
        _memcpy(local_d8 + lVar9 * 8 + 0x10,local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
    }
  }
  local_d0 = local_d8 + (long)*(int *)(local_d8 + 8) * 8 + 0x10;
  local_c8 = local_d8 + (long)*(int *)(local_d8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_d8 + 8) != *(int *)(local_d8 + 0xc)) {
    do {
      local_c0 = 1;
      QLabel::setPixmap(*(QPixmap **)local_d0);
      local_d0 = local_d0 + 8;
    } while (local_d0 != local_c8);
  }
  local_c0 = 1;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075c7ec;
    }
    QListData::dispose(local_d8);
  }
LAB_10075c7ec:
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x180) + 4) != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x188);
  }
  local_e8 = (QArrayData *)PTR_shared_null_1021e1288;
  local_e0 = (Data *)puVar4;
  qt_qFindChildren_helper(uVar13,&local_e8,PTR_staticMetaObject_1021e14a8,&local_e0,1);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075c874;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10075c874:
  local_108 = local_e0;
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 == 0) {
      QListData::detach((int)&local_108);
      lVar9 = (long)*(int *)(local_108 + 8);
      if ((local_e0 + (long)*(int *)(local_e0 + 8) * 8 != local_108 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_108 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_108 + 0xc))) {
        _memcpy(local_108 + lVar9 * 8 + 0x10,local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + 1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
    }
  }
  local_100 = local_108 + (long)*(int *)(local_108 + 8) * 8 + 0x10;
  local_f8 = local_108 + (long)*(int *)(local_108 + 0xc) * 8 + 0x10;
  if (*(int *)(local_108 + 8) != *(int *)(local_108 + 0xc)) {
    do {
      local_f0 = 1;
      pcVar12 = *(char **)local_100;
      QVariant::QVariant(&local_118,true);
      QObject::setProperty(pcVar12,(QVariant *)"macNoSubpixelAA");
      QVariant::~QVariant(&local_118);
      local_100 = local_100 + 8;
    } while (local_100 != local_f8);
  }
  local_f0 = 1;
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075c9a7;
    }
    QListData::dispose(local_108);
  }
LAB_10075c9a7:
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x180) + 4) != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x188);
  }
  local_128 = (QArrayData *)PTR_shared_null_1021e1288;
  local_120 = (Data *)puVar4;
  qt_qFindChildren_helper(uVar13,&local_128,PTR_staticMetaObject_1021e12c0,&local_120,1);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075ca2f;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10075ca2f:
  local_148 = local_120;
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 == 0) {
      QListData::detach((int)&local_148);
      lVar9 = (long)*(int *)(local_148 + 8);
      if ((local_120 + (long)*(int *)(local_120 + 8) * 8 != local_148 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_148 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_148 + 0xc))) {
        _memcpy(local_148 + lVar9 * 8 + 0x10,local_120 + (long)*(int *)(local_120 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + 1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
    }
  }
  local_140 = local_148 + (long)*(int *)(local_148 + 8) * 8 + 0x10;
  local_138 = local_148 + (long)*(int *)(local_148 + 0xc) * 8 + 0x10;
  if (*(int *)(local_148 + 8) != *(int *)(local_148 + 0xc)) {
    do {
      local_130 = 1;
      pcVar12 = *(char **)local_140;
      QVariant::QVariant(&local_158,true);
      QObject::setProperty(pcVar12,(QVariant *)"macNoSubpixelAA");
      QVariant::~QVariant(&local_158);
      local_140 = local_140 + 8;
    } while (local_140 != local_138);
  }
  local_130 = 1;
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075cb67;
    }
    QListData::dispose(local_148);
  }
LAB_10075cb67:
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x180) + 4) != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x188);
  }
  FUN_1003812a0(*(undefined8 *)(param_1 + 0x10),uVar13);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  FUN_100124f90();
  QWidget::setFixedSize((int)uVar13,0x366);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075cbde;
    }
    QListData::dispose(local_120);
  }
LAB_10075cbde:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075cc0a;
    }
    QListData::dispose(local_e0);
  }
LAB_10075cc0a:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075cc36;
    }
    QListData::dispose(local_a8);
  }
LAB_10075cc36:
  QPixmap::~QPixmap(local_98);
  return;
}

