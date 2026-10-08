
void FUN_100383c90(QObject *param_1,QGraphicsItem *param_2)

{
  QVariant *pQVar1;
  char cVar2;
  QPropertyAnimation *this;
  long local_68;
  long local_60;
  QVariant local_58;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  QGraphicsWidget::QGraphicsWidget((QGraphicsWidget *)param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_1021f0ca8;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f0e10;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f0f48;
  this = operator_new(0x10);
  QByteArray::QByteArray((QByteArray *)&local_38,"linkingDistortion",-1);
  QPropertyAnimation::QPropertyAnimation(this,param_1,(QByteArray *)&local_38,param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100383d33;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100383d33:
  *(QPropertyAnimation **)(param_1 + 0x30) = this;
  *(undefined4 *)(param_1 + 0x38) = 3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  QVariantAnimation::setDuration((int)this);
  pQVar1 = *(QVariant **)(param_1 + 0x30);
  QVariant::QVariant(&local_48,DAT_100e12878);
  QVariantAnimation::setStartValue(pQVar1);
  QVariant::~QVariant(&local_48);
  pQVar1 = *(QVariant **)(param_1 + 0x30);
  QVariant::QVariant(&local_58,0.0);
  QVariantAnimation::setEndValue(pQVar1);
  QVariant::~QVariant(&local_58);
  QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x30),"2finished()",param_1,
                   "1onConnectAnimationFinished()",0);
  if (local_60 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x30),"2valueChanged(const QVariant&)",
                   param_1,"1onConnectAnimationValueChanged()",0);
  if ((cVar2 != '\0') && (local_68 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  QGraphicsItem::installSceneEventFilter(param_2);
  return;
}

