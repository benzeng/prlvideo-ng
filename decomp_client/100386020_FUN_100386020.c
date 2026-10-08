
void FUN_100386020(long param_1,char param_2)

{
  long *plVar1;
  bool bVar2;
  QArrayData *local_60;
  QArrayData *local_58;
  QPixmap local_50 [39];
  undefined1 local_29;
  
  plVar1 = *(long **)(param_1 + 0x80);
  bVar2 = param_2 == '\0';
  if (bVar2) {
    local_60 = (QArrayData *)QString::fromAscii_helper(":/images/alt_key.png",0x14);
    QPixmap::QPixmap(local_50,&local_60,0,0);
  }
  else {
    local_58 = (QArrayData *)QString::fromAscii_helper(":/images/alt_key_pressed.png",0x1c);
    QPixmap::QPixmap(local_50,&local_58,0,0);
  }
  QPixmap::operator=((QPixmap *)(plVar1 + 6),local_50);
  (**(code **)(*plVar1 + 0xa8))(plVar1);
  QPixmap::~QPixmap(local_50);
  if ((bVar2) && (*(int *)local_60 != -1)) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003860f2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003860f2:
  if ((!bVar2) && (*(int *)local_58 != -1)) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100386127;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100386127:
  QGraphicsItem::update((QRectF *)(*(long *)(param_1 + 0x80) + 0x10));
  return;
}

