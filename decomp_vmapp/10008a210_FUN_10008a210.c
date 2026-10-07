
undefined8 FUN_10008a210(long param_1,undefined8 param_2,long param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  *param_4 = 0;
  *param_5 = param_3 + 0x9600000;
  QFileInfo::dir();
  cVar2 = FUN_100089e20(param_1,local_40);
  QDir::~QDir(local_40);
  if (cVar2 == '\0') {
    QFileInfo::absolutePath();
    QString::toLocal8Bit();
    FUN_1008e3970("","vm",0,"Swap dir is not valid (%s)",local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10008a41e;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10008a41e:
    uVar4 = 0x80000009;
    if (*(int *)local_50 == -1) {
      return 0x80000009;
    }
    local_78 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 0x80000009;
      }
      local_31 = 0;
    }
    goto LAB_10008a5f0;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    return 0;
  }
  uVar5 = 0;
  do {
    QFileInfo::absolutePath();
    iVar3 = FUN_1006f5120(&local_58,param_4,0,0);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10008a2e1;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10008a2e1:
    if (iVar3 != -0x7ffffbb0) {
      if (-1 < iVar3) {
        if (*param_5 <= *param_4) {
          return 0;
        }
        QFileInfo::absolutePath();
        QString::toLocal8Bit();
        FUN_1008e3970("","vm",0,"Not enough space on the drive %s. %llu < %llu",
                      local_80 + *(long *)(local_80 + 0x10),*param_4,*param_5);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10008a508;
          }
          QArrayData::deallocate(local_80,1,8);
        }
LAB_10008a508:
        uVar4 = 0x80000297;
        if (*(int *)local_88 == -1) {
          return 0x80000297;
        }
        local_78 = local_88;
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          UNLOCK();
          if (*(int *)local_88 != 0) {
            return 0x80000297;
          }
          local_31 = 0;
        }
        goto LAB_10008a5f0;
      }
      break;
    }
    QFileInfo::absolutePath();
    QString::toLocal8Bit();
    FUN_1008e3970("","vm",0,"SwapMem::GetDiskAvailableSpace wants to try again(%s)",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10008a35b;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_10008a35b:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10008a38b;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10008a38b:
    FUN_1007685b0(1000);
    uVar5 = uVar5 + 1;
    iVar3 = -0x7ffffbb0;
  } while (uVar5 < 10);
  QFileInfo::absolutePath();
  QString::toLocal8Bit();
  lVar1 = *(long *)(local_70 + 0x10);
  uVar4 = FUN_1007dd120(iVar3);
  FUN_1008e3970("","vm",0,"Couldn\'t to determine available disk space(%s): %.8X \'%s\'",
                local_70 + lVar1,iVar3,uVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008a5c9;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10008a5c9:
  uVar4 = 0x80000005;
  if (*(int *)local_78 == -1) {
    return 0x80000005;
  }
  if (*(int *)local_78 != 0) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + -1;
    UNLOCK();
    if (*(int *)local_78 != 0) {
      return 0x80000005;
    }
    local_31 = 0;
  }
LAB_10008a5f0:
  QArrayData::deallocate(local_78,2,8);
  return uVar4;
}

