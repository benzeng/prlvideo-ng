
void FUN_100da67b0(long param_1)

{
  QString *this;
  long lVar1;
  QArrayData *pQVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  ulong local_48;
  QArrayData *local_40;
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  this = (QString *)(param_1 + 0x18);
  QFileInfo::QFileInfo(local_38,this);
  uVar4 = QFileInfo::size();
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (*(int *)(param_1 + 0x3c) < 0) {
    QString::toUtf8();
    pQVar2 = local_40;
    lVar1 = *(long *)(local_40 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar4 = FUN_100dddcf0(uVar3);
    FUN_100df99c0("","cmn_utils",0,"Error: Can\'t get size of file[%s] by error [%#x][%s]",
                  pQVar2 + lVar1,uVar3,uVar4);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100da6c25;
      }
      QArrayData::deallocate(local_40,1,8);
    }
    goto LAB_100da6c25;
  }
  local_48 = 0;
  local_58 = *(QArrayData **)(param_1 + 0x20);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_29 = *(int *)local_58 != 0;
    UNLOCK();
  }
  FUN_100d98ee0(&local_50,&local_58);
  uVar3 = FUN_100d9d560(&local_50,&local_48,0,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100da6870;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100da6870:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100da68a0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100da68a0:
  if (*(int *)(param_1 + 0x3c) < 0) {
    QString::toUtf8();
    pQVar2 = local_60;
    lVar1 = *(long *)(local_60 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar4 = FUN_100dddcf0(uVar3);
    FUN_100df99c0("","cmn_utils",0,"Error: Can\'t get size of dir[%s] by error [%#x][%s]",
                  pQVar2 + lVar1,uVar3,uVar4);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100da6c25;
      }
      QArrayData::deallocate(local_60,1,8);
    }
    goto LAB_100da6c25;
  }
  if (local_48 <= *(ulong *)(param_1 + 0x28)) {
    QString::toUtf8();
    pQVar2 = local_68;
    lVar1 = *(long *)(local_68 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,"Error: Dir [%s] does not have available space to copy [%s]",
                  pQVar2 + lVar1,local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100da6bec;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_100da6bec:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100da6c1c;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_100da6c1c:
    *(undefined4 *)(param_1 + 0x3c) = 0x80000373;
    goto LAB_100da6c25;
  }
  QFileInfo::absoluteFilePath();
  QString::operator=(this,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100da6909;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100da6909:
  local_90 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  QString::arg(&local_88,&local_90,param_1 + 0x20,0,0x20);
  QFileInfo::fileName();
  QString::arg(&local_80,&local_88,&local_98,0,0x20);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100da699e;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100da699e:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100da69ce;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100da69ce:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100da6a04;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100da6a04:
  uVar3 = FUN_100da6ef0(param_1,this,&local_80);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100da6c25;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100da6c25:
  QFileInfo::~QFileInfo(local_38);
  return;
}

