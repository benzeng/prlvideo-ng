
void FUN_10046fe20(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("TIS","TISHost",3,"[CTISBackuper XML Model]");
  }
  lVar6 = CVmGuestOsInformation::getGuestToolsList();
  if (*(int *)(*(long *)(lVar6 + 0x98) + 8) < *(int *)(*(long *)(lVar6 + 0x98) + 0xc)) {
    lVar7 = 0;
    do {
      if (2 < DAT_1011b55f8) {
        uVar5 = CGuestToolInfo::getToolState();
        CGuestToolInfo::getToolVersion();
        QString::toLocal8Bit();
        lVar1 = *(long *)(local_40 + 0x10);
        CGuestToolInfo::getToolInternalVersion();
        QString::toLocal8Bit();
        lVar2 = *(long *)(local_50 + 0x10);
        CGuestToolInfo::getToolDate();
        QString::toLocal8Bit();
        lVar3 = *(long *)(local_60 + 0x10);
        CGuestToolInfo::getToolId();
        QString::toLocal8Bit();
        lVar4 = *(long *)(local_70 + 0x10);
        CGuestToolInfo::getToolName();
        QString::toLocal8Bit();
        FUN_1008e3970("TIS","TISHost",3,
                      "state = \"%d\"\tver = \"%s\"\tintVer = \"%s\"\ttime = \"%s\"\tuid = \"%s\"\tname = \"%s\""
                      ,uVar5,local_40 + lVar1,local_50 + lVar2,local_60 + lVar3,local_70 + lVar4,
                      local_80 + *(long *)(local_80 + 0x10));
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            UNLOCK();
            if (*(int *)local_80 != 0) goto LAB_10046ffdc;
          }
          QArrayData::deallocate(local_80,1,8);
        }
LAB_10046ffdc:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            UNLOCK();
            if (*(int *)local_88 != 0) goto LAB_10047000c;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_10047000c:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            UNLOCK();
            if (*(int *)local_70 != 0) goto LAB_100470051;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_100470051:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            UNLOCK();
            if (*(int *)local_78 != 0) goto LAB_100470081;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100470081:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            UNLOCK();
            if (*(int *)local_60 != 0) goto LAB_1004700b5;
          }
          QArrayData::deallocate(local_60,1,8);
        }
LAB_1004700b5:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            UNLOCK();
            if (*(int *)local_68 != 0) goto LAB_1004700e5;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_1004700e5:
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            UNLOCK();
            if (*(int *)local_50 != 0) goto LAB_100470115;
          }
          QArrayData::deallocate(local_50,1,8);
        }
LAB_100470115:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            UNLOCK();
            if (*(int *)local_58 != 0) goto LAB_100470145;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_100470145:
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            UNLOCK();
            if (*(int *)local_40 != 0) goto LAB_100470175;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_100470175:
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            UNLOCK();
            if (*(int *)local_48 != 0) goto LAB_1004701b0;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
LAB_1004701b0:
      lVar7 = lVar7 + 1;
    } while (lVar7 < (long)*(int *)(*(long *)(lVar6 + 0x98) + 0xc) -
                     (long)*(int *)(*(long *)(lVar6 + 0x98) + 8));
  }
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("TIS","TISHost",3,"[/CTISBackuper XML Model]");
  }
  return;
}

