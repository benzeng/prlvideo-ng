
void FUN_100388480(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 2) {
    if (param_3 == 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)*param_4;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) {
      *(undefined8 *)*param_4 = *(undefined8 *)(param_1 + 0x50);
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      QGraphicsItem::update((QRectF *)(param_1 + 0x10));
    }
    else if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 3;
    }
  }
  return;
}

