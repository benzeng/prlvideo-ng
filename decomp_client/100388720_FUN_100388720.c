
int FUN_100388720(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  
  iVar2 = QGraphicsWidget::qt_metacall();
  if (-1 < iVar2) {
    if (param_2 == 0xc) {
      if (iVar2 < 2) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar2;
      }
      if (iVar2 < 2) {
        if (iVar2 == 1) {
          FUN_100384f70(param_1);
        }
        else if ((iVar2 == 0) && (lVar1 = *(long *)(param_1 + 0x60), *(int *)(lVar1 + 0x38) != 2)) {
          *(undefined4 *)(lVar1 + 0x38) = 2;
          QAbstractAnimation::start(*(undefined8 *)(lVar1 + 0x30),0);
          QGraphicsItem::update((QRectF *)(lVar1 + 0x10));
        }
      }
    }
    iVar2 = iVar2 + -2;
  }
  return iVar2;
}

