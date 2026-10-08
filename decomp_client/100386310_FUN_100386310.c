
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100386310(undefined8 param_1,double param_2,long param_3)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  QObject *pQVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int local_270;
  QObject *local_248;
  QVariant local_238;
  int *local_228;
  QObject *local_220;
  Connection local_218 [8];
  Connection local_210 [8];
  Connection local_208 [8];
  Connection local_200 [8];
  QVariant local_1f8;
  QColor local_1e8 [16];
  QColor local_1d8 [16];
  QPixmap local_1c8 [32];
  QPixmap local_1a8 [32];
  QVariant local_188;
  QString local_178;
  QVariant local_170;
  QIcon local_160 [8];
  QArrayData *local_158;
  QVariant local_150;
  QVariant local_140;
  QArrayData *local_130;
  undefined1 local_128 [24];
  QArrayData *local_110;
  QArrayData *local_108;
  QPixmap local_100 [32];
  undefined **local_e0 [2];
  undefined **local_d0 [2];
  undefined **local_c0 [3];
  long *local_a8;
  int *local_88;
  long *local_80;
  long *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    return;
  }
  FUN_100387190(param_3,0);
  piVar9 = *(int **)(param_3 + 0x48);
  if (piVar9 != (int *)0x0) {
    LOCK();
    *piVar9 = *piVar9 + -1;
    local_31 = *piVar9 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (pvVar2 = *(void **)(param_3 + 0x48), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_3 + 0x50) = 0;
    *(undefined8 *)(param_3 + 0x48) = 0;
  }
  piVar9 = *(int **)(param_3 + 0x58);
  if (piVar9 != (int *)0x0) {
    LOCK();
    *piVar9 = *piVar9 + -1;
    local_31 = *piVar9 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (pvVar2 = *(void **)(param_3 + 0x58), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_3 + 0x60) = 0;
    *(undefined8 *)(param_3 + 0x58) = 0;
  }
  plVar1 = (long *)(param_3 + 0x40);
  FUN_1003895f0(&local_88);
  local_80 = (long *)(local_88 + (long)local_88[2] * 2 + 4);
  local_78 = (long *)(local_88 + (long)local_88[3] * 2 + 4);
  if (local_88[2] != local_88[3]) {
    do {
      local_70 = 1;
      lVar10 = *(long *)*local_80;
      if (((lVar10 != 0) && (*(int *)(lVar10 + 4) != 0)) &&
         (plVar3 = (long *)((long *)*local_80)[1], plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x20))();
      }
      local_80 = local_80 + 1;
    } while (local_80 != local_78);
  }
  local_70 = 1;
  if (*local_88 != -1) {
    if (*local_88 != 0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_31 = *local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100386466;
    }
    FUN_100389550(&local_88,local_88);
  }
LAB_100386466:
  FUN_100388ae0(plVar1);
  FUN_1003834e0(local_e0,0);
  local_e0[0] = &PTR_FUN_1021f1270;
  local_d0[0] = &PTR_FUN_1021f13f8;
  local_c0[0] = &PTR_FUN_1021f1530;
  QGraphicsItem::setAcceptHoverEvents(SUB81(local_d0,0));
  QPixmap::QPixmap(local_100,0x80,0x80);
  QPixmap::operator=((QPixmap *)(local_a8 + 6),local_100);
  (**(code **)(*local_a8 + 0xa8))(local_a8);
  cVar4 = QPixmap::isNull();
  dVar13 = 0.0;
  if (cVar4 == '\0') {
    dVar13 = DAT_100e19928;
  }
  QGraphicsLinearLayout::setSpacing(dVar13);
  (*(code *)local_e0[0][0x15])(local_e0);
  QPixmap::~QPixmap(local_100);
  local_108 = (QArrayData *)QString::fromAscii_helper("dummy",5);
  local_110 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100383870(local_e0,&local_108,&local_110);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003865c1;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1003865c1:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003865f7;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1003865f7:
  local_68 = _DAT_100e199a0;
  uStack_60 = _UNK_100e199a8;
  QGraphicsLayoutItem::effectiveSizeHint(local_c0,1,&local_68);
  iVar5 = (**(code **)(**(long **)(param_3 + 0x10) + 0x78))();
  dVar13 = (double)iVar5 * param_2 * _DAT_100e19970;
  local_270 = 0x80;
  if (DAT_100e19978 < dVar13) {
    dVar13 = (DAT_100e19978 / dVar13) * DAT_100e19980;
    if (0.0 <= dVar13) {
      local_270 = (int)(dVar13 + DAT_100e110f0);
    }
    else {
      local_270 = (int)((dVar13 - (double)(int)(DAT_100e110e0 + dVar13)) + DAT_100e110f0) +
                  (int)(DAT_100e110e0 + dVar13);
    }
  }
  dVar13 = 0.0;
  iVar11 = 0;
  local_248 = (QObject *)0x0;
  if (0 < iVar5) {
    local_248 = (QObject *)0x0;
    dVar14 = 0.0;
    do {
      dVar13 = dVar14;
      (**(code **)(**(long **)(param_3 + 0x10) + 0x60))
                (local_128,*(long **)(param_3 + 0x10),iVar11,0,param_3 + 0x20);
      (**(code **)(**(long **)(param_3 + 0x10) + 0x90))
                (&local_140,*(long **)(param_3 + 0x10),local_128,0);
      QVariant::toString();
      QVariant::~QVariant(&local_140);
      (**(code **)(**(long **)(param_3 + 0x10) + 0x90))
                (&local_150,*(long **)(param_3 + 0x10),local_128,0x101);
      iVar6 = QVariant::toInt((bool *)&local_150);
      QVariant::~QVariant(&local_150);
      FUN_10038a010(&local_158,iVar6);
      (**(code **)(**(long **)(param_3 + 0x10) + 0x90))
                (&local_170,*(long **)(param_3 + 0x10),local_128,1);
      FUN_10014c530(local_160,&local_170);
      QVariant::~QVariant(&local_170);
      (**(code **)(**(long **)(param_3 + 0x10) + 0x90))
                (&local_188,*(long **)(param_3 + 0x10),local_128,0x100);
      QVariant::toString();
      QVariant::~QVariant(&local_188);
      local_58 = 0x8000000080;
      QIcon::pixmap(local_1a8,local_160,&local_58,0,1);
      uVar7 = QPixmap::size();
      if (((int)uVar7 != 0x80) || ((uVar7 & 0xffffffff00000000) != 0x8000000000)) {
        local_50 = local_270;
        local_4c = local_270;
        QPixmap::scaled(local_1c8,local_1a8,&local_50,2,1);
        QPixmap::operator=(local_1a8,local_1c8);
        QPixmap::~QPixmap(local_1c8);
      }
      pQVar8 = operator_new(0x58);
      lVar10 = *(long *)(param_3 + 0x70) + 0x10;
      if (*(long *)(param_3 + 0x70) == 0) {
        lVar10 = 0;
      }
      FUN_1003834e0(pQVar8,lVar10);
      *(undefined ***)pQVar8 = &PTR_FUN_1021f1270;
      *(undefined ***)(pQVar8 + 0x10) = &PTR_FUN_1021f13f8;
      *(undefined ***)(pQVar8 + 0x20) = &PTR_FUN_1021f1530;
      QGraphicsItem::setAcceptHoverEvents((bool)((char)pQVar8 + '\x10'));
      FUN_100383870(pQVar8,&local_130,&local_158);
      QColor::QColor(local_1d8,3);
      if (iVar6 == 2) {
        QColor::setRgb((int)local_1e8,0xfe,0x9f,0x39);
      }
      else {
        QColor::QColor(local_1e8,8);
      }
      FUN_100383a20(pQVar8,local_1d8,local_1e8);
      plVar3 = *(long **)(pQVar8 + 0x38);
      QPixmap::operator=((QPixmap *)(plVar3 + 6),local_1a8);
      (**(code **)(*plVar3 + 0xa8))(plVar3);
      cVar4 = QPixmap::isNull();
      dVar12 = 0.0;
      if (cVar4 == '\0') {
        dVar12 = DAT_100e19928;
      }
      QGraphicsLinearLayout::setSpacing(dVar12);
      (**(code **)(*(long *)pQVar8 + 0xa8))(pQVar8);
      QVariant::QVariant(&local_1f8,&local_178);
      QObject::setProperty((char *)pQVar8,(QVariant *)"vmId");
      QVariant::~QVariant(&local_1f8);
      local_48 = _DAT_100e199a0;
      uStack_40 = _UNK_100e199a8;
      QGraphicsLayoutItem::effectiveSizeHint(pQVar8 + 0x20,1,&local_48);
      dVar13 = dVar13 * _DAT_100e19970;
      QGraphicsLayoutItem::setMaximumWidth(dVar13);
      QGraphicsLayoutItem::setMinimumWidth(dVar13);
      QObject::connect(local_200,pQVar8,"2hovered(CUsbConnectVmButton*)",param_3,
                       "1setCurrentButton(CUsbConnectVmButton*)",0);
      QMetaObject::Connection::~Connection(local_200);
      QObject::connect(local_208,pQVar8,"2pressed(CUsbConnectVmButton*)",param_3,
                       "1onButtonPressed(CUsbConnectVmButton*)");
      QMetaObject::Connection::~Connection(local_208);
      QObject::connect(local_210,pQVar8,"2released(CUsbConnectVmButton*)",param_3,
                       "1onButtonReleased(CUsbConnectVmButton*)");
      QMetaObject::Connection::~Connection(local_210);
      QObject::connect(local_218,pQVar8,"2clicked(CUsbConnectVmButton*)",param_3,
                       "1onButtonClicked(CUsbConnectVmButton*)");
      QMetaObject::Connection::~Connection(local_218);
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8);
      local_228 = piVar9;
      local_220 = pQVar8;
      FUN_100388bc0(plVar1,&local_228);
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_31 = *piVar9 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar9);
        }
      }
      QGraphicsLinearLayout::insertItem
                ((int)*(undefined8 *)(param_3 + 0x78),(QGraphicsLayoutItem *)0xffffffff);
      (**(code **)(**(long **)(param_3 + 0x10) + 0x90))
                (&local_238,*(long **)(param_3 + 0x10),local_128);
      cVar4 = QVariant::toBool();
      QVariant::~QVariant(&local_238);
      if (cVar4 != '\0') {
        local_248 = pQVar8;
      }
      QPixmap::~QPixmap(local_1a8);
      if (*(int *)local_178.field0_0x0 != -1) {
        if (*(int *)local_178.field0_0x0 != 0) {
          LOCK();
          *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
          local_31 = *(int *)local_178.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100386c1d;
        }
        QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
      }
LAB_100386c1d:
      QIcon::~QIcon(local_160);
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100386c80;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_100386c80:
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100386cbe;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_100386cbe:
      if (dVar13 <= dVar14) {
        dVar13 = dVar14;
      }
      iVar11 = iVar11 + 1;
      dVar14 = dVar13;
    } while (iVar11 < iVar5);
  }
  QGraphicsLayoutItem::setMaximumWidth(dVar13);
  QGraphicsWidget::adjustSize();
  if (local_248 == (QObject *)0x0) {
    plVar1 = *(long **)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 8) * 8);
    lVar10 = *plVar1;
    local_248 = (QObject *)0x0;
    if ((lVar10 != 0) && (local_248 = (QObject *)0x0, *(int *)(lVar10 + 4) != 0)) {
      local_248 = (QObject *)plVar1[1];
    }
  }
  FUN_100387190(param_3,local_248);
  QGraphicsWidget::~QGraphicsWidget((QGraphicsWidget *)local_e0);
  return;
}

