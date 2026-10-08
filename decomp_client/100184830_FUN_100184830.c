
bool FUN_100184830(undefined8 param_1,QPointF *param_2)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  QGraphicsItem::sceneBoundingRect();
  QGraphicsItem::sceneBoundingRect();
  dVar3 = local_48 + local_58;
  dVar4 = local_30;
  if ((DAT_100e139b8 + dVar3 < local_38) || (local_38 < DAT_100e150f0 + dVar3)) {
    dVar4 = 0.0;
    if (local_38 + local_28 < DAT_100e150f0 + local_58) {
      dVar1 = 0.0;
    }
    else if (DAT_100e139b8 + local_58 < local_38 + local_28) {
      dVar1 = 0.0;
    }
    else {
      if ((local_30 < local_50) || (local_40 + local_50 < local_30)) {
        if (local_20 + local_30 < local_50) {
          dVar4 = 0.0;
          dVar1 = 0.0;
          goto LAB_1001849a2;
        }
        if (local_40 + local_50 < local_30) {
          dVar4 = 0.0;
          dVar1 = 0.0;
          goto LAB_1001849a2;
        }
      }
      dVar4 = local_30;
      dVar1 = local_58 - local_28;
    }
  }
  else {
    dVar1 = dVar3;
    if ((local_30 < local_50) || (local_40 + local_50 < local_30)) {
      if (local_50 <= local_20 + local_30) {
        if (local_40 + local_50 < local_30) {
          dVar4 = 0.0;
          dVar1 = 0.0;
        }
      }
      else {
        dVar4 = 0.0;
        dVar1 = 0.0;
      }
    }
  }
LAB_1001849a2:
  if ((DAT_100e139b8 + local_50 + local_40 < local_30) ||
     (local_30 < local_50 + local_40 + DAT_100e150f0)) {
    if (((local_30 + local_20 <= DAT_100e139b8 + local_50) &&
        (DAT_100e150f0 + local_50 <= local_30 + local_20)) &&
       (((local_58 <= local_38 && (local_38 <= dVar3)) ||
        ((local_58 <= local_28 + local_38 && (local_28 + local_38 <= dVar3)))))) {
      dVar4 = local_50 - local_20;
      dVar1 = local_38;
    }
  }
  else if (((local_58 <= local_38) && (local_38 <= dVar3)) ||
          ((local_58 <= local_28 + local_38 && (local_28 + local_38 <= dVar3)))) {
    dVar4 = local_40 + local_50;
    dVar1 = local_38;
  }
  bVar2 = (((ulong)dVar4 | (ulong)dVar1) & 0x7fffffffffffffff) != 0;
  if (bVar2) {
    QGraphicsItem::setPos(param_2);
  }
  return bVar2;
}

