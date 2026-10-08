
bool FUN_100af5c30(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  bool bVar6;
  QString local_a0;
  QString local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  int local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QString::QString(&local_58,0x7c);
  QString::section(&local_60,param_2,&local_58,5,5,0);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af5ca5;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100af5ca5:
  bVar6 = true;
  iVar3 = QString::compare_helper
                    ((QArrayData *)(local_60.field0_0x0 + *(long *)(local_60.field0_0x0 + 0x10)),
                     *(undefined4 *)(local_60.field0_0x0 + 4),"Empty",0xffffffff,1);
  if (iVar3 == 0) goto LAB_100af5ff8;
  QString::QString(&local_50,0x7c);
  QString::section(&local_68,param_2,&local_50,1,2,0);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af5d33;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100af5d33:
  CDispUsbPreferences::getUsbBlackList();
  local_88 = local_90;
  if (*local_90 != -1) {
    if (*local_90 == 0) {
      QListData::detach((int)&local_88);
      iVar3 = local_88[2];
      if (iVar3 != local_88[3]) {
        local_90 = local_90 + (long)local_90[2] * 2 + 4;
        piVar5 = local_88 + (long)iVar3 * 2 + 4;
        lVar4 = (long)local_88[3] * 8 + (long)iVar3 * -8;
        do {
          piVar1 = *(int **)local_90;
          *(int **)piVar5 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          local_90 = local_90 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_90 = *local_90 + 1;
      local_31 = *local_90 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)local_88[2] * 2 + 4;
  local_78 = local_88 + (long)local_88[3] * 2 + 4;
  local_70 = 1;
  FUN_100039a80(&local_90);
  iVar3 = 2;
  if ((local_70 != 0) && (local_80 != local_78)) {
    do {
      piVar5 = local_80;
      QString::QString(&local_48,0x7c);
      QString::section(&local_98,piVar5,&local_48,1,2,0);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af5e89;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_100af5e89:
      cVar2 = operator==(&local_98,&local_68);
      if (cVar2 == '\0') {
        cVar2 = '\0';
      }
      else {
        QString::QString(&local_40,0x7c);
        QString::section(&local_a0,piVar5,&local_40,5,5,0);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af5efc;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_100af5efc:
        cVar2 = operator==(&local_a0,&local_60);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af5f52;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
      }
LAB_100af5f52:
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af5f88;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_100af5f88:
      iVar3 = 1;
      if (cVar2 != '\0') break;
      local_80 = local_80 + 2;
      local_70 = 1;
      iVar3 = 2;
    } while (local_80 != local_78);
  }
  FUN_100039a80(&local_88);
  bVar6 = iVar3 != 2;
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af5ff8;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100af5ff8:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_60.field0_0x0 != 0) {
        return bVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
  return bVar6;
}

