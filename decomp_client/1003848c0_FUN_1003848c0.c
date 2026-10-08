
void FUN_1003848c0(QObject *param_1)

{
  QRectF *pQVar1;
  char cVar2;
  QPropertyAnimation *this;
  void *pvVar3;
  QGraphicsWidget *pQVar4;
  long local_70;
  long local_68;
  QArrayData *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  
  FUN_1003834e0();
  *(undefined ***)param_1 = &PTR_FUN_1021f0f88;
  pQVar1 = (QRectF *)(param_1 + 0x10);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f10f8;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f1230;
  *(undefined8 *)(param_1 + 0x58) = 0;
  QGraphicsItem::setVisible(SUB81(pQVar1,0));
  this = operator_new(0x10);
  QByteArray::QByteArray((QByteArray *)&local_60,"pos",-1);
  QPropertyAnimation::QPropertyAnimation(this,param_1,(QByteArray *)&local_60,param_1);
  *(QPropertyAnimation **)(param_1 + 0x70) = this;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038497b;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10038497b:
  QVariantAnimation::setDuration((int)*(undefined8 *)(param_1 + 0x70));
  QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x70),"2finished()",param_1,
                   "1onAnimationFinished()",0);
  if (local_68 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x70),"2valueChanged(const QVariant&)",
                   param_1,"1onPositionChanged()",0);
  if ((cVar2 != '\0') && (local_70 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  pvVar3 = operator_new(0x58);
  FUN_100383c90(pvVar3);
  *(void **)(param_1 + 0x60) = pvVar3;
  QGraphicsLayoutItem::setMaximumHeight(DAT_100e19960);
  QGraphicsLayoutItem::setMinimumHeight(DAT_100e19960);
  QGraphicsLayout::setContentsMargins(DAT_100e19920,DAT_100e12b90,DAT_100e19920,DAT_100e12b90);
  QGraphicsLinearLayout::insertItem((int)*(undefined8 *)(param_1 + 0x30),(QGraphicsLayoutItem *)0x0)
  ;
  QGraphicsWidget::setContentsMargins(0.0,DAT_100e19920,0.0,0.0);
  QGraphicsWidget::setContentsMargins(0.0,0.0,0.0,DAT_100e19920);
  pQVar4 = operator_new(0x30);
  QGraphicsWidget::QGraphicsWidget(pQVar4,pQVar1,0);
  *(QGraphicsWidget **)(param_1 + 0x68) = pQVar4;
  QGraphicsLayoutItem::setMinimumHeight(DAT_100e11088);
  QGraphicsLayoutItem::setMaximumHeight(DAT_100e11088);
  QGraphicsLinearLayout::insertItem
            ((int)*(undefined8 *)(param_1 + 0x30),(QGraphicsLayoutItem *)0xffffffff);
  param_1[0x50] = (QObject)0x1;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  QGraphicsItem::update(pQVar1);
  return;
}

