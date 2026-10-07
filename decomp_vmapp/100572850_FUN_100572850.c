
undefined8 * FUN_100572850(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  QString QVar7;
  QArrayData *local_78;
  QString local_70;
  QFileInfo local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QFileInfo local_50 [8];
  QDir local_48 [8];
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar3 = FUN_1005b6d20();
  puVar1 = PTR_shared_null_100ba20d0;
  if (iVar3 == 0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    plVar5 = (long *)0x0;
    if (*(long *)(param_2 + 8) != 0) {
      plVar5 = *(long **)(*(long *)(param_2 + 8) + 0x10);
    }
    cVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,&local_40);
    if (cVar2 == '\0') {
      *param_1 = puVar1;
    }
    else {
      QFileInfo::QFileInfo(local_50,&local_40);
      QFileInfo::dir();
      QDir::dirName();
      QDir::~QDir(local_48);
      QFileInfo::~QFileInfo(local_50);
    }
    if (*(int *)local_40.field0_0x0 == -1) {
      return param_1;
    }
    QVar7.field0_0x0 = local_40.field0_0x0;
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    goto LAB_100572b35;
  }
  iVar3 = FUN_1005b6d20();
  puVar1 = PTR_shared_null_100ba20d0;
  if (iVar3 != 1) {
    uVar6 = 0;
    if (*(long *)(param_2 + 8) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x10);
    }
    uVar4 = FUN_1005b6d20(uVar6);
    FUN_1008e3970("","vdisk",0,"Error: unsupported disk format %d",uVar4);
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0xee9,
                  "GetName");
    *param_1 = PTR_shared_null_100ba20d0;
    return param_1;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  plVar5 = (long *)0x0;
  if (*(long *)(param_2 + 8) != 0) {
    plVar5 = *(long **)(*(long *)(param_2 + 8) + 0x10);
  }
  cVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,&local_58);
  if (cVar2 == '\0') {
    *param_1 = puVar1;
  }
  else {
    QFileInfo::QFileInfo(local_68,&local_58);
    QFileInfo::fileName();
    QFileInfo::~QFileInfo(local_68);
    local_78 = (QArrayData *)QString::fromAscii_helper("(-\\d{6})?\\.vmdk$",0x10);
    QRegExp::QRegExp((QRegExp *)&local_70,&local_78,1,0);
    local_38 = (QArrayData *)puVar1;
    QString::replace((QRegExp *)&local_60,&local_70);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10057295e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10057295e:
    QRegExp::~QRegExp((QRegExp *)&local_70);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100572997;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100572997:
    *param_1 = local_60;
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100572b14;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_100572b14:
  if (*(int *)local_58.field0_0x0 == -1) {
    return param_1;
  }
  QVar7.field0_0x0 = local_58.field0_0x0;
  if (*(int *)local_58.field0_0x0 != 0) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_58.field0_0x0 != 0) {
      return param_1;
    }
    local_29 = 0;
  }
LAB_100572b35:
  QArrayData::deallocate((QArrayData *)QVar7.field0_0x0,2,8);
  return param_1;
}

