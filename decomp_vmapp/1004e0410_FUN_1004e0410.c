
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_1004e0410(undefined8 *param_1,undefined8 param_2,long param_3,uint param_4,uint param_5,
             undefined4 *param_6,int param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_7c;
  QString local_78;
  undefined1 local_6d;
  undefined4 local_6c;
  long local_68 [2];
  QString local_58;
  QString local_50;
  QFileInfo local_48 [8];
  QString local_40;
  uint local_38;
  undefined1 local_31;
  
  *param_1 = 0;
  local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_3 + 0x18);
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  cVar3 = QString::endsWith(&local_40,0x2f,1);
  if (cVar3 == '\0') {
    QString::append(&local_40,0x2f);
  }
  QString::append(&local_40);
  uVar6 = param_4 + 1 & 3;
  uVar8 = uVar6 | 6;
  if ((param_4 & 8) == 0) {
    uVar8 = uVar6;
  }
  uVar6 = uVar8 | 10;
  if ((param_4 & 0x400) == 0) {
    uVar6 = uVar8;
  }
  QFileInfo::QFileInfo(local_48,&local_40);
  cVar3 = QFileInfo::exists();
  if (cVar3 == '\0') {
    cVar4 = QFileInfo::isSymLink();
    cVar3 = *(char *)(param_3 + 0x30);
    if (cVar4 != '\0') {
      if ((uVar6 & 2) != 0) goto joined_r0x0001004e052b;
      goto LAB_1004e0531;
    }
    if (cVar3 != '\0') {
      uVar9 = 0xf0000007;
      goto LAB_1004e0904;
    }
    uVar9 = 0xf0000014;
    if ((param_4 & 0x200) == 0) goto LAB_1004e0904;
    plVar7 = (long *)0x0;
    if (*(long *)(param_3 + 0x80) != 0) {
      plVar7 = *(long **)(*(long *)(param_3 + 0x80) + 0x10);
    }
    cVar3 = (**(code **)(*plVar7 + 0x30))(plVar7,param_2);
    if (cVar3 == '\0') {
      uVar9 = 0xf0000007;
      goto LAB_1004e0904;
    }
    plVar7 = (long *)0x0;
    if (*(long *)(param_3 + 0x80) != 0) {
      plVar7 = *(long **)(*(long *)(param_3 + 0x80) + 0x10);
    }
    cVar3 = (**(code **)(*plVar7 + 0x38))(plVar7,param_2);
    uVar9 = 0xf0000007;
    if (cVar3 == '\0') goto LAB_1004e0904;
    uVar9 = 0xf000001c;
    if ((param_5 & 0xf000) == 0x8000) {
      QFile::QFile((QFile *)local_68,&local_40);
      cVar3 = QFile::open(local_68,uVar6);
      if (cVar3 == '\0') {
        QFile::~QFile((QFile *)local_68);
        goto LAB_1004e0904;
      }
      uVar8 = (param_5 & 0xffff) * 2;
      uVar6 = (param_5 & 0xffff) << 6;
      local_38 = uVar6 & 0x4000 |
                 uVar6 & 0x2000 |
                 uVar6 & 0x1000 | uVar8 & 0x40 | uVar8 & 0x20 | uVar8 & 0x10 | param_5 & 7;
      FUN_1004e2b70(param_3 + 0x88,param_2,&local_38);
      (**(code **)(local_68[0] + 0x70))(local_68);
      QFile::~QFile((QFile *)local_68);
    }
    else {
      if ((param_5 & 0xf000) != 0x4000) goto LAB_1004e0904;
      local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      QDir::QDir((QDir *)&local_50,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004e08cb;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1004e08cb:
      cVar3 = QDir::mkdir(&local_50);
      QDir::~QDir((QDir *)&local_50);
      if (cVar3 == '\0') {
        uVar9 = 0xf000001c;
        goto LAB_1004e0904;
      }
    }
  }
  else {
    if ((uVar6 & 2) != 0) {
      cVar3 = *(char *)(param_3 + 0x30);
joined_r0x0001004e052b:
      uVar9 = 0xf0000007;
      if (cVar3 != '\0') goto LAB_1004e0904;
    }
LAB_1004e0531:
    if (((param_4 & 0xa00) == 0xa00) && (uVar9 = 0xf0000017, (param_5 & 0xf000) != 0))
    goto LAB_1004e0904;
    bVar5 = QFileInfo::isDir();
    uVar9 = 0xf0000015;
    if (((param_4 & 0x100000) == 0 | bVar5) != 1) goto LAB_1004e0904;
    local_6c = 0;
    local_6d = 0;
    QString::toUtf8_helper(&local_78);
    FUN_100761b20((QArrayData *)(local_78.field0_0x0 + *(long *)(local_78.field0_0x0 + 0x10)),
                  &local_6c,0,&local_6d);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004e05e3;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,1,8);
    }
LAB_1004e05e3:
    cVar3 = FUN_100761c50(local_6c);
    if ((cVar3 == '\0') && (cVar3 = FUN_100761c10(local_6c), cVar3 == '\0')) {
      cVar3 = FUN_100761c30(local_6c);
      uVar9 = 0xf0000007;
      if (cVar3 == '\0') goto LAB_1004e0904;
    }
    plVar7 = operator_new(0x50);
    FUN_1004e2360(plVar7,&local_40,param_2);
    *param_1 = plVar7;
    cVar3 = QFileInfo::isDir();
    if (cVar3 == '\0') {
      cVar3 = QFile::open(plVar7 + 3,(uVar6 & 7) == 2 | uVar6);
      if (cVar3 == '\0') {
        *param_1 = 0;
        LOCK();
        plVar1 = plVar7 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        uVar9 = 0xf000001c;
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        goto LAB_1004e0904;
      }
      *(uint *)(plVar7 + 7) = *(uint *)(plVar7 + 7) | uVar6;
    }
    if (param_7 == -1) {
      param_7 = FUN_1004c6130(*(long *)(param_3 + 0x50) + 0x40);
    }
    *(int *)((long)plVar7 + 0x3c) = param_7;
    local_7c = 0;
    cVar3 = FUN_1004e2700(param_3,param_2,&local_7c);
    if (cVar3 != '\0') {
      QFile::setPermissions(plVar7 + 3,local_7c);
    }
  }
  uVar9 = 0;
LAB_1004e0904:
  QFileInfo::~QFileInfo(local_48);
  *param_6 = uVar9;
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

