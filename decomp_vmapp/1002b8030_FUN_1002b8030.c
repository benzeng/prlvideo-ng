
int FUN_1002b8030(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  ulong uVar6;
  undefined **ppuVar7;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  ppuVar7 = &PTR_s_VIRTUAL_CCID__100bb3470;
  uVar6 = 0;
  do {
    pcVar5 = *ppuVar7;
    sVar4 = _strlen(pcVar5);
    local_60 = (QArrayData *)QString::fromAscii_helper(pcVar5,(int)sVar4);
    cVar2 = QString::startsWith(param_1,&local_60,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b80bc;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1002b80bc:
    if (cVar2 != '\0') {
      puVar1 = (&PTR_s_devices_usb_speed_ccid_100bb3478)[uVar6 * 3];
      pcVar5 = (char *)FUN_1007da5e0(puVar1,"");
      iVar3 = _strcmp(pcVar5,"low");
      if (iVar3 == 0) {
        return 0;
      }
      pcVar5 = (char *)FUN_1007da5e0(puVar1,"");
      iVar3 = _strcmp(pcVar5,"full");
      if (iVar3 == 0) {
        return 1;
      }
      pcVar5 = (char *)FUN_1007da5e0(puVar1,"");
      iVar3 = _strcmp(pcVar5,"high");
      if (iVar3 == 0) {
        return 2;
      }
      pcVar5 = (char *)FUN_1007da5e0(puVar1,"");
      iVar3 = _strcmp(pcVar5,"super");
      if (iVar3 == 0) {
        return 3;
      }
      return (&DAT_100bb3480)[uVar6 * 6];
    }
    uVar6 = uVar6 + 1;
    ppuVar7 = ppuVar7 + 3;
  } while (uVar6 < 7);
  QString::QString(&local_58,0x7c);
  QString::section(&local_68,param_1,&local_58,3,3,0);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b812f;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1002b812f:
  iVar3 = QString::compare_helper
                    (local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(local_68 + 4),"super",
                     0xffffffff,1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b8186;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002b8186:
  if (iVar3 == 0) {
    return 3;
  }
  QString::QString(&local_50,0x7c);
  QString::section(&local_70,param_1,&local_50,3,3,0);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b81f1;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002b81f1:
  iVar3 = QString::compare_helper
                    (local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(local_70 + 4),"high",
                     0xffffffff,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b8248;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002b8248:
  if (iVar3 == 0) {
    return 2;
  }
  QString::QString(&local_48,0x7c);
  QString::section(&local_78,param_1,&local_48,3,3,0);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b82b3;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002b82b3:
  iVar3 = QString::compare_helper
                    (local_78 + *(long *)(local_78 + 0x10),*(undefined4 *)(local_78 + 4),"full",
                     0xffffffff,1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b830a;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002b830a:
  if (iVar3 == 0) {
    return 1;
  }
  QString::QString(&local_40,0x7c);
  QString::section(&local_80,param_1,&local_40,3,3,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b8375;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002b8375:
  iVar3 = QString::compare_helper
                    (local_80 + *(long *)(local_80 + 0x10),*(undefined4 *)(local_80 + 4),"low",
                     0xffffffff,1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) goto LAB_1002b83cc;
      local_31 = 0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002b83cc:
  return -(uint)(iVar3 != 0);
}

