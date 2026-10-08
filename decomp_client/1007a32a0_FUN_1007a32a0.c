
void FUN_1007a32a0(double param_1,long param_2,QPainter *param_3,long param_4,QPixmap *param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  QPixmap *this;
  double dVar8;
  QArrayData *local_258;
  QPixmap local_250 [32];
  QArrayData *local_230;
  QPixmap local_228 [32];
  QPixmap local_208 [32];
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  QArrayData *local_1d8;
  QPixmap local_1d0 [32];
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  QArrayData *local_1a0;
  QPixmap local_198 [32];
  QPixmap local_178 [32];
  QPixmap local_158 [32];
  QPixmap local_138 [32];
  QArrayData *local_118;
  QPixmap local_110 [32];
  Data *local_f0;
  QArrayData *local_e8;
  QPixmap local_e0 [32];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  QArrayData *local_b0;
  QPixmap local_a8 [32];
  int local_88 [4];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_31;
  
  QPainter::save();
  local_88[0] = 0x20;
  local_88[1] = 0x10;
  local_88[2] = 0xb2;
  local_88[3] = 0x6b;
  iVar5 = *(int *)(param_4 + 0x28);
  if (iVar5 == 0) {
    local_b0 = (QArrayData *)
               QString::fromAscii_helper(":/pixmaps/SnapshotsIcons/Mac/snapshot_stopped.png",0x31);
    FUN_1007a3e70(param_1,local_a8,&local_b0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a336f;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1007a336f:
    local_c0 = (int)param_1;
    local_b4 = (int)(param_1 + param_1);
    local_bc = local_c0;
    local_b8 = local_c0;
    DrawUtils::drawBorderPixmap(param_3,(QRect *)local_88,(QMargins *)&local_c0,local_a8);
    cVar2 = QPixmap::isNull();
    if (cVar2 != '\0') {
      ResourceUtils::getOsIconPath
                (&local_e8,*(undefined4 *)(param_4 + 0x3c),*(undefined4 *)(param_4 + 0x38),4);
      QPixmap::QPixmap(local_e0,&local_e8,0,0);
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007a3430;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_1007a3430:
      iVar5 = local_88[0];
      iVar7 = local_88[2];
      iVar3 = QPixmap::width();
      iVar6 = local_88[1];
      iVar1 = local_88[3];
      iVar4 = QPixmap::height();
      local_68 = (double)((((1 - iVar5) + iVar7) - iVar3) / 2 + iVar5);
      local_60 = (double)((((1 - iVar6) + iVar1) - iVar4) / 2 + iVar6);
      QPainter::drawPixmap((QPointF *)param_3,(QPixmap *)&local_68);
      QPixmap::~QPixmap(local_e0);
    }
    FUN_100124a60(&local_f0,param_4 + 0x20,param_4 + 0x30);
    iVar5 = *(int *)(local_f0 + 0xc);
    iVar6 = *(int *)(local_f0 + 8);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a3530;
      }
      QListData::dispose(local_f0);
    }
LAB_1007a3530:
    if (iVar5 != iVar6) {
      local_118 = (QArrayData *)
                  QString::fromAscii_helper
                            (":/pixmaps/SnapshotsIcons/Mac/linked_vm_indicator_32x32.png",0x3a);
      FUN_1007a3e70(param_1,local_110,&local_118);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007a35a2;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1007a35a2:
      iVar5 = QPixmap::width();
      iVar6 = QPixmap::height();
      local_58 = (double)(0xb2 - iVar5);
      local_50 = (double)(0x6a - iVar6);
      QPainter::drawPixmap((QPointF *)param_3,(QPixmap *)&local_58);
      QPixmap::~QPixmap(local_110);
    }
    QPixmap::~QPixmap(local_a8);
    iVar5 = *(int *)(param_4 + 0x28);
  }
  if (iVar5 - 1U < 3) {
    iVar5 = *(int *)(*(long *)(param_4 + 0x20) + 4);
    QPixmap::QPixmap(local_138);
    if (iVar5 == 0) {
      FUN_1007a3ef0(param_1,local_178);
      QPixmap::operator=(local_138,local_178);
      QPixmap::~QPixmap(local_178);
    }
    else {
      cVar2 = QPixmap::isNull();
      if (cVar2 == '\0') {
        QPixmap::QPixmap(local_158,(QPixmap *)(param_2 + 0x150));
      }
      else {
        FUN_1007a3ef0(param_1,local_158);
      }
      QPixmap::operator=(local_138,local_158);
      QPixmap::~QPixmap(local_158);
    }
    cVar2 = QPixmap::isNull();
    if (cVar2 == '\0') {
      dVar8 = DAT_100e29dc0 * param_1;
      if (0.0 <= dVar8) {
        iVar6 = (int)(dVar8 + DAT_100e110f0);
      }
      else {
        iVar6 = (int)((dVar8 - (double)(int)(DAT_100e110e0 + dVar8)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + dVar8);
      }
      dVar8 = DAT_100e11058 * param_1;
      if (0.0 <= dVar8) {
        iVar7 = (int)(dVar8 + DAT_100e110f0);
      }
      else {
        iVar7 = (int)((dVar8 - (double)(int)(DAT_100e110e0 + dVar8)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + dVar8);
      }
      local_48 = (double)iVar6;
      local_40 = (double)iVar7;
      QPainter::drawPixmap((QPointF *)param_3,(QPixmap *)&local_48);
      if (iVar5 != 0) {
        QPixmap::operator=((QPixmap *)(param_2 + 0x150),local_138);
      }
    }
    QPixmap::~QPixmap(local_138);
    iVar5 = *(int *)(param_4 + 0x28);
  }
  if (iVar5 - 2U < 2) {
    local_1d8 = (QArrayData *)
                QString::fromAscii_helper
                          (":/pixmaps/SnapshotsIcons/Mac/snapshot_paused_suspended.png",0x3a);
    FUN_1007a3e70(param_1,local_1d0,&local_1d8);
    if (*(int *)local_1d8 != -1) {
      if (*(int *)local_1d8 != 0) {
        LOCK();
        *(int *)local_1d8 = *(int *)local_1d8 + -1;
        local_31 = *(int *)local_1d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a3862;
      }
      QArrayData::deallocate(local_1d8,2,8);
    }
LAB_1007a3862:
    local_1e8 = (int)param_1;
    local_1dc = (int)(param_1 + param_1);
    local_1e4 = local_1e8;
    local_1e0 = local_1e8;
    DrawUtils::drawBorderPixmap(param_3,(QRect *)local_88,(QMargins *)&local_1e8,local_1d0);
    this = local_1d0;
LAB_1007a3973:
    QPixmap::~QPixmap(this);
  }
  else if (iVar5 == 1) {
    local_1a0 = (QArrayData *)
                QString::fromAscii_helper(":/pixmaps/SnapshotsIcons/Mac/snapshot_running.png",0x31);
    FUN_1007a3e70(param_1,local_198,&local_1a0);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a3926;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_1007a3926:
    local_1b0 = (int)param_1;
    local_1a4 = (int)(param_1 + param_1);
    local_1ac = local_1b0;
    local_1a8 = local_1b0;
    DrawUtils::drawBorderPixmap(param_3,(QRect *)local_88,(QMargins *)&local_1b0,local_198);
    this = local_198;
    goto LAB_1007a3973;
  }
  QPixmap::QPixmap(local_208);
  cVar2 = QPixmap::isNull();
  if (cVar2 == '\0') {
    QPixmap::operator=(local_208,param_5);
  }
  else if (*(int *)(param_4 + 0x28) == 3) {
    local_258 = (QArrayData *)
                QString::fromAscii_helper
                          (":/pixmaps/SnapshotsIcons/Mac/snapshot_suspended.png",0x33);
    FUN_1007a3e70(param_1,local_250,&local_258);
    QPixmap::operator=(local_208,local_250);
    QPixmap::~QPixmap(local_250);
    if (*(int *)local_258 != -1) {
      if (*(int *)local_258 != 0) {
        LOCK();
        *(int *)local_258 = *(int *)local_258 + -1;
        local_31 = *(int *)local_258 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a3ae2;
      }
      QArrayData::deallocate(local_258,2,8);
    }
  }
  else if (*(int *)(param_4 + 0x28) == 2) {
    local_230 = (QArrayData *)
                QString::fromAscii_helper(":/pixmaps/SnapshotsIcons/Mac/snapshot_paused.png",0x30);
    FUN_1007a3e70(param_1,local_228,&local_230);
    QPixmap::operator=(local_208,local_228);
    QPixmap::~QPixmap(local_228);
    if (*(int *)local_230 != -1) {
      if (*(int *)local_230 != 0) {
        LOCK();
        *(int *)local_230 = *(int *)local_230 + -1;
        local_31 = *(int *)local_230 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a3ae2;
      }
      QArrayData::deallocate(local_230,2,8);
    }
  }
LAB_1007a3ae2:
  cVar2 = QPixmap::isNull();
  if (cVar2 == '\0') {
    iVar5 = local_88[0];
    iVar7 = local_88[2];
    iVar3 = QPixmap::width();
    iVar6 = local_88[1];
    iVar1 = local_88[3];
    iVar4 = QPixmap::height();
    local_78 = (double)((((1 - iVar5) + iVar7) - iVar3) / 2 + iVar5);
    local_70 = (double)((((1 - iVar6) + iVar1) - iVar4) / 2 + iVar6);
    QPainter::drawPixmap((QPointF *)param_3,(QPixmap *)&local_78);
  }
  QPainter::restore();
  QPixmap::~QPixmap(local_208);
  return;
}

