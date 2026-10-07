
QString * FUN_1006de570(QString *param_1)

{
  undefined *puVar1;
  int iVar2;
  int extraout_var;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QDir local_88 [8];
  QArrayData *local_80;
  QDir local_78 [8];
  QString local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  QCoreApplication::applicationDirPath();
  puVar1 = PTR_shared_null_100ba20d0;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_21 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0xae9037);
  QString::append(&local_68);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006de602;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006de602:
  QString::operator=(&local_60,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006de63f;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1006de63f:
  QDir::QDir(local_78,&local_60);
  QDir::absolutePath();
  QString::operator=(&local_60,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006de696;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1006de696:
  QDir::~QDir(local_78);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QDir::QDir(local_88,&local_60);
  QDir::dirName();
  iVar2 = QString::compare_helper
                    (local_80 + *(long *)(local_80 + 0x10),*(undefined4 *)(local_80 + 4),"z-Build",
                     0xffffffff,1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006de713;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006de713:
  QDir::~QDir(local_88);
  if (iVar2 == 0) {
    local_90.field0_0x0 = local_60.field0_0x0;
    if (1 < *(int *)local_60.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0xae904c);
    QString::append(&local_90);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006de8dd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1006de8dd:
    QString::operator=(param_1,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_21 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006de9f7;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
  }
  else {
    FUN_1006d8290(&local_40);
    iVar2 = *(int *)(local_40 + 4);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006de75c;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1006de75c:
    if (iVar2 == 0) {
      QString::fromUtf8_helper((char *)&local_30,0xae9055);
      QString::operator=(param_1,&local_30);
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          local_21 = *(int *)local_30.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006de980;
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
    }
    else {
      FUN_1006deec0(&local_a0);
      local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a0;
      if (1 < *(int *)local_a0 + 1U) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + 1;
        local_21 = *(int *)local_a0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_38,0xa02eac);
      QString::append(&local_98);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_21 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006de7e4;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_1006de7e4:
      QString::operator=(param_1,&local_98);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_21 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006de829;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_1006de829:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_21 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006de980;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
    }
LAB_1006de980:
    FUN_100710a10();
    local_a8 = (QArrayData *)puVar1;
    QString::sprintf((char *)&local_a8,"10.%d",
                     (ulong)((8 < extraout_var) + 7 + (uint)(8 < extraout_var)));
    QString::append(param_1);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_21 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006de9f7;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
  }
LAB_1006de9f7:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006dea27;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1006dea27:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return param_1;
}

