
QRectF * FUN_100184050(QRectF *param_1,undefined8 param_2,QRectF *param_3,undefined8 param_4,
                      undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  QGraphicsItem::sceneBoundingRect();
  QGraphicsItem::sceneBoundingRect();
  QRectF::operator&((QRectF *)&local_90,(QRectF *)&local_70);
  if (param_6 == 2) {
    if (local_48 + local_38 <= local_68) {
      bVar2 = false;
    }
    else {
      bVar2 = ((local_50 + local_40) - (local_70 + local_60)) * (local_50 - local_70) <= 0.0;
    }
    bVar3 = 0.0 < local_78;
  }
  else {
    if (param_6 != 1) goto LAB_1001841f6;
    if (local_50 + local_40 <= local_70) {
      bVar2 = false;
    }
    else {
      bVar2 = ((local_38 + local_48) - (local_68 + local_58)) * (local_48 - local_68) <= 0.0;
    }
    if (local_80 <= 0.0) goto LAB_1001841f6;
    bVar3 = true;
    if (local_78 < local_80) {
      bVar3 = bVar2;
    }
  }
  if ((bVar2) && (bVar3)) {
    if (local_80 + local_90 < local_50 + local_40) {
      local_80 = (local_50 + local_40) - local_90;
    }
    if (local_78 + local_88 < local_48 + local_38) {
      local_78 = (local_48 + local_38) - local_88;
    }
  }
  if (bVar3) {
    QRectF::operator|(param_1,param_3);
    return param_1;
  }
LAB_1001841f6:
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)param_1 = uVar1;
  return param_1;
}

