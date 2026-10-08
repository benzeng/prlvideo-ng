
void FUN_100384f20(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (*(int *)(lVar1 + 0x38) != 2) {
    *(undefined4 *)(lVar1 + 0x38) = 2;
    QAbstractAnimation::start(*(undefined8 *)(lVar1 + 0x30),0);
    QGraphicsItem::update((QRectF *)(lVar1 + 0x10));
  }
  return;
}

