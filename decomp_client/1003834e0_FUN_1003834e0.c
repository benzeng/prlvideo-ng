
void FUN_1003834e0(QGraphicsWidget *param_1,undefined8 param_2)

{
  QGraphicsItem *pQVar1;
  undefined8 uVar2;
  void *pvVar3;
  CGraphicsTextLabel *pCVar4;
  QGraphicsLinearLayout *pQVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  QString local_40;
  QFont local_38 [23];
  undefined1 local_21;
  
  QGraphicsWidget::QGraphicsWidget(param_1,param_2,0);
  *(undefined **)param_1 = &DAT_1021f09c0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f0b30;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f0c68;
  pvVar3 = operator_new(0x58);
  pQVar1 = (QGraphicsItem *)(param_1 + 0x10);
  FUN_100382c30(pvVar3,pQVar1);
  *(void **)(param_1 + 0x38) = pvVar3;
  pCVar4 = operator_new(0x48);
  CGraphicsTextLabel::CGraphicsTextLabel(pCVar4,pQVar1);
  *(CGraphicsTextLabel **)(param_1 + 0x40) = pCVar4;
  pCVar4 = operator_new(0x48);
  CGraphicsTextLabel::CGraphicsTextLabel(pCVar4,pQVar1);
  *(CGraphicsTextLabel **)(param_1 + 0x48) = pCVar4;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Regular",7);
  QFont::QFont(local_38,&local_40,0xe,-1,false);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003835ce;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1003835ce:
  QGraphicsWidget::setFont(*(QFont **)(param_1 + 0x40));
  QGraphicsWidget::setFont(*(QFont **)(param_1 + 0x48));
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  QColor::setRgb((int)local_50,0,0,0);
  local_60 = 0;
  local_58 = 0x3ff0000000000000;
  FUN_100382ba0(DAT_100e18ae8,uVar2,local_50,&local_60);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  QColor::setRgb((int)local_70,0,0,0);
  local_80 = 0;
  local_78 = 0x3ff0000000000000;
  FUN_100382ba0(DAT_100e18ae8,uVar2,local_70,&local_80);
  CGraphicsTextLabel::setElideMode(*(undefined8 *)(param_1 + 0x40),2);
  CGraphicsTextLabel::setElideMode(*(undefined8 *)(param_1 + 0x48),2);
  pQVar5 = operator_new(0x10);
  QGraphicsLinearLayout::QGraphicsLinearLayout(pQVar5,2,param_1 + 0x20);
  *(QGraphicsLinearLayout **)(param_1 + 0x30) = pQVar5;
  QGraphicsLayout::setContentsMargins(DAT_100e19920,DAT_100e19928,DAT_100e19920,DAT_100e19928);
  QGraphicsLinearLayout::insertItem
            ((int)*(undefined8 *)(param_1 + 0x30),(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertItem
            ((int)*(undefined8 *)(param_1 + 0x30),(QGraphicsLayoutItem *)0xffffffff);
  QGraphicsLinearLayout::insertItem
            ((int)*(undefined8 *)(param_1 + 0x30),(QGraphicsLayoutItem *)0xffffffff);
  param_1[0x50] = (QGraphicsWidget)0x0;
  QGraphicsLayoutItem::setSizePolicy(param_1 + 0x20,0,0,1);
  QFont::~QFont(local_38);
  return;
}

