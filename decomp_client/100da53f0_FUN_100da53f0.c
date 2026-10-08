
void FUN_100da53f0(long param_1)

{
  QString *this;
  long lVar1;
  QArrayData *pQVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  QString local_80;
  QDir local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  ulong local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = (QString *)(param_1 + 0x18);
  iVar3 = FUN_100d9d550(this,(ulong *)(param_1 + 0x28));
  *(int *)(param_1 + 0x3c) = iVar3;
  if (iVar3 < 0) {
    QString::toUtf8();
    pQVar2 = local_40;
    lVar1 = *(long *)(local_40 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    uVar5 = FUN_100dddcf0(uVar4);
    FUN_100df99c0("","cmn_utils",0,"Error: Can\'t get size of dir[%s] by error [%#x][%s]",
                  pQVar2 + lVar1,uVar4,uVar5);
    if (*(int *)local_40 == -1) {
      return;
    }
    local_60 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_100da564d;
  }
  local_48 = 0;
  local_58 = *(QArrayData **)(param_1 + 0x20);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  FUN_100d98ee0(&local_50,&local_58);
  uVar4 = FUN_100d9d560(&local_50,&local_48,0,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da5496;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100da5496:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da54c6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100da54c6:
  if (*(int *)(param_1 + 0x3c) < 0) {
    QString::toUtf8();
    pQVar2 = local_60;
    lVar1 = *(long *)(local_60 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    uVar5 = FUN_100dddcf0(uVar4);
    FUN_100df99c0("","cmn_utils",0,"Error: Can\'t get size of dir[%s] by error [%#x][%s]",
                  pQVar2 + lVar1,uVar4,uVar5);
    if (*(int *)local_60 == -1) {
      return;
    }
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
LAB_100da564d:
    QArrayData::deallocate(local_60,1,8);
    return;
  }
  if (*(ulong *)(param_1 + 0x28) < local_48) {
    QDir::QDir(local_78,this);
    QDir::absolutePath();
    QString::operator=(this,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100da5539;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_100da5539:
    uVar4 = FUN_100da58e0(param_1,this,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    QDir::~QDir(local_78);
    return;
  }
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
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da56e0;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_100da56e0:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) goto LAB_100da5710;
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100da5710:
  *(undefined4 *)(param_1 + 0x3c) = 0x80000373;
  return;
}

