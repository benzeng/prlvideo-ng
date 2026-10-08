
void FUN_1007a4250(long param_1,QPointF *param_2)

{
  char cVar1;
  QArrayData *local_a0;
  QPixmap local_98 [32];
  QArrayData *local_78;
  QPixmap local_70 [32];
  QPixmap local_50 [39];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  QPainter::save();
  QPixmap::QPixmap(local_50);
  if (*(int *)(param_1 + 0x58) == 2) {
    if (*(char *)(param_1 + 0x5c) == '\0') {
      local_a0 = (QArrayData *)
                 QString::fromAscii_helper(":/pixmaps/SnapshotsIcons/Mac/snapshot_right.png",0x2f);
      FUN_1007a5210(local_98,param_1,&local_a0);
      QPixmap::operator=(local_50,local_98);
      QPixmap::~QPixmap(local_98);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_29 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007a437d;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
    }
    else {
      local_78 = (QArrayData *)
                 QString::fromAscii_helper
                           (":/pixmaps/SnapshotsIcons/Mac/snapshot_right_white.png",0x35);
      FUN_1007a5210(local_70,param_1,&local_78);
      QPixmap::operator=(local_50,local_70);
      QPixmap::~QPixmap(local_70);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007a437d;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
  }
LAB_1007a437d:
  cVar1 = QPixmap::isNull();
  if (cVar1 == '\0') {
    local_28 = 0x4068600000000000;
    local_20 = 0;
    QPainter::drawPixmap(param_2,(QPixmap *)&local_28);
  }
  QPainter::restore();
  QPixmap::~QPixmap(local_50);
  return;
}

