
undefined8 FUN_100547f40(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  QArrayData *local_58;
  QFileInfo local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemoryMappedPlain::attach_existing(%s)",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100547fbf;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100547fbf:
  cVar3 = FUN_100545710((QString *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CGuestMemoryMappedPlain::attach_existing(%s) invalid",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return 1;
    }
    local_58 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 1;
      }
      local_31 = 0;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x10);
    QFileInfo::QFileInfo(local_50,(QString *)(param_1 + 8));
    iVar4 = FUN_100544850(param_1 + 0x50,lVar1 + lVar2,local_50,param_2,1);
    QFileInfo::~QFileInfo(local_50);
    if (iVar4 == 0) {
      cVar3 = FUN_1005477b0(param_1,0);
      if (cVar3 != '\0') {
        return 0;
      }
      FUN_1005446a0(param_1 + 0x50);
      return 4;
    }
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,
                  "CGuestMemoryMappedPlain::attach_existing(%s) failed to init a swap object %d",
                  local_58 + *(long *)(local_58 + 0x10),iVar4);
    if (*(int *)local_58 == -1) {
      return 1;
    }
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 1;
      }
      local_31 = 0;
    }
  }
  QArrayData::deallocate(local_58,1,8);
  return 1;
}

