
int FUN_100388550(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QGraphicsWidget::qt_metacall();
  if (-1 < iVar1) {
    switch(param_2) {
    case 0:
      if (iVar1 < 2) {
        if (iVar1 == 1) {
          QGraphicsItem::update((QRectF *)(param_1 + 0x10));
        }
        else if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x38) = 3;
          return -2;
        }
      }
      iVar1 = iVar1 + -2;
      break;
    case 1:
    case 2:
    case 3:
    case 0xb:
      if (param_2 == 2) {
        if (iVar1 == 0) {
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)*param_4;
        }
      }
      else if ((param_2 == 1) && (iVar1 == 0)) {
        *(undefined8 *)*param_4 = *(undefined8 *)(param_1 + 0x50);
      }
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      iVar1 = iVar1 + -1;
      break;
    case 0xc:
      if (iVar1 < 2) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}

