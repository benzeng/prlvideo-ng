
void FUN_1007e5810(QSize *param_1,QObject *param_2,undefined8 param_3)

{
  QPixmap *pQVar1;
  QPen *pQVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  QSize QVar7;
  QGraphicsView *this;
  QObject *pQVar8;
  QVBoxLayout *this_00;
  QGraphicsScene *this_01;
  CGraphicsFrame *pCVar9;
  QGraphicsLinearLayout *pQVar10;
  int *piVar11;
  int *piVar12;
  QArrayData *pQVar13;
  CGraphicsTextLabel *pCVar14;
  size_t sVar15;
  undefined8 uVar16;
  QGraphicsLinearLayout *pQVar17;
  void *pvVar18;
  int iVar19;
  Data *pDVar20;
  QGraphicsItem *pQVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  long local_1b0;
  long local_1a8;
  long local_1a0 [13];
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double local_120;
  undefined8 local_110;
  QPen local_108 [8];
  QFont local_100 [16];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  QArrayData *local_d0;
  QPixmap local_c8 [32];
  QPen local_a8 [8];
  QFont local_a0 [16];
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  Data *local_78;
  undefined8 local_70;
  undefined8 local_68;
  QArrayData *local_60;
  QPixmap local_58 [39];
  undefined1 local_31;
  
  QDialog::QDialog((QDialog *)param_1,param_3,0);
  *param_1 = (QSize)&PTR_FUN_10222f440;
  param_1[2] = (QSize)&PTR_FUN_10222f618;
  QVar7 = (QSize)operator_new(0x88);
  FUN_1007e4d70(QVar7,param_1);
  param_1[6] = QVar7;
  QWidget::setWindowFlags(param_1,0x2040800);
  QWidget::setAttribute(param_1,0x78,1);
  this = operator_new(0x30);
  QGraphicsView::QGraphicsView(this,(QWidget *)param_1);
  *(QGraphicsView **)((long)param_1[6] + 0x18) = this;
  bVar4 = (bool)QAbstractScrollArea::viewport();
  QWidget::setAutoFillBackground(bVar4);
  QFrame::setFrameShape(*(undefined8 *)((long)param_1[6] + 0x18),0);
  QAbstractScrollArea::setHorizontalScrollBarPolicy(*(undefined8 *)((long)param_1[6] + 0x18),1);
  QAbstractScrollArea::setVerticalScrollBarPolicy(*(undefined8 *)((long)param_1[6] + 0x18),1);
  QGraphicsView::setRenderHint(*(undefined8 *)((long)param_1[6] + 0x18),1,1);
  QGraphicsView::setViewportUpdateMode(*(undefined8 *)((long)param_1[6] + 0x18),0);
  pQVar8 = (QObject *)QAbstractScrollArea::viewport();
  QObject::installEventFilter(pQVar8);
  this_00 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_00,(QWidget *)param_1);
  QLayout::setMargin((int)this_00);
  QBoxLayout::addWidget(this_00,*(undefined8 *)((long)param_1[6] + 0x18),0,0);
  this_01 = operator_new(0x10);
  QGraphicsScene::QGraphicsScene(this_01,(QObject *)param_1);
  QVar7 = param_1[6];
  *(QGraphicsScene **)((long)QVar7 + 0x20) = this_01;
  QGraphicsView::setScene(*(QGraphicsScene **)((long)QVar7 + 0x18));
  pCVar9 = operator_new(0x60);
  CGraphicsFrame::CGraphicsFrame(pCVar9,(QGraphicsItem *)0x0);
  *(CGraphicsFrame **)((long)param_1[6] + 0x28) = pCVar9;
  QGraphicsLayoutItem::setSizePolicy(pCVar9 + 0x20,7,7,1);
  pQVar1 = *(QPixmap **)((long)param_1[6] + 0x28);
  local_60 = (QArrayData *)QString::fromAscii_helper(":/images/CrystalBalloon.png",0x1b);
  QPixmap::QPixmap(local_58,&local_60,0,0);
  CGraphicsFrame::setBorderPixmap(pQVar1);
  QPixmap::~QPixmap(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e5a3e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007e5a3e:
  local_70 = 0x300000000f;
  local_68 = 0xf00000079;
  CGraphicsFrame::setBorderMargins(*(QMargins **)((long)param_1[6] + 0x28));
  QGraphicsLayoutItem::setMinimumWidth(DAT_100e2a850);
  QGraphicsScene::addItem(*(QGraphicsItem **)((long)param_1[6] + 0x20));
  pQVar10 = operator_new(0x10);
  lVar22 = *(long *)((long)param_1[6] + 0x28) + 0x20;
  if (*(long *)((long)param_1[6] + 0x28) == 0) {
    lVar22 = 0;
  }
  QGraphicsLinearLayout::QGraphicsLinearLayout(pQVar10,2,lVar22);
  QGraphicsLinearLayout::setSpacing(0.0);
  QGraphicsLayout::setContentsMargins(DAT_100e2a860,DAT_100e2a858,DAT_100e2a860,DAT_100e19968);
  QVar7 = param_1[6];
  piVar11 = (int *)0x0;
  if (param_2 != (QObject *)0x0) {
    piVar11 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  piVar12 = *(int **)((long)QVar7 + 0x78);
  if (piVar12 != piVar11) {
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      piVar12 = *(int **)((long)QVar7 + 0x78);
    }
    if (piVar12 != (int *)0x0) {
      LOCK();
      *piVar12 = *piVar12 + -1;
      local_31 = *piVar12 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)((long)QVar7 + 0x78) != (void *)0x0)) {
        operator_delete(*(void **)((long)QVar7 + 0x78));
      }
    }
    *(int **)((long)QVar7 + 0x78) = piVar11;
    *(QObject **)((long)QVar7 + 0x80) = param_2;
  }
  if (piVar11 != (int *)0x0) {
    LOCK();
    *piVar11 = *piVar11 + -1;
    local_31 = *piVar11 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar11);
    }
  }
  QMetaObject::tr((char *)&local_80,(char *)&PTR_staticMetaObject_10222f400,0x1e19795);
  local_88 = (QArrayData *)QString::fromAscii_helper("@@ICON",6);
  QString::split(&local_78,&local_80,&local_88,0,1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e5bf6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007e5bf6:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e5c26;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1007e5c26:
  if (*(int *)(local_78 + 0xc) - *(int *)(local_78 + 8) < 2) {
    pQVar13 = (QArrayData *)QString::fromAscii_helper(" ",1);
    local_90 = pQVar13;
    FUN_1005d5580(&local_78,&local_90);
    if (*(int *)pQVar13 != -1) {
      if (*(int *)pQVar13 != 0) {
        LOCK();
        *(int *)pQVar13 = *(int *)pQVar13 + -1;
        local_31 = *(int *)pQVar13 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e5c8b;
      }
      QArrayData::deallocate(pQVar13,2,8);
    }
  }
LAB_1007e5c8b:
  pCVar14 = operator_new(0x48);
  pQVar21 = (QGraphicsItem *)(*(long *)((long)param_1[6] + 0x28) + 0x10);
  if (*(long *)((long)param_1[6] + 0x28) == 0) {
    pQVar21 = (QGraphicsItem *)0x0;
  }
  CGraphicsTextLabel::CGraphicsTextLabel(pCVar14,pQVar21);
  *(CGraphicsTextLabel **)((long)param_1[6] + 0x30) = pCVar14;
  CGraphicsTextLabel::setText((QString *)pCVar14);
  lVar22 = *(long *)((long)param_1[6] + 0x30);
  FUN_1007e6850(lVar22);
  QGraphicsItem::setGraphicsEffect((QGraphicsEffect *)(lVar22 + 0x10));
  QGraphicsWidget::font();
  QFont::setPointSize((int)local_a0);
  QFont::setWeight((int)local_a0);
  QGraphicsWidget::setFont(*(QFont **)((long)param_1[6] + 0x30));
  QGraphicsLayoutItem::setSizePolicy(*(long *)((long)param_1[6] + 0x30) + 0x20,5,1,1);
  pQVar2 = *(QPen **)((long)param_1[6] + 0x30);
  QPen::QPen(local_a8,(QColor *)&DAT_1023123f0);
  CGraphicsTextLabel::setPen(pQVar2);
  QPen::~QPen(local_a8);
  puVar3 = PTR_s___pixmaps_AppIcon_PD_AppIcon_tra_102270b50;
  iVar6 = -1;
  if (PTR_s___pixmaps_AppIcon_PD_AppIcon_tra_102270b50 != (undefined *)0x0) {
    sVar15 = _strlen(PTR_s___pixmaps_AppIcon_PD_AppIcon_tra_102270b50);
    iVar6 = (int)sVar15;
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  QPixmap::QPixmap(local_c8,&local_d0,0,0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e5e0a;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1007e5e0a:
  pCVar9 = operator_new(0x60);
  pQVar21 = (QGraphicsItem *)(*(long *)((long)param_1[6] + 0x28) + 0x10);
  if (*(long *)((long)param_1[6] + 0x28) == 0) {
    pQVar21 = (QGraphicsItem *)0x0;
  }
  CGraphicsFrame::CGraphicsFrame(pCVar9,pQVar21);
  *(CGraphicsFrame **)((long)param_1[6] + 0x40) = pCVar9;
  QGraphicsLayoutItem::setSizePolicy(pCVar9 + 0x20,0,0,1);
  lVar22 = *(long *)((long)param_1[6] + 0x40);
  uVar16 = QPixmap::size();
  local_e0 = (double)(int)uVar16;
  local_d8 = (double)(int)((ulong)uVar16 >> 0x20);
  QGraphicsLayoutItem::setMinimumSize((QSizeF *)(lVar22 + 0x20));
  lVar22 = *(long *)((long)param_1[6] + 0x40);
  uVar16 = QPixmap::size();
  local_f0 = (double)(int)uVar16;
  local_e8 = (double)(int)((ulong)uVar16 >> 0x20);
  QGraphicsLayoutItem::setMaximumSize((QSizeF *)(lVar22 + 0x20));
  CGraphicsFrame::setBorderPixmap(*(QPixmap **)((long)param_1[6] + 0x40));
  pQVar17 = operator_new(0x10);
  QGraphicsLinearLayout::QGraphicsLinearLayout(pQVar17,2,0);
  QGraphicsLinearLayout::setSpacing(0.0);
  QGraphicsLayout::setContentsMargins(0.0,0.0,0.0,0.0);
  iVar6 = (int)pQVar17;
  QGraphicsLinearLayout::insertStretch(iVar6,-1);
  QGraphicsLinearLayout::insertItem(iVar6,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertStretch(iVar6,-1);
  pCVar14 = operator_new(0x48);
  pQVar21 = (QGraphicsItem *)(*(long *)((long)param_1[6] + 0x28) + 0x10);
  if (*(long *)((long)param_1[6] + 0x28) == 0) {
    pQVar21 = (QGraphicsItem *)0x0;
  }
  CGraphicsTextLabel::CGraphicsTextLabel(pCVar14,pQVar21);
  *(CGraphicsTextLabel **)((long)param_1[6] + 0x38) = pCVar14;
  CGraphicsTextLabel::setText((QString *)pCVar14);
  lVar22 = *(long *)((long)param_1[6] + 0x38);
  FUN_1007e6850(lVar22);
  QGraphicsItem::setGraphicsEffect((QGraphicsEffect *)(lVar22 + 0x10));
  QGraphicsWidget::font();
  QFont::setPointSize((int)local_100);
  QFont::setWeight((int)local_100);
  QGraphicsWidget::setFont(*(QFont **)((long)param_1[6] + 0x38));
  QGraphicsLayoutItem::setSizePolicy(*(long *)((long)param_1[6] + 0x38) + 0x20,5,1,1);
  pQVar2 = *(QPen **)((long)param_1[6] + 0x38);
  QPen::QPen(local_108,(QColor *)&DAT_1023123f0);
  CGraphicsTextLabel::setPen(pQVar2);
  QPen::~QPen(local_108);
  pQVar17 = operator_new(0x10);
  QGraphicsLinearLayout::QGraphicsLinearLayout(pQVar17,1,0);
  QGraphicsLinearLayout::setSpacing(0.0);
  dVar24 = 0.0;
  QGraphicsLayout::setContentsMargins(DAT_100e16ff0,0.0,DAT_100e16ff0,0.0);
  iVar6 = (int)pQVar17;
  QGraphicsLinearLayout::insertStretch(iVar6,-1);
  QGraphicsLinearLayout::insertItem(iVar6,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertItem(iVar6,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertItem(iVar6,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertStretch(iVar6,-1);
  QGraphicsLinearLayout::insertItem((int)pQVar10,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsWidget::adjustSize();
  dVar23 = (double)QGraphicsWidget::size();
  if (0.0 <= dVar23) {
    iVar6 = (int)(DAT_100e110f0 + dVar23);
  }
  else {
    iVar6 = (int)((dVar23 - (double)(int)(DAT_100e110e0 + dVar23)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar23);
  }
  if (0.0 <= dVar24) {
    iVar19 = (int)(dVar24 + DAT_100e110f0);
  }
  else {
    iVar19 = (int)((dVar24 - (double)(int)(DAT_100e110e0 + dVar24)) + DAT_100e110f0) +
             (int)(DAT_100e110e0 + dVar24);
  }
  local_110 = CONCAT44(iVar19,iVar6);
  local_128 = (double)iVar6;
  local_138 = 0;
  uStack_130 = 0;
  local_120 = (double)iVar19;
  QGraphicsScene::setSceneRect(*(QRectF **)((long)param_1[6] + 0x20));
  QWidget::setFixedSize(*(QSize **)((long)param_1[6] + 0x18));
  QWidget::setFixedSize(param_1);
  QGraphicsLayoutItem::contentsRect();
  QGraphicsLayoutItem::contentsRect();
  QGraphicsLayoutItem::contentsRect();
  QTimeLine::setDuration(param_1[6].field0_0x0 + 0x48);
  QTimeLine::setUpdateInterval(param_1[6].field0_0x0 + 0x48);
  QTimeLine::setFrameRange(param_1[6].field0_0x0 + 0x48,0);
  QTimeLine::setLoopCount(param_1[6].field0_0x0 + 0x48);
  QTimeLine::setDirection((long)param_1[6] + 0x48,0);
  QTimeLine::setCurveShape((long)param_1[6] + 0x48,3);
  QObject::connect(local_1a0,(long)param_1[6] + 0x48,"2frameChanged(int)",param_1[6],
                   "1onAnimationFrameChanged(int)",0);
  if (local_1a0[0] == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_1a0);
  QObject::connect(&local_1a8,(long)param_1[6] + 0x48,"2finished()",param_1[6],
                   "1onAnimationFinished()",0);
  if (cVar5 == '\0') {
    cVar5 = '\0';
  }
  else if (local_1a8 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_1a8);
  if (DAT_1023109b8 == (void *)0x0) {
    pvVar18 = operator_new(0x18);
    FUN_100759600(pvVar18);
    DAT_102271308 = 1;
    DAT_1023109b8 = pvVar18;
  }
  QObject::connect(&local_1b0,DAT_1023109b8,"2iconGeometryChanged()",param_1[6],"1updatePosition()",
                   0);
  if ((cVar5 != '\0') && (local_1b0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_1b0);
  QFont::~QFont(local_100);
  QPixmap::~QPixmap(local_c8);
  QFont::~QFont(local_a0);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar6 = *(int *)(local_78 + 0xc);
    if (iVar6 != *(int *)(local_78 + 8)) {
      lVar22 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar6 * -8;
      pDVar20 = local_78 + (long)iVar6 * 8 + 8;
      do {
        pQVar13 = *(QArrayData **)pDVar20;
        if (*(int *)pQVar13 == 0) {
LAB_1007e6520:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_31 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar13 = *(QArrayData **)pDVar20;
            goto LAB_1007e6520;
          }
        }
        pDVar20 = pDVar20 + -8;
        lVar22 = lVar22 + 8;
      } while (lVar22 != 0);
    }
    QListData::dispose(local_78);
  }
  return;
}

