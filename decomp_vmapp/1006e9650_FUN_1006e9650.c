
QString * FUN_1006e9650(QString *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  QTypedArrayData<unsigned_short> *local_88;
  QString local_80;
  QString local_78;
  QTypedArrayData<unsigned_short> *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_4 == 0xffff) {
    param_4 = FUN_1006d65a0();
  }
  pcVar4 = "prl_updater_%1";
  if (param_4 == 6) {
    pcVar4 = "pax_updater_%1";
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(pcVar4,0xe);
  QString::arg(&local_50,&local_58,param_3,0,0x20);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e96e2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006e96e2:
  FUN_1006d8290(&local_48);
  iVar3 = *(int *)(local_48 + 4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e971a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006e971a:
  if (iVar3 != 0) {
    FUN_1006e3a60(&local_60);
    param_1->field0_0x0 = local_60.field0_0x0;
    if (1 < *(int *)local_60.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006e9a7c;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
    goto LAB_1006e9a7c;
  }
  cVar2 = FUN_1006df1a0();
  if (cVar2 != '\0') {
    if ((DAT_1011bd268 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_1011bd268), iVar3 != 0)) {
      DAT_1011bd260 = QString::fromAscii_helper("z-Build/",8);
      ___cxa_atexit(FUN_10002f530,&DAT_1011bd260,0x100000000);
      ___cxa_guard_release(&DAT_1011bd268);
    }
    iVar3 = QString::lastIndexOf(param_2,&DAT_1011bd260,0xffffffff,1);
    local_68 = (QArrayData *)QString::fromAscii_helper("/",1);
    QString::indexOf(param_2,&local_68,iVar3 + *(int *)(DAT_1011bd260 + 4),1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006e986d;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1006e986d:
    QString::left((int)&local_70);
    bVar1 = false;
    if (*(int *)(local_70 + 4) != 0) {
      local_78.field0_0x0 = local_70;
      if (1 < *(int *)local_70 + 1U) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0xa02eac);
      QString::append(&local_78);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006e98f3;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1006e98f3:
      param_1->field0_0x0 = local_78.field0_0x0;
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_29 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(param_1);
      bVar1 = true;
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_29 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006e994c;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
    }
LAB_1006e994c:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006e997c;
      }
      QArrayData::deallocate((QArrayData *)local_70,2,8);
    }
LAB_1006e997c:
    if (bVar1) goto LAB_1006e9a7c;
  }
  FUN_1006e3a60(&local_88);
  local_80.field0_0x0 = local_88;
  if (1 < *(int *)local_88 + 1U) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + 1;
    local_29 = *(int *)local_88 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0xae9851);
  QString::append(&local_80);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e99f8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e99f8:
  param_1->field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_29 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e9a4c;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1006e9a4c:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e9a7c;
    }
    QArrayData::deallocate((QArrayData *)local_88,2,8);
  }
LAB_1006e9a7c:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return param_1;
}

