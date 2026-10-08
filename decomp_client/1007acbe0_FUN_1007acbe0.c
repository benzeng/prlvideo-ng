
void FUN_1007acbe0(long *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Data_conflict local_f8;
  undefined4 local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QString local_d8;
  QVariant local_d0;
  QString local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QVariant local_90;
  undefined8 local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_78,(QObject *)0x0);
  (**(code **)(*param_1 + 0x1e0))(&local_a8,param_1);
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a8;
  if (1 < *(int *)local_a8 + 1U) {
    LOCK();
    *(int *)local_a8 = *(int *)local_a8 + 1;
    local_31 = *(int *)local_a8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_68,0x1e2468c);
  QString::append(&local_a0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007acc8c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007acc8c:
  local_98.field0_0x0 = local_a0.field0_0x0;
  if (1 < *(int *)local_a0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
    local_31 = *(int *)local_a0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1e17beb);
  QString::append(&local_98);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007acd00;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007acd00:
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  QSettings::value((QString *)&local_90,&local_78);
  local_80 = QVariant::toPoint();
  QVariant::~QVariant(&local_90);
  QVariant::~QVariant((QVariant *)&local_b8);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007acd91;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1007acd91:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007acdc7;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1007acdc7:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007acdfd;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1007acdfd:
  CMacScrollArea::scrollTo((QPoint *)param_1[0x1f]);
  (**(code **)(*param_1 + 0x1e0))(&local_e8,param_1);
  local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e8;
  if (1 < *(int *)local_e8 + 1U) {
    LOCK();
    *(int *)local_e8 = *(int *)local_e8 + 1;
    local_31 = *(int *)local_e8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1e2468c);
  QString::append(&local_e0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ace97;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007ace97:
  local_d8.field0_0x0 = local_e0.field0_0x0;
  if (1 < *(int *)local_e0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
    local_31 = *(int *)local_e0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1e17bde);
  QString::append(&local_d8);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007acf0b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007acf0b:
  local_f0 = 0x80000000;
  local_f8.field7 = 0;
  QSettings::value((QString *)&local_d0,&local_78);
  QVariant::toString();
  QVariant::~QVariant(&local_d0);
  QVariant::~QVariant((QVariant *)&local_f8);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007acf9f;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1007acf9f:
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007acfd5;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1007acfd5:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ad00b;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1007ad00b:
  plVar1 = (long *)param_1[0x22];
  if (*(int *)(local_c0.field0_0x0 + 4) == 0) {
    iVar3 = (**(code **)(*plVar1 + 0x70))(plVar1);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        iVar4 = (**(code **)(*plVar1 + 0x78))(plVar1);
        iVar5 = 0;
        if (0 < iVar4) {
          do {
            local_40 = 0;
            iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1,&local_40,iVar3,iVar5);
            if (((iVar4 == 4) && (local_40 != 0)) && (*(int *)(local_40 + 0x28) == 7)) {
              FUN_1007a7b50(param_1[0x20],iVar3,iVar5);
              goto LAB_1007ad1a7;
            }
            iVar4 = (**(code **)(*plVar1 + 0x78))(plVar1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
        iVar4 = (**(code **)(*plVar1 + 0x70))(plVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0x70))(plVar1);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        iVar4 = (**(code **)(*plVar1 + 0x78))(plVar1);
        iVar5 = 0;
        if (0 < iVar4) {
          do {
            local_48 = 0;
            iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1,&local_48,iVar3,iVar5);
            if (((iVar4 == 4) && (local_48 != 0)) &&
               ((*(int *)(local_48 + 0x28) == 2 &&
                (cVar2 = operator==((QString *)(local_48 + 0x50),&local_c0), cVar2 != '\0')))) {
              FUN_1007a7b50(param_1[0x20],iVar3,iVar5);
              goto LAB_1007ad1a7;
            }
            iVar4 = (**(code **)(*plVar1 + 0x78))(plVar1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
        iVar4 = (**(code **)(*plVar1 + 0x70))(plVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
  }
LAB_1007ad1a7:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ad1dd;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1007ad1dd:
  QSettings::~QSettings((QSettings *)&local_78);
  return;
}

