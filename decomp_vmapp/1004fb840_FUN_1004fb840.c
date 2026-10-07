
undefined1 FUN_1004fb840(long param_1,QString *param_2)

{
  long *plVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  bool bVar7;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  int *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("/",1);
  pQVar2 = DAT_1011bc278;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)DAT_1011bc278;
  if (1 < *(int *)DAT_1011bc278 + 1U) {
    LOCK();
    *(int *)DAT_1011bc278 = *(int *)DAT_1011bc278 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  cVar3 = QString::startsWith(param_2,&local_40,1);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fb8db;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004fb8db:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fb90b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004fb90b:
  if (cVar3 != '\0') {
    QString::mid((int)&local_50,(int)param_2);
    local_60 = (QArrayData *)param_2->field0_0x0;
    param_2->field0_0x0 = local_50.field0_0x0;
    uVar6 = 1;
    if (*(int *)local_60 == -1) {
      return 1;
    }
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    goto LAB_1004fbdca;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper("/",1);
  iVar4 = QString::indexOf(param_2,&local_58,0,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fb9c7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004fb9c7:
  if (iVar4 == -1) {
    return 0;
  }
  QString::right((int)&local_60);
  local_70 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x38);
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_68);
  cVar3 = QString::startsWith(&local_60,&local_68,1);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fba68;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1004fba68:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fba98;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004fba98:
  if (cVar3 == '\0') {
    uVar6 = 0;
  }
  else {
    QString::left((int)&local_78);
    QMutex::lock();
    bVar7 = true;
    plVar1 = (long *)(param_1 + 0x18);
    lVar5 = FUN_100502100(plVar1,&local_78);
    if (lVar5 == *plVar1) {
      bVar7 = false;
      QMutex::unlock();
      local_98 = (QArrayData *)QString::fromAscii_helper("*",1);
      FUN_1004fc830(&local_90,param_1,param_1 + 0x30,&local_98,0);
      if (*local_90 != -1) {
        if (*local_90 != 0) {
          LOCK();
          *local_90 = *local_90 + -1;
          local_31 = *local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004fbc2f;
        }
        FUN_1005026c0(&local_90,local_90);
      }
LAB_1004fbc2f:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004fbc65;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1004fbc65:
      QMutex::lock();
      lVar5 = FUN_100502100(plVar1,&local_78);
      if (lVar5 == *plVar1) {
        uVar6 = 0;
      }
      else {
        QString::mid((int)&local_a8,(int)&local_60);
        local_a0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar5 + 0x18);
        if (1 < *(int *)local_a0.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_a0);
        QString::operator=(param_2,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004fbd15;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_1004fbd15:
        uVar6 = 1;
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004fbd5f;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
LAB_1004fbd5f:
      QMutex::unlock();
    }
    else {
      QString::mid((int)&local_88,(int)&local_60);
      local_80.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar5 + 0x18);
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_80);
      QString::operator=(param_2,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004fbb60;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1004fbb60:
      uVar6 = 1;
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004fbd67;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
LAB_1004fbd67:
    if (bVar7) {
      QMutex::unlock();
    }
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004fbda9;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_1004fbda9:
  if (*(int *)local_60 == -1) {
    return uVar6;
  }
  if (*(int *)local_60 != 0) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + -1;
    UNLOCK();
    if (*(int *)local_60 != 0) {
      return uVar6;
    }
    local_31 = 0;
  }
LAB_1004fbdca:
  QArrayData::deallocate(local_60,2,8);
  return uVar6;
}

