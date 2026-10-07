
undefined4 FUN_100547a80(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  QArrayData *local_70;
  QFileInfo local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_50 [6];
  undefined1 local_4a;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)param_1[1];
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  FUN_100761460(local_50);
  puVar3 = PTR_shared_null_100ba20d0;
  local_4a = 0;
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemoryMappedPlain::open_existing(%s)",
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100547b29;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100547b29:
  cVar4 = FUN_100545710((QString *)(param_1 + 1),param_1[2],param_1[3]);
  if (cVar4 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CGuestMemoryMappedPlain::open_existing(%s) invalid",
                  local_60 + *(long *)(local_60 + 0x10));
    uVar7 = 1;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100547cb8;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
  else {
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    QFileInfo::QFileInfo(local_68,(QString *)(param_1 + 1));
    iVar5 = FUN_100544850(param_1 + 10,lVar2 + lVar1,local_68,0,1);
    QFileInfo::~QFileInfo(local_68);
    if (iVar5 == 0) {
      FUN_100544e10(param_1 + 10,1,0);
      *(undefined1 *)((long)param_1 + 0x69) = 1;
      cVar4 = FUN_1005477b0(param_1,1);
      uVar6 = 4;
      uVar7 = 0;
      if (cVar4 != '\0') goto LAB_100547cb8;
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,
                    "CGuestMemoryMappedPlain::open_existing(%s) failed to init a swap object %d",
                    local_70 + *(long *)(local_70 + 0x10),iVar5);
      uVar6 = 1;
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100547ca6;
        }
        QArrayData::deallocate(local_70,1,8);
      }
    }
LAB_100547ca6:
    (**(code **)(*param_1 + 0x20))(param_1,0);
    uVar7 = uVar6;
  }
LAB_100547cb8:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100547ce8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100547ce8:
  FUN_1007614a0(local_50);
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100547d24;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_100547d24:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar7;
}

