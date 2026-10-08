
void FUN_1003850f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (*(int *)(lVar1 + 0x38) != 4) {
    *(undefined4 *)(lVar1 + 0x38) = 4;
    QObject::blockSignals(SUB81(*(undefined8 *)(lVar1 + 0x30),0));
    QAbstractAnimation::stop();
    QObject::blockSignals(SUB81(*(undefined8 *)(lVar1 + 0x30),0));
    QGraphicsItem::update((QRectF *)(lVar1 + 0x10));
  }
  return;
}

