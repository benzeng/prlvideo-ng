
void FUN_100471a60(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  int local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QFontMetrics::QFontMetrics
            ((QFontMetrics *)&local_40,
             (QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x120) + 0x28) + 0x38));
  local_50 = (QArrayData *)QString::fromAscii_helper("1000000",7);
  FUN_100472970(&local_48,&local_50,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100471ae7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100471ae7:
  QFontMetrics::width(&local_40,(int)&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100471b30;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100471b30:
  local_50 = (QArrayData *)QString::fromAscii_helper("1000000",7);
  FUN_100472970(&local_48,&local_50,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100471b87;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100471b87:
  QFontMetrics::width(&local_40,(int)&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100471bce;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100471bce:
  local_50 = (QArrayData *)QString::fromAscii_helper("1000000",7);
  FUN_100472970(&local_48,&local_50,2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100471c25;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100471c25:
  QFontMetrics::width(&local_40,(int)&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100471c6c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100471c6c:
  QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,0x1df4d52);
  QFontMetrics::width(&local_40,(int)&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100471cd2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100471cd2:
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x120));
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  local_68 = (QArrayData *)QString::fromAscii_helper("00.0",4);
  FUN_100472f90(&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100471d48;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100471d48:
  QFontMetrics::width(&local_40,(int)&local_60);
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x130));
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xe8));
  local_78 = (QArrayData *)QString::fromAscii_helper("0000",4);
  FUN_100473050(&local_70,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100471dd2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100471dd2:
  QFontMetrics::width(&local_40,(int)&local_70);
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x140));
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xf8));
  local_a0 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100461500(&local_a0,*(long *)(param_1 + 0x68) + 0xe0);
  FUN_100461500(&local_a0,*(long *)(param_1 + 0x68) + 0xd8);
  FUN_100461500(&local_a0,*(long *)(param_1 + 0x68) + 0xf0);
  local_98 = local_a0;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 == 0) {
      QListData::detach((int)&local_98);
      lVar2 = (long)*(int *)(local_98 + 8);
      if ((local_a0 + (long)*(int *)(local_a0 + 8) * 8 != local_98 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_98 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_98 + 0xc))
         ) {
        _memcpy(local_98 + lVar2 * 8 + 0x10,local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  local_80 = 1;
  if (*(int *)local_a0 == -1) {
LAB_100471f4f:
    iVar4 = 0;
    if (local_90 != local_88) {
      do {
        QLabel::text();
        QLabel::text();
        QString::left((int)&local_a8);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100471fea;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_100471fea:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100472020;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_100472020:
        iVar1 = QFontMetrics::width(&local_40,(int)&local_a8);
        if (iVar4 < iVar1) {
          iVar4 = iVar1;
        }
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10047206b;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_10047206b:
        local_90 = local_90 + 8;
        local_80 = 1;
      } while (local_90 != local_88);
    }
  }
  else {
    if (*(int *)local_a0 == 0) {
LAB_100471f37:
      QListData::dispose(local_a0);
    }
    else {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100471f37;
    }
    if (local_80 != 0) goto LAB_100471f4f;
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004720c1;
    }
    QListData::dispose(local_98);
  }
LAB_1004720c1:
  QFontMetrics::QFontMetrics
            ((QFontMetrics *)&local_c0,
             (QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x108) + 0x28) + 0x38));
  QLabel::text();
  QFontMetrics::width(&local_c0,(int)&local_c8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100472148;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100472148:
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_c0);
  QLabel::setIndent((int)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x108));
  QFontMetrics::QFontMetrics
            ((QFontMetrics *)&local_d0,
             (QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x100) + 0x28) + 0x38));
  QLabel::text();
  QFontMetrics::width(&local_d0,(int)&local_d8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004721fa;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004721fa:
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_d0);
  QLabel::setIndent((int)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x100));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100472255;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100472255:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100472285;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100472285:
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_40);
  return;
}

