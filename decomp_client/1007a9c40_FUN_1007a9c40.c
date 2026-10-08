
void FUN_1007a9c40(QPaintEvent *param_1)

{
  char cVar1;
  int iVar2;
  QFont *pQVar3;
  undefined8 uVar4;
  int iVar5;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  QArrayData *local_228;
  int local_220 [3];
  undefined4 local_214;
  undefined8 local_210;
  int local_208;
  undefined4 local_204;
  QString local_200;
  QString local_1f8;
  QString local_1f0;
  QFont local_1e8 [16];
  undefined8 local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  QString local_1c8;
  QFont local_1c0 [16];
  QFont local_1b0 [16];
  int local_1a0 [3];
  undefined4 local_194;
  QArrayData *local_190;
  QPixmap local_188 [32];
  QArrayData *local_168;
  QPixmap local_160 [32];
  QPixmap local_140 [32];
  QArrayData *local_120;
  QArrayData *local_118;
  QPixmap local_110 [32];
  QArrayData *local_f0;
  QPixmap local_e8 [32];
  QColor local_c8 [16];
  QPalette local_b8 [16];
  QStyleOptionFrame local_a8 [40];
  QPalette local_80 [40];
  QPainter local_58 [8];
  QPaintEvent *local_50;
  long *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  QPainter::QPainter(local_58);
  local_50 = param_1;
  local_48 = (long *)QWidget::style();
  QPainter::begin((QPaintDevice *)local_58);
  QStyleOptionFrame::QStyleOptionFrame(local_a8);
  QStyleOption::init((QWidget *)local_a8);
  QColor::QColor(local_c8,3);
  QPalette::QPalette(local_b8,local_c8);
  QPalette::operator=(local_80,local_b8);
  QPalette::~QPalette(local_b8);
  (**(code **)(*local_48 + 0xb0))(local_48,0x29,local_a8,local_58,local_50);
  QMetaObject::tr((char *)&local_f0,PTR_staticMetaObject_1021e1520,0x1e17826);
  QPixmap::QPixmap(local_e8,&local_f0,0,0);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a9d75;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1007a9d75:
  if (*(int *)(param_1 + 0x70) - 1U < 3) {
    QPixmap::QPixmap(local_110);
    cVar1 = QFile::exists((QString *)(param_1 + 0x60));
    if (cVar1 == '\0') {
      QString::toLatin1();
      QByteArray::fromBase64((QByteArray *)&local_118);
      QPixmap::loadFromData
                (local_110,local_118 + *(long *)(local_118 + 0x10),*(undefined4 *)(local_118 + 4),0,
                 0);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007a9e37;
        }
        QArrayData::deallocate(local_118,1,8);
      }
LAB_1007a9e37:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007a9e6d;
        }
        QArrayData::deallocate(local_120,1,8);
      }
    }
    else {
      QPixmap::load(local_110,param_1 + 0x60,0,0);
    }
LAB_1007a9e6d:
    local_40 = 0xe000000132;
    QPixmap::scaled(local_140,local_110,&local_40,0,1);
    QPixmap::operator=(local_110,local_140);
    QPixmap::~QPixmap(local_140);
    FUN_10010dda0(local_e8,local_110,0x84);
    QPixmap::~QPixmap(local_110);
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 == 2) {
      local_168 = (QArrayData *)
                  QString::fromAscii_helper(":pixmaps/SnapshotsIcons/snap_paused_306x224.png",0x2f);
      QPixmap::QPixmap(local_160,&local_168,0,0);
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007a9f51;
        }
        QArrayData::deallocate(local_168,2,8);
      }
LAB_1007a9f51:
      FUN_10010dda0(local_e8,local_160,0x84);
      QPixmap::~QPixmap(local_160);
      iVar2 = *(int *)(param_1 + 0x70);
    }
    if (iVar2 == 3) {
      local_190 = (QArrayData *)
                  QString::fromAscii_helper
                            (":pixmaps/SnapshotsIcons/snap_suspended_306x224.png",0x32);
      QPixmap::QPixmap(local_188,&local_190,0,0);
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007a9fe6;
        }
        QArrayData::deallocate(local_190,2,8);
      }
LAB_1007a9fe6:
      FUN_10010dda0(local_e8,local_188,0x84);
      QPixmap::~QPixmap(local_188);
    }
  }
  iVar2 = QPixmap::width();
  iVar2 = (((1 - iVar2) + *(int *)(*(long *)(param_1 + 0x28) + 0x1c)) -
          *(int *)(*(long *)(param_1 + 0x28) + 0x14)) / 2;
  local_1a0[1] = 0x19;
  local_1a0[2] = iVar2 + 0x13f;
  local_194 = 0x108;
  local_1a0[0] = iVar2;
  (**(code **)(*local_48 + 0xa0))(local_48,local_58,local_1a0,0);
  pQVar3 = (QFont *)QPainter::font();
  QFont::QFont(local_1b0,pQVar3);
  local_1c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Arial",5);
  QFont::QFont(local_1c0,&local_1c8,0xd,0x4b,false);
  if (*(int *)local_1c8.field0_0x0 != -1) {
    if (*(int *)local_1c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
      local_31 = *(int *)local_1c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007aa107;
    }
    QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
  }
LAB_1007aa107:
  QPainter::setFont((QFont *)local_58);
  local_1d0 = *(int *)(*(long *)(param_1 + 0x28) + 0x1c) -
              *(int *)(*(long *)(param_1 + 0x28) + 0x14);
  local_1d8 = 0x10e00000000;
  local_1cc = 0x121;
  uVar4 = QWidget::palette();
  (**(code **)(*local_48 + 0x98))(local_48,local_58,&local_1d8,0x84,uVar4,1,param_1 + 0x50,0x11);
  local_1f0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Lucida Grande",0xd);
  QFont::QFont(local_1e8,&local_1f0,0xb,-1,false);
  if (*(int *)local_1f0.field0_0x0 != -1) {
    if (*(int *)local_1f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
      local_31 = *(int *)local_1f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007aa1fe;
    }
    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
  }
LAB_1007aa1fe:
  QPainter::setFont((QFont *)local_58);
  QMetaObject::tr((char *)&local_1f8,PTR_staticMetaObject_1021e1520,0x1e178b7);
  QString::fromUtf8_helper((char *)&local_200,0x1e31adc);
  QString::append(&local_200);
  QString::append(&local_1f8);
  if (*(int *)local_200.field0_0x0 != -1) {
    if (*(int *)local_200.field0_0x0 != 0) {
      LOCK();
      *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
      local_31 = *(int *)local_200.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007aa2a4;
    }
    QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
  }
LAB_1007aa2a4:
  local_208 = *(int *)(*(long *)(param_1 + 0x28) + 0x1c) -
              *(int *)(*(long *)(param_1 + 0x28) + 0x14);
  local_210 = 0x12700000000;
  local_204 = 0x13a;
  uVar4 = QWidget::palette();
  (**(code **)(*local_48 + 0x98))(local_48,local_58,&local_210,0x84,uVar4,1,&local_1f8,0x11);
  if (param_1[0x90] == (QPaintEvent)0x0) {
    iVar5 = iVar2 * -2 + 1 + iVar2 + -1;
  }
  else {
    iVar5 = iVar2 * -2 + 1 + iVar2 + -1;
    local_220[2] = (*(int *)(*(long *)(param_1 + 0x28) + 0x1c) + iVar5) -
                   *(int *)(*(long *)(param_1 + 0x28) + 0x14);
    local_220[1] = 0x13b;
    local_214 = 0x14e;
    local_220[0] = iVar2;
    uVar4 = QWidget::palette();
    QMetaObject::tr((char *)&local_228,PTR_staticMetaObject_1021e14a8,0x1e178c0);
    (**(code **)(*local_48 + 0x98))(local_48,local_58,local_220,0x84,uVar4,1,&local_228,0x11);
    if (*(int *)local_228 != -1) {
      if (*(int *)local_228 != 0) {
        LOCK();
        *(int *)local_228 = *(int *)local_228 + -1;
        local_31 = *(int *)local_228 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007aa40f;
      }
      QArrayData::deallocate(local_228,2,8);
    }
  }
LAB_1007aa40f:
  local_234 = 0x14f;
  if (param_1[0x90] == (QPaintEvent)0x0) {
    local_234 = 0x13b;
  }
  local_230 = (iVar5 + *(int *)(*(long *)(param_1 + 0x28) + 0x1c)) -
              *(int *)(*(long *)(param_1 + 0x28) + 0x14);
  local_22c = local_234 + 0x3b;
  local_238 = iVar2;
  QPainter::drawText((QRect *)local_58,(int)&local_238,(QString *)0x2000,(QRect *)(param_1 + 0x58));
  QPainter::setFont((QFont *)local_58);
  QPainter::end();
  QLabel::paintEvent(param_1);
  if (*(int *)local_1f8.field0_0x0 != -1) {
    if (*(int *)local_1f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
      local_31 = *(int *)local_1f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007aa4c9;
    }
    QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
  }
LAB_1007aa4c9:
  QFont::~QFont(local_1e8);
  QFont::~QFont(local_1c0);
  QFont::~QFont(local_1b0);
  QPixmap::~QPixmap(local_e8);
  QStyleOption::~QStyleOption((QStyleOption *)local_a8);
  QPainter::~QPainter(local_58);
  return;
}

