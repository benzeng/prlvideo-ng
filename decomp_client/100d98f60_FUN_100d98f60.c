
bool FUN_100d98f60(QString *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  QString local_78;
  QString local_70;
  QTypedArrayData<unsigned_short> *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QTypedArrayData<unsigned_short> *local_40;
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  if (param_2 == 0) {
    return false;
  }
  QFileInfo::QFileInfo(local_38,param_1);
  local_40 = param_1->field0_0x0;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  if (*(int *)(local_40 + 4) == 0) {
    bVar5 = false;
  }
  else {
    uVar3 = FUN_100d970c0(param_2,&local_40);
    if ((uVar3 & 0x60) == 0) {
      bVar5 = (uVar3 & 0x10000) == 0;
    }
    else {
      bVar5 = false;
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d98fff;
    }
    QArrayData::deallocate((QArrayData *)local_40,2,8);
  }
LAB_100d98fff:
  if (!bVar5) {
    bVar5 = false;
    goto LAB_100d99263;
  }
  local_50 = (QArrayData *)param_1->field0_0x0;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_29 = *(int *)local_50 != 0;
    UNLOCK();
  }
  FUN_100d98ee0(&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d9905c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d9905c:
  local_58 = local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_29 = *(int *)local_48 != 0;
    UNLOCK();
  }
  bVar4 = 1;
  if ((*(int *)(local_48 + 4) != 0) && (uVar3 = FUN_100d970c0(param_2,&local_58), (uVar3 & 4) != 0))
  {
    local_60 = local_48;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
    bVar4 = 1;
    if ((*(int *)(local_48 + 4) != 0) &&
       (uVar3 = FUN_100d970c0(param_2,&local_60), (uVar3 & 8) != 0)) {
      local_68 = param_1->field0_0x0;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
      }
      if (*(int *)(local_68 + 4) == 0) {
        bVar4 = 0;
      }
      else {
        uVar2 = FUN_100d970c0(param_2,&local_68);
        bVar4 = (byte)((uVar2 & 4) >> 2);
      }
      bVar4 = bVar4 ^ 1;
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100d9914d;
        }
        QArrayData::deallocate((QArrayData *)local_68,2,8);
      }
    }
LAB_100d9914d:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d9917d;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_100d9917d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d991ad;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d991ad:
  if (bVar4 == 0) {
    cVar1 = QFileInfo::isDir();
    if (cVar1 == '\0') {
      cVar1 = QFile::remove(param_1);
    }
    else {
      local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QDir::QDir((QDir *)&local_70,&local_78);
      cVar1 = QDir::rmdir(&local_70);
      QDir::~QDir((QDir *)&local_70);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_29 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100d9922e;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
    }
LAB_100d9922e:
    bVar5 = cVar1 != '\0';
  }
  else {
    bVar5 = false;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d99263;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d99263:
  QFileInfo::~QFileInfo(local_38);
  return bVar5;
}

