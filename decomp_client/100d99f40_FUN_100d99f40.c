
undefined1 FUN_100d99f40(undefined8 *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  gid_t gVar6;
  byte bVar7;
  uid_t uVar8;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  undefined1 local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return 0;
  }
  cVar1 = FUN_100d97590(param_2);
  uVar8 = 0xffffffff;
  gVar6 = 0xffffffff;
  if (cVar1 == '\0') {
    FUN_100d97200(param_2);
    QString::toUtf8();
    lVar3 = _getpwnam(local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d99fcc;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100d99fcc:
    if (lVar3 == 0) {
      return 0;
    }
    uVar8 = *(uid_t *)(lVar3 + 0x10);
    gVar6 = *(gid_t *)(lVar3 + 0x14);
  }
  local_50 = (QArrayData *)*param_1;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  FUN_100d98ee0(&local_48,&local_50);
  cVar1 = FUN_100d98500(&local_48,param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9a040;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d9a040:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9a070;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d9a070:
  if (cVar1 == '\0') {
    return 0;
  }
  local_60 = (QArrayData *)*param_1;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_31 = *(int *)local_60 != 0;
    UNLOCK();
  }
  FUN_100d98ee0(&local_58,&local_60);
  bVar7 = 1;
  if ((*(int *)(local_58 + 4) != 0) && (uVar4 = FUN_100d970c0(param_2,&local_58), (uVar4 & 4) != 0))
  {
    local_70 = (QArrayData *)*param_1;
    if (1 < *(int *)local_70 + 1U) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
    FUN_100d98ee0(&local_68,&local_70);
    if (*(int *)(local_68 + 4) == 0) {
      bVar7 = 0;
    }
    else {
      uVar2 = FUN_100d970c0(param_2,&local_68);
      bVar7 = (byte)((uVar2 & 8) >> 3);
    }
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d9a159;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d9a159:
    bVar7 = bVar7 ^ 1;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d9a18d;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_100d9a18d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9a1bd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d9a1bd:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9a1ed;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d9a1ed:
  if (bVar7 != 0) {
    return 0;
  }
  FUN_100d98070(local_78,param_2);
  cVar1 = FUN_100d98080(local_78);
  if (cVar1 == '\0') {
    FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","_wrapper.wasImpersonated()"
                  ,"CFileHelper.cpp",0x2e8,"CreateDirectoryPath");
  }
  cVar1 = FUN_100d98080(local_78);
  if (cVar1 == '\0') {
    uVar5 = 0;
    goto LAB_100d9a355;
  }
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_80,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9a2b6;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100d9a2b6:
  cVar1 = QDir::mkdir(&local_80);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    cVar1 = FUN_100d97590(param_2);
    uVar5 = 1;
    if (cVar1 == '\0') {
      QString::toUtf8();
      _chown((char *)(local_90 + *(long *)(local_90 + 0x10)),uVar8,gVar6);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d9a34c;
        }
        QArrayData::deallocate(local_90,1,8);
      }
    }
  }
LAB_100d9a34c:
  QDir::~QDir((QDir *)&local_80);
LAB_100d9a355:
  FUN_100d980a0(local_78);
  return uVar5;
}

