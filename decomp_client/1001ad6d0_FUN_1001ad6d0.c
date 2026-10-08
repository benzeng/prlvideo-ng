
void FUN_1001ad6d0(QObject *param_1)

{
  int iVar1;
  QObject *pQVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  QIcon local_a8 [8];
  QArrayData *local_a0;
  undefined8 local_98;
  QPixmap local_90 [32];
  QPixmap local_70 [32];
  undefined8 local_50;
  QImage local_48 [39];
  undefined1 local_21;
  
  QObject::sender();
  pQVar2 = (QObject *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220d6e0);
  lVar3 = FUN_100354200(pQVar2);
  if (lVar3 == 0) {
    return;
  }
  uVar4 = FUN_100354200(pQVar2);
  lVar3 = FUN_100323dd0(uVar4);
  if (lVar3 == 0) {
    return;
  }
  FUN_100354220(local_48,pQVar2);
  local_50 = 0x8000000080;
  FUN_1001aa740(local_70,local_48,&local_50,1);
  dVar7 = (double)(int)local_50 + (double)(int)local_50;
  if (0.0 <= dVar7) {
    iVar1 = (int)(dVar7 + DAT_100e110f0);
  }
  else {
    iVar1 = (int)((dVar7 - (double)(int)(DAT_100e110e0 + dVar7)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar7);
  }
  dVar7 = (double)local_50._4_4_ + (double)local_50._4_4_;
  if (0.0 <= dVar7) {
    iVar6 = (int)(dVar7 + DAT_100e110f0);
  }
  else {
    iVar6 = (int)((dVar7 - (double)(int)(DAT_100e110e0 + dVar7)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar7);
  }
  local_98 = CONCAT44(iVar6,iVar1);
  FUN_1001aa740(local_90,local_48,&local_98,2);
  QPixmap::setHiDpiPixmap(local_70);
  QPixmap::~QPixmap(local_90);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_100354200(pQVar2);
  FUN_100323d90(&local_a0,uVar5);
  QIcon::QIcon(local_a8,local_70);
  FUN_10038ac80(uVar4,&local_a0,local_a8);
  QIcon::~QIcon(local_a8);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001ad8b6;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1001ad8b6:
  QObject::disconnect(pQVar2,"2imageUpdated(const QImage&)",param_1,"1onVmImageUpdated()");
  QPixmap::~QPixmap(local_70);
  QImage::~QImage(local_48);
  return;
}

