
undefined1 FUN_1000cae30(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  QArrayData *pQVar4;
  char *pcVar5;
  QArrayData *local_80;
  QArrayData *local_70;
  QFileInfo local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QTypedArrayData<unsigned_short> *local_40;
  QArrayData *local_38;
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  QFileInfo::QFileInfo(local_30,(QString *)(param_1 + 0x1d0));
  cVar2 = QFileInfo::exists();
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 499) & 8) != 0) {
      QFileInfo::QFileInfo(local_68,(QString *)(param_1 + 0x1d8));
      cVar2 = QFileInfo::exists();
      bVar1 = false;
      if (cVar2 == '\0') {
        pQVar4 = (QArrayData *)((QString *)(param_1 + 0x1d8))->field0_0x0;
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_21 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","vm",0,"[%s] file is not found",local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_21 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1000caf15;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_1000caf15:
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_21 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1000caf45;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
LAB_1000caf45:
        pQVar4 = *(QArrayData **)(param_1 + 0x440);
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_21 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","vm",0,"Snapshot %s is invalid. Unable to revert",
                      local_80 + *(long *)(local_80 + 0x10));
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_21 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1000cafc4;
          }
          QArrayData::deallocate(local_80,1,8);
        }
LAB_1000cafc4:
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_21 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1000caff4;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
LAB_1000caff4:
        *(undefined4 *)(param_1 + 500) = 0x80020017;
        bVar1 = true;
      }
      QFileInfo::~QFileInfo(local_68);
      if (bVar1) {
        uVar3 = 0;
        goto LAB_1000cb23d;
      }
    }
    uVar3 = 1;
    goto LAB_1000cb23d;
  }
  local_40 = ((QString *)(param_1 + 0x1d0))->field0_0x0;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  pQVar4 = local_38 + *(long *)(local_38 + 0x10);
  cVar2 = QFileInfo::isSymLink();
  if (cVar2 == '\0') {
    pcVar5 = "";
  }
  else {
    QFileInfo::readLink();
    QString::toLocal8Bit();
    pcVar5 = (char *)(local_48 + *(long *)(local_48 + 0x10));
  }
  FUN_1008e3970("","vm",0,"[%s] file is not found %s",pQVar4,pcVar5);
  if (cVar2 != '\0') {
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000cb0e3;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1000cb0e3:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000cb113;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1000cb113:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cb143;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1000cb143:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cb173;
    }
    QArrayData::deallocate((QArrayData *)local_40,2,8);
  }
LAB_1000cb173:
  if ((*(byte *)(param_1 + 499) & 8) != 0) {
    local_60 = *(QArrayData **)(param_1 + 0x440);
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","vm",0,"Snapshot %s is invalid. Unable to revert",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000cb200;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_1000cb200:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000cb230;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1000cb230:
  *(undefined4 *)(param_1 + 500) = 0x80020017;
  uVar3 = 0;
LAB_1000cb23d:
  QFileInfo::~QFileInfo(local_30);
  return uVar3;
}

