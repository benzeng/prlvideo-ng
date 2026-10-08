
void FUN_100388660(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_100384f70();
      return;
    }
    if ((param_3 == 0) && (lVar1 = *(long *)(param_1 + 0x60), *(int *)(lVar1 + 0x38) != 2)) {
      *(undefined4 *)(lVar1 + 0x38) = 2;
      QAbstractAnimation::start(*(undefined8 *)(lVar1 + 0x30),0);
      QGraphicsItem::update((QRectF *)(lVar1 + 0x10));
    }
  }
  return;
}

