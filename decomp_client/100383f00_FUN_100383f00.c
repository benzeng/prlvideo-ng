
void FUN_100383f00(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x38) != param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    if (param_2 == 2) {
      QAbstractAnimation::start(*(undefined8 *)(param_1 + 0x30),0);
    }
    else {
      QObject::blockSignals(SUB81(*(undefined8 *)(param_1 + 0x30),0));
      QAbstractAnimation::stop();
      QObject::blockSignals(SUB81(*(undefined8 *)(param_1 + 0x30),0));
    }
    QGraphicsItem::update((QRectF *)(param_1 + 0x10));
  }
  return;
}

