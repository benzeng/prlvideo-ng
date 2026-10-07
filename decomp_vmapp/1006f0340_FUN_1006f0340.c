
undefined1 FUN_1006f0340(QString *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  QArrayData *local_98;
  QTypedArrayData<unsigned_short> *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QTypedArrayData<unsigned_short> *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_3 == 0) {
    return 0;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QDir::QDir((QDir *)&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f03a7;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1006f03a7:
  local_50 = param_1->field0_0x0;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  if (*(int *)(local_50 + 4) == 0) {
    bVar6 = false;
  }
  else {
    uVar4 = FUN_1006eec80(param_3,&local_50);
    if ((uVar4 & 0x60) == 0) {
      bVar6 = (uVar4 & 0x10000) == 0;
    }
    else {
      bVar6 = false;
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0420;
    }
    QArrayData::deallocate((QArrayData *)local_50,2,8);
  }
LAB_1006f0420:
  if (!bVar6) {
    uVar2 = 0;
    goto LAB_1006f07c8;
  }
  local_58 = (QArrayData *)*param_2;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  if (*(int *)(local_58 + 4) == 0) {
    bVar6 = false;
  }
  else {
    uVar4 = FUN_1006eec80(param_3,&local_58);
    if ((uVar4 & 0x60) == 0) {
      bVar6 = (uVar4 & 0x10000) == 0;
    }
    else {
      bVar6 = false;
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f049d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006f049d:
  if (bVar6) {
    uVar2 = 0;
    goto LAB_1006f07c8;
  }
  local_68 = (QArrayData *)param_1->field0_0x0;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  FUN_1006f0aa0(&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f04fd;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006f04fd:
  local_78 = (QArrayData *)*param_2;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  FUN_1006f0aa0(&local_70,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0552;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006f0552:
  local_80 = (QArrayData *)local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  bVar5 = 1;
  if ((*(int *)(local_70.field0_0x0 + 4) != 0) &&
     (uVar4 = FUN_1006eec80(param_3,&local_80), (uVar4 & 4) != 0)) {
    local_88 = (QArrayData *)local_70.field0_0x0;
    if (1 < *(int *)local_70.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
    }
    bVar5 = 1;
    if ((*(int *)(local_70.field0_0x0 + 4) != 0) &&
       (uVar4 = FUN_1006eec80(param_3,&local_88), (uVar4 & 8) != 0)) {
      local_90 = param_1->field0_0x0;
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      if (*(int *)(local_90 + 4) == 0) {
        bVar5 = 0;
      }
      else {
        uVar3 = FUN_1006eec80(param_3,&local_90);
        bVar5 = (byte)((uVar3 & 4) >> 2);
      }
      bVar5 = bVar5 ^ 1;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f064f;
        }
        QArrayData::deallocate((QArrayData *)local_90,2,8);
      }
    }
LAB_1006f064f:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f067f;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_1006f067f:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f06af;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006f06af:
  if (bVar5 == 0) {
    cVar1 = operator==(&local_60,&local_70);
    if (cVar1 == '\0') {
      local_98 = (QArrayData *)local_60.field0_0x0;
      if (1 < *(int *)local_60.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
      }
      if (*(int *)(local_60.field0_0x0 + 4) == 0) {
        cVar1 = '\0';
      }
      else {
        uVar3 = FUN_1006eec80(param_3,&local_98);
        cVar1 = (char)((uVar3 & 4) >> 2);
      }
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f0747;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1006f0747:
      if (cVar1 == '\0') {
        uVar2 = 0;
        goto LAB_1006f0768;
      }
    }
    uVar2 = QDir::rename(&local_40,param_1);
  }
  else {
    uVar2 = 0;
  }
LAB_1006f0768:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0798;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1006f0798:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f07c8;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1006f07c8:
  QDir::~QDir((QDir *)&local_40);
  return uVar2;
}

