
int FUN_100184b10(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QMatrix local_a8 [48];
  int *local_78;
  QPainterPath local_70 [40];
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  QPainterPath local_28 [15];
  undefined1 local_19;
  
  if (*(int *)(*param_2 + 0xc) == *(int *)(*param_2 + 8)) {
    return 0;
  }
  QPainterPath::QPainterPath(local_28);
  local_48 = (Data *)*param_2;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar4 = (long)*(int *)(local_48 + 8);
      lVar3 = *param_2;
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_48 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_48 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      QGraphicsItem::sceneBoundingRect();
      QPainterPath::addRect((QRectF *)local_28);
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100184c25;
    }
    QListData::dispose(local_48);
  }
LAB_100184c25:
  QPainterPath::simplified();
  QPainterPath::operator=(local_28,local_70);
  QPainterPath::~QPainterPath(local_70);
  QMatrix::QMatrix(local_a8);
  QPainterPath::toFillPolygons((QMatrix *)&local_78);
  iVar1 = local_78[3];
  iVar2 = local_78[2];
  if (*local_78 != -1) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_19 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100184c98;
    }
    FUN_100187150(&local_78,local_78);
  }
LAB_100184c98:
  QPainterPath::~QPainterPath(local_28);
  return iVar1 - iVar2;
}

