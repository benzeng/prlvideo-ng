
void FUN_1007a46b0(long param_1,QPointF *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  QArrayData *local_230;
  QPixmap local_228 [32];
  QArrayData *local_208;
  QPixmap local_200 [32];
  QArrayData *local_1e0;
  QPixmap local_1d8 [32];
  QArrayData *local_1b8;
  QPixmap local_1b0 [32];
  QArrayData *local_190;
  QPixmap local_188 [32];
  QArrayData *local_168;
  QPixmap local_160 [32];
  QArrayData *local_140;
  QPixmap local_138 [32];
  QArrayData *local_118;
  QArrayData *local_110;
  QPixmap local_108 [32];
  QPixmap local_e8 [32];
  int *local_c8;
  int *local_c0;
  int *local_b8;
  int *local_b0;
  int *local_a8;
  undefined4 local_a0;
  int *local_98;
  undefined8 local_90;
  undefined8 local_88;
  QArrayData *local_80;
  QPixmap local_78 [32];
  QPixmap local_58 [39];
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  
  QPainter::save();
  QPixmap::QPixmap(local_58);
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 2:
    FUN_1007a5910(param_1,param_2);
    QPixmap::QPixmap(local_78);
    FUN_1007a32a0(DAT_100e11050,param_1,param_2,param_1 + 0x70,local_78);
    QPixmap::~QPixmap(local_78);
    FUN_1007a5f60(&local_80);
    FUN_1007a5c20(*(undefined8 *)(param_1 + 0xd0));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_80,2,8);
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x54) == '\0') {
      local_168 = (QArrayData *)
                  QString::fromAscii_helper(":/pixmaps/SnapshotsIcons/Mac/snapshot_joint.png",0x2f);
      FUN_1007a5210(local_160,param_1,&local_168);
      QPixmap::operator=(local_58,local_160);
      QPixmap::~QPixmap(local_160);
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_168,2,8);
      }
    }
    else {
      local_140 = (QArrayData *)
                  QString::fromAscii_helper
                            (":/pixmaps/SnapshotsIcons/Mac/snapshot_joint_white.png",0x35);
      FUN_1007a5210(local_138,param_1,&local_140);
      QPixmap::operator=(local_58,local_138);
      QPixmap::~QPixmap(local_138);
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_140,2,8);
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x54) == '\0') {
      local_190 = (QArrayData *)
                  QString::fromAscii_helper
                            (":/pixmaps/SnapshotsIcons/Mac/snapshot_tree_joint.png",0x34);
      FUN_1007a5210(local_188,param_1,&local_190);
      QPixmap::operator=(local_58,local_188);
      QPixmap::~QPixmap(local_188);
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_190,2,8);
      }
    }
    else if (*(char *)(param_1 + 0x5c) == '\0') {
      local_1e0 = (QArrayData *)
                  QString::fromAscii_helper
                            (":/pixmaps/SnapshotsIcons/Mac/snapshot_tree_joint_whitegrey2.png",0x3f)
      ;
      FUN_1007a5210(local_1d8,param_1,&local_1e0);
      QPixmap::operator=(local_58,local_1d8);
      QPixmap::~QPixmap(local_1d8);
      if (*(int *)local_1e0 != -1) {
        if (*(int *)local_1e0 != 0) {
          LOCK();
          *(int *)local_1e0 = *(int *)local_1e0 + -1;
          local_31 = *(int *)local_1e0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_1e0,2,8);
      }
    }
    else {
      local_1b8 = (QArrayData *)
                  QString::fromAscii_helper
                            (":/pixmaps/SnapshotsIcons/Mac/snapshot_tree_joint_whitegrey1.png",0x3f)
      ;
      FUN_1007a5210(local_1b0,param_1,&local_1b8);
      QPixmap::operator=(local_58,local_1b0);
      QPixmap::~QPixmap(local_1b0);
      if (*(int *)local_1b8 != -1) {
        if (*(int *)local_1b8 != 0) {
          LOCK();
          *(int *)local_1b8 = *(int *)local_1b8 + -1;
          local_31 = *(int *)local_1b8 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_1b8,2,8);
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x54) == '\0') {
      local_230 = (QArrayData *)
                  QString::fromAscii_helper
                            (":/pixmaps/SnapshotsIcons/Mac/snapshot_joint_down.png",0x34);
      FUN_1007a5210(local_228,param_1,&local_230);
      QPixmap::operator=(local_58,local_228);
      QPixmap::~QPixmap(local_228);
      if (*(int *)local_230 != -1) {
        if (*(int *)local_230 != 0) {
          LOCK();
          *(int *)local_230 = *(int *)local_230 + -1;
          local_31 = *(int *)local_230 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_230,2,8);
      }
    }
    else {
      local_208 = (QArrayData *)
                  QString::fromAscii_helper
                            (":/pixmaps/SnapshotsIcons/Mac/snapshot_joint_down_white.png",0x3a);
      FUN_1007a5210(local_200,param_1,&local_208);
      QPixmap::operator=(local_58,local_200);
      QPixmap::~QPixmap(local_200);
      if (*(int *)local_208 != -1) {
        if (*(int *)local_208 != 0) {
          LOCK();
          *(int *)local_208 = *(int *)local_208 + -1;
          local_31 = *(int *)local_208 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_208,2,8);
      }
    }
    break;
  case 7:
    FUN_1007a5910(param_1,param_2);
    if (((*(long *)(param_1 + 0x30) == 0) || (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0)) ||
       (*(long *)(param_1 + 0x38) == 0)) {
      local_c8 = *(int **)(param_1 + 0x70);
      if (1 < *local_c8 + 1U) {
        LOCK();
        *local_c8 = *local_c8 + 1;
        local_31 = *local_c8 != 0;
        UNLOCK();
      }
      local_c0 = *(int **)(param_1 + 0x78);
      if (1 < *local_c0 + 1U) {
        LOCK();
        *local_c0 = *local_c0 + 1;
        local_31 = *local_c0 != 0;
        UNLOCK();
      }
      local_b8 = *(int **)(param_1 + 0x80);
      if (1 < *local_b8 + 1U) {
        LOCK();
        *local_b8 = *local_b8 + 1;
        local_31 = *local_b8 != 0;
        UNLOCK();
      }
      local_b0 = *(int **)(param_1 + 0x88);
      if (1 < *local_b0 + 1U) {
        LOCK();
        *local_b0 = *local_b0 + 1;
        local_31 = *local_b0 != 0;
        UNLOCK();
      }
      local_a8 = *(int **)(param_1 + 0x90);
      if (1 < *local_a8 + 1U) {
        LOCK();
        *local_a8 = *local_a8 + 1;
        local_31 = *local_a8 != 0;
        UNLOCK();
      }
      local_a0 = *(undefined4 *)(param_1 + 0x98);
      local_98 = *(int **)(param_1 + 0xa0);
      if (1 < *local_98 + 1U) {
        LOCK();
        *local_98 = *local_98 + 1;
        local_31 = *local_98 != 0;
        UNLOCK();
      }
      local_90 = *(undefined8 *)(param_1 + 0xa8);
      local_88 = *(undefined8 *)(param_1 + 0xb0);
    }
    else {
      FUN_1007a5390(&local_c8,param_1);
    }
    QPixmap::QPixmap(local_e8);
    if ((*(long *)(param_1 + 0x148) != 0) && (iVar3 = QAbstractAnimation::state(), iVar3 == 2)) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x148) + 0x10);
      QPixmap::QPixmap(local_108,
                       *(QPixmap **)
                        (lVar1 + 0x10 +
                        ((long)*(int *)(*(long *)(param_1 + 0x148) + 0x1c) +
                        (long)*(int *)(lVar1 + 8)) * 8));
      QPixmap::operator=(local_e8,local_108);
      QPixmap::~QPixmap(local_108);
    }
    FUN_1007a32a0(DAT_100e11050,param_1,param_2,&local_c8,local_e8);
    QMetaObject::tr((char *)&local_110,PTR_staticMetaObject_1021e1520,0x1e175b4);
    local_118 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1007a5c20(DAT_100e11050);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a4b81;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_1007a4b81:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a4bb7;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_1007a4bb7:
    FUN_1007a5760();
    QPixmap::~QPixmap(local_e8);
    FUN_1007a1cf0(&local_c8);
  }
  cVar2 = QPixmap::isNull();
  if (cVar2 == '\0') {
    local_30 = 0x4030000000000000;
    local_28 = 0;
    QPainter::drawPixmap(param_2,(QPixmap *)&local_30);
  }
  QPainter::restore();
  QPixmap::~QPixmap(local_58);
  return;
}

