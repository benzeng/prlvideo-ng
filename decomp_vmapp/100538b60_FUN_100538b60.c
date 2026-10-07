
char FUN_100538b60(long param_1,undefined4 param_2,undefined8 *param_3,uint param_4,int param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar1 = FUN_10053ec60(param_1 + 0x30);
  if (cVar1 != '\0') {
    if (DAT_1011b55f8 < 2) {
      return '\x01';
    }
    FUN_1008e3970("","InvSharingHost",2,"Already mounted: id = %d",param_2);
    return '\x01';
  }
  if (param_5 == 1) {
    local_48 = (QArrayData *)QString::fromAscii_helper("OneDrive",8);
  }
  else {
    iVar3 = QString::lastIndexOf(param_3,0x5c,0xffffffff,1);
    if (iVar3 < 1) {
      local_40 = (QArrayData *)*param_3;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      puVar4 = (undefined8 *)QString::remove(&local_40,0x3a,1);
      local_48 = (QArrayData *)*puVar4;
      if (1 < *(int *)local_48 + 1U) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
      }
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100538ca4;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
    else {
      QString::mid((int)&local_48,(int)param_3);
    }
  }
LAB_100538ca4:
  if (*(int *)(local_48 + 4) == 0) {
    cVar1 = '\0';
    FUN_1008e3970("","InvSharingHost",0,"volume name is empty");
    goto LAB_100539119;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QDir::QDir((QDir *)&local_50,&local_58);
  cVar1 = QDir::mkpath(&local_50);
  QDir::~QDir((QDir *)&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100538d19;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100538d19:
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","InvSharingHost",0,"failed to create root for mountpoints: %s",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 == -1) {
      cVar1 = '\0';
    }
    else {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) {
          cVar1 = '\0';
          goto LAB_100539119;
        }
      }
      QArrayData::deallocate(local_60,1,8);
      cVar1 = '\0';
    }
    goto LAB_100539119;
  }
  FUN_10053f710(&local_68,param_1,&local_48);
  if (*(int *)(local_68 + 4) == 0) {
    cVar1 = '\0';
  }
  else {
    FUN_10053fdb0(&local_70,param_1,&local_48);
    if ((((param_4 & 1) == 0) && (((param_4 & 2) == 0 || (*(char *)(param_1 + 0x2a) == '\0')))) &&
       (((param_4 & 4) == 0 || (*(char *)(param_1 + 0x2b) == '\0')))) {
      uVar5 = 1;
      if (((param_4 & 8) != 0) && (*(long *)(DAT_1011c3698 + 0x118) != 0)) {
        CDispCommonPreferences::getWorkspacePreferences();
        cVar1 = CDispWorkspacePreferences::isMountNTFSToHostOnConnectionToVm();
        if (cVar1 != '\0') goto LAB_100538db0;
      }
    }
    else {
LAB_100538db0:
      uVar5 = 5;
      if (*(char *)(param_1 + 0x28) != '\0') {
        uVar5 = 7;
      }
    }
    if (*(char *)(param_1 + 0x29) != '\0') {
      uVar5 = uVar5 | 8;
    }
    cVar1 = FUN_10053efa0(param_1 + 0x30,param_2,&local_68,&local_70,param_3,uVar5);
    if (cVar1 == '\0') {
      FUN_1008e3970("","InvSharingHost",0,"mount failed");
      QString::toUtf8();
      _rmdir((char *)(local_a0 + *(long *)(local_a0 + 0x10)));
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005390a1;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
    }
    else {
      local_78.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("mdutil -ioff ",0xd);
      QString::append(&local_78);
      _sleep(2);
      QString::toUtf8();
      _system((char *)(local_80 + *(long *)(local_80 + 0x10)));
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100538e66;
        }
        QArrayData::deallocate(local_80,1,8);
      }
LAB_100538e66:
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100538e96;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_100538e96:
      local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      QDir::QDir((QDir *)&local_88,&local_90);
      QDir::mkpath(&local_88);
      QDir::~QDir((QDir *)&local_88);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100538f00;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_100538f00:
      FUN_10053ff90(&local_98,param_1,&local_48);
      cVar2 = FUN_100540190(&local_98,&local_68);
      if (cVar2 == '\0' && 0 < DAT_1011b55f8) {
        FUN_1008e3970("","InvSharingHost",1,"couldn\'t create a symlink to a share");
      }
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005390a1;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
LAB_1005390a1:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005390d1;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_1005390d1:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100539119;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100539119:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return cVar1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return cVar1;
}

