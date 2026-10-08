
void FUN_100384f70(long *param_1)

{
  long lVar1;
  double dVar2;
  double local_88;
  double local_78;
  QArrayData *local_68;
  undefined1 local_60 [16];
  double local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  (**(code **)(*param_1 + 0x88))(local_60,param_1);
  QGraphicsItem::mapToScene((QRectF *)&local_68);
  QPolygonF::boundingRect();
  dVar2 = local_78 * DAT_100e110f0;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      local_40 = CONCAT71(local_40._1_7_,*(int *)local_68 != 0);
      if (*(int *)local_68 != 0) goto LAB_10038500e;
    }
    QArrayData::deallocate(local_68,0x10,8);
  }
LAB_10038500e:
  lVar1 = param_1[0xc];
  if (*(int *)(lVar1 + 0x38) == 0) {
    dVar2 = (dVar2 + local_88) - *(double *)(lVar1 + 0x40);
    if (dVar2 < 0.0) {
      dVar2 = (double)((ulong)dVar2 ^ DAT_100e14fe0);
    }
    if (dVar2 <= local_50) {
      return;
    }
  }
  else if (*(int *)(lVar1 + 0x38) != 2) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x38) = 1;
  QObject::blockSignals(SUB81(*(undefined8 *)(lVar1 + 0x30),0));
  QAbstractAnimation::stop();
  QObject::blockSignals(SUB81(*(undefined8 *)(lVar1 + 0x30),0));
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  QGraphicsItem::update((QRectF *)(lVar1 + 0x10));
  return;
}

