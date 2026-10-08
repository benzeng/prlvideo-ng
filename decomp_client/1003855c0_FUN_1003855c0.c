
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003855c0(QGraphicsScene *param_1,QObject *param_2)

{
  QPixmap *pQVar1;
  uint uVar2;
  void *pvVar3;
  CGraphicsTextLabel *pCVar4;
  QGraphicsWidget *pQVar5;
  QGraphicsLinearLayout *pQVar6;
  long lVar7;
  QGraphicsItem *pQVar8;
  int iVar9;
  QArrayData *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  QArrayData *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  QString local_d0;
  QFont local_c8 [16];
  QArrayData *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  QString local_90;
  QFont local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  QArrayData *local_60;
  QPixmap local_58 [39];
  undefined1 local_31;
  
  QGraphicsScene::QGraphicsScene(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10220f410;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e15e8;
  param_1[0x68] = (QGraphicsScene)0x0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  pvVar3 = operator_new(0x70);
  FUN_100383050(pvVar3);
  *(void **)(param_1 + 0x38) = pvVar3;
  QGraphicsScene::addItem((QGraphicsItem *)param_1);
  pQVar1 = *(QPixmap **)(param_1 + 0x38);
  local_60 = (QArrayData *)QString::fromAscii_helper(":/images/window_frame.png",0x19);
  QPixmap::QPixmap(local_58,&local_60,0,0);
  CGraphicsFrame::setBorderPixmap(pQVar1);
  QPixmap::~QPixmap(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003856da;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003856da:
  local_78 = _DAT_100e19990;
  uStack_70 = _UNK_100e19998;
  CGraphicsFrame::setBorderMargins(*(QMargins **)(param_1 + 0x38));
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Light",5);
  QFont::QFont(local_88,&local_90,0x18,-1,false);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10038575f;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_10038575f:
  pCVar4 = operator_new(0x48);
  pQVar8 = (QGraphicsItem *)(*(long *)(param_1 + 0x38) + 0x10);
  if (*(long *)(param_1 + 0x38) == 0) {
    pQVar8 = (QGraphicsItem *)0x0;
  }
  CGraphicsTextLabel::CGraphicsTextLabel(pCVar4,pQVar8);
  QColor::setRgb((int)local_a0,0,0,0);
  local_b0 = 0;
  local_a8 = 0x3ff0000000000000;
  FUN_100382ba0(DAT_100e18ae8,pCVar4,local_a0,&local_b0);
  QGraphicsWidget::setContentsMargins(DAT_100e19928,DAT_100e19928,DAT_100e19928,DAT_100e19928);
  QGraphicsWidget::setFont((QFont *)pCVar4);
  QMetaObject::tr((char *)&local_b8,(char *)&PTR_staticMetaObject_10220f3d0,0x1defe40);
  CGraphicsTextLabel::setText((QString *)pCVar4);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100385864;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100385864:
  pQVar5 = operator_new(0x30);
  lVar7 = *(long *)(param_1 + 0x38) + 0x10;
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar7 = 0;
  }
  QGraphicsWidget::QGraphicsWidget(pQVar5,lVar7,0);
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Regular",7);
  QFont::QFont(local_c8,&local_d0,0xe,-1,false);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003858f8;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1003858f8:
  pCVar4 = operator_new(0x48);
  pQVar8 = (QGraphicsItem *)(pQVar5 + 0x10);
  CGraphicsTextLabel::CGraphicsTextLabel(pCVar4,pQVar8);
  QColor::setRgb((int)local_e0,0,0,0);
  local_f0 = 0;
  local_e8 = 0x3ff0000000000000;
  FUN_100382ba0(DAT_100e18ae8,pCVar4,local_e0,&local_f0);
  QGraphicsWidget::setFont((QFont *)pCVar4);
  QMetaObject::tr((char *)&local_f8,(char *)&PTR_staticMetaObject_10220f3d0,0x1deff2e);
  CGraphicsTextLabel::setText((QString *)pCVar4);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003859f1;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1003859f1:
  pvVar3 = operator_new(0x58);
  FUN_100382c30(pvVar3,pQVar8);
  *(void **)(param_1 + 0x80) = pvVar3;
  uVar2 = QGuiApplication::keyboardModifiers();
  FUN_100386020(param_1,(uVar2 & 0x8000000) >> 0x1b);
  pCVar4 = operator_new(0x48);
  CGraphicsTextLabel::CGraphicsTextLabel(pCVar4,pQVar8);
  QColor::setRgb((int)local_108,0,0,0);
  local_118 = 0;
  local_110 = 0x3ff0000000000000;
  FUN_100382ba0(DAT_100e18ae8,pCVar4,local_108,&local_118);
  QGraphicsWidget::setFont((QFont *)pCVar4);
  QMetaObject::tr((char *)&local_120,(char *)&PTR_staticMetaObject_10220f3d0,0x1deff33);
  CGraphicsTextLabel::setText((QString *)pCVar4);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100385b07;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100385b07:
  pQVar6 = operator_new(0x10);
  QGraphicsLinearLayout::QGraphicsLinearLayout(pQVar6,1,pQVar5 + 0x20);
  QGraphicsLinearLayout::setSpacing(DAT_100e19928);
  iVar9 = (int)pQVar6;
  QGraphicsLinearLayout::insertStretch(iVar9,-1);
  QGraphicsLinearLayout::insertItem(iVar9,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertItem(iVar9,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertItem(iVar9,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertStretch(iVar9,-1);
  pQVar5 = operator_new(0x30);
  lVar7 = *(long *)(param_1 + 0x38) + 0x10;
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar7 = 0;
  }
  QGraphicsWidget::QGraphicsWidget(pQVar5,lVar7,0);
  *(QGraphicsWidget **)(param_1 + 0x70) = pQVar5;
  pQVar6 = operator_new(0x10);
  QGraphicsLinearLayout::QGraphicsLinearLayout(pQVar6,1,pQVar5 + 0x20);
  *(QGraphicsLinearLayout **)(param_1 + 0x78) = pQVar6;
  pvVar3 = operator_new(0x78);
  lVar7 = *(long *)(param_1 + 0x38) + 0x10;
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar7 = 0;
  }
  FUN_1003848c0(pvVar3,lVar7);
  *(void **)(param_1 + 0x90) = pvVar3;
  pQVar5 = operator_new(0x30);
  lVar7 = *(long *)(param_1 + 0x38) + 0x10;
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar7 = 0;
  }
  QGraphicsWidget::QGraphicsWidget(pQVar5,lVar7,0);
  *(QGraphicsWidget **)(param_1 + 0x98) = pQVar5;
  pQVar6 = operator_new(0x10);
  lVar7 = *(long *)(param_1 + 0x38) + 0x20;
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar7 = 0;
  }
  QGraphicsLinearLayout::QGraphicsLinearLayout(pQVar6,2,lVar7);
  QGraphicsLayout::setContentsMargins(DAT_100e19968,DAT_100e19968,DAT_100e19968,DAT_100e19968);
  QGraphicsLinearLayout::setSpacing(DAT_100e19928);
  iVar9 = (int)pQVar6;
  QGraphicsLinearLayout::insertItem(iVar9,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertItem(iVar9,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertItem(iVar9,(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertItem(iVar9,(QGraphicsLayoutItem *)0xffffffff);
  QFont::~QFont(local_c8);
  QFont::~QFont(local_88);
  return;
}

