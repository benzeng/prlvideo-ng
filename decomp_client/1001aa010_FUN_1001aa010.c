
void FUN_1001aa010(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  bool bVar13;
  double dVar14;
  QIcon local_120 [8];
  undefined8 local_118;
  QPixmap local_110 [32];
  QPixmap local_f0 [32];
  long local_d0;
  QImage local_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  QImage local_90 [32];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QIcon local_50 [8];
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_100389f30(*(undefined8 *)(param_1 + 0x28));
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1dd6e96);
  local_48 = 0x8000000080;
  plVar6 = (long *)QApplication::style();
  (**(code **)(*plVar6 + 0x100))(local_50,plVar6,0xf,0,0);
  iVar3 = FUN_1001a9b60(param_1,1,0);
  bVar13 = iVar3 == 1;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  local_58 = (QArrayData *)QString::fromAscii_helper("host",4);
  FUN_10038a5b0(uVar7,&local_58,&local_40,local_50,iVar3,iVar3 == 1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001aa127;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001aa127:
  lVar8 = *(long *)(param_1 + 0x40);
  if (*(int *)(lVar8 + 8) < *(int *)(lVar8 + 0xc)) {
    local_60 = *(QArrayData **)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8);
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  else {
    local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  uVar7 = FUN_1001a9960(param_1,&local_60);
  uVar1 = DAT_100e151e0;
  iVar3 = 0;
  while( true ) {
    uVar12 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar4 = FUN_10015d3a0(uVar12);
    if (iVar4 <= iVar3) break;
    uVar12 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar8 = FUN_10015d330(uVar12,iVar3);
    if ((lVar8 != 0) && (cVar2 = FUN_1001aec10(lVar8,uVar7), cVar2 != '\0')) {
      FUN_100188480(&local_68,lVar8);
      FUN_10018d830(&local_70,lVar8);
      uVar12 = FUN_10018c280(lVar8);
      lVar9 = FUN_100319960(uVar12);
      QImage::QImage(local_90);
      if (lVar9 != 0) {
        local_98 = 0xffffffff;
        local_94 = 0xffffffff;
        local_a8 = 0;
        local_a0 = 0xffffffffffffffff;
        uVar12 = FUN_100327670(lVar9,&local_98,&local_a8,uVar1);
        FUN_100354220(local_c8,uVar12);
        QImage::operator=(local_90,local_c8);
        QImage::~QImage(local_c8);
        cVar2 = QImage::isNull();
        if ((cVar2 != '\0') || (cVar2 = FUN_100354bd0(uVar12), cVar2 == '\0')) {
          QObject::connect(&local_d0,uVar12,"2imageUpdated(const QImage&)",param_1,
                           "1onVmImageUpdated()",0);
          if (local_d0 != 0) {
            QMetaObject::Connection::isConnected_helper();
          }
          QMetaObject::Connection::~Connection((Connection *)&local_d0);
        }
      }
      FUN_1001aa740(local_f0,local_90,&local_48,1);
      dVar14 = (double)(int)local_48 + (double)(int)local_48;
      if (0.0 <= dVar14) {
        iVar4 = (int)(dVar14 + DAT_100e110f0);
      }
      else {
        iVar4 = (int)((dVar14 - (double)(int)(dVar14 + DAT_100e110e0)) + DAT_100e110f0) +
                (int)(dVar14 + DAT_100e110e0);
      }
      dVar14 = (double)local_48._4_4_ + (double)local_48._4_4_;
      if (0.0 <= dVar14) {
        iVar10 = (int)(dVar14 + DAT_100e110f0);
      }
      else {
        iVar10 = (int)((dVar14 - (double)(int)(dVar14 + DAT_100e110e0)) + DAT_100e110f0) +
                 (int)(dVar14 + DAT_100e110e0);
      }
      local_118 = CONCAT44(iVar10,iVar4);
      FUN_1001aa740(local_110,local_90,&local_118,2);
      QPixmap::setHiDpiPixmap(local_f0);
      QPixmap::~QPixmap(local_110);
      uVar5 = FUN_10018f860(lVar8);
      iVar4 = FUN_1001a9b60(param_1,0,uVar5);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      QIcon::QIcon(local_120,local_f0);
      FUN_10038a5b0(uVar12,&local_68,&local_70,local_120,iVar4);
      QIcon::~QIcon(local_120);
      bVar11 = true;
      if (bVar13 || iVar4 != 1) {
        bVar11 = bVar13;
      }
      QPixmap::~QPixmap(local_f0);
      QImage::~QImage(local_90);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001aa4d5;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1001aa4d5:
      bVar13 = bVar11;
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001aa190;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
LAB_1001aa190:
    iVar3 = iVar3 + 1;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001aa54a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001aa54a:
  QIcon::~QIcon(local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

