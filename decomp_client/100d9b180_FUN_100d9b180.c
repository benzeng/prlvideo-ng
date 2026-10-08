
undefined1 FUN_100d9b180(QString *param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  byte bVar8;
  QArrayData *pQVar9;
  gid_t gVar10;
  uid_t uVar11;
  QArrayData *local_a8;
  QArrayData *local_a0;
  long local_98 [2];
  QTypedArrayData<unsigned_short> *local_88;
  QArrayData *local_80;
  QTypedArrayData<unsigned_short> *local_78;
  QArrayData *local_70;
  QTypedArrayData<unsigned_short> *local_68;
  QArrayData *local_60;
  undefined1 local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return 0;
  }
  cVar1 = FUN_100d97590(param_2);
  uVar11 = 0xffffffff;
  gVar10 = 0xffffffff;
  if (cVar1 == '\0') {
    FUN_100d97200(param_2);
    QString::toUtf8();
    lVar5 = _getpwnam(local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d9b20f;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100d9b20f:
    if (lVar5 == 0) {
      QString::toUtf8();
      pQVar9 = local_48 + *(long *)(local_48 + 0x10);
      FUN_100d97200(param_2);
      QString::toUtf8();
      FUN_100df99c0("","cmn_utils",0,"Can\'t create blank file \'%s\', user not found: %s",pQVar9,
                    local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d9b455;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_100d9b455:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) {
            return 0;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_48,1,8);
      }
      return 0;
    }
    uVar11 = *(uid_t *)(lVar5 + 0x10);
    gVar10 = *(gid_t *)(lVar5 + 0x14);
  }
  FUN_100d98070(local_58,param_2);
  cVar1 = FUN_100d98080(local_58);
  if (cVar1 == '\0') {
    FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","_wrapper.wasImpersonated()"
                  ,"CFileHelper.cpp",0x28c,"CreateBlankFile");
  }
  cVar1 = FUN_100d98080(local_58);
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_100d9b699;
  }
  local_68 = param_1->field0_0x0;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  FUN_100d98ee0(&local_60,&local_68);
  cVar1 = FUN_100d99440(&local_60,param_2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9b2f1;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d9b2f1:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9b321;
    }
    QArrayData::deallocate((QArrayData *)local_68,2,8);
  }
LAB_100d9b321:
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_100d9b699;
  }
  local_78 = param_1->field0_0x0;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  FUN_100d98ee0(&local_70,&local_78);
  bVar8 = 1;
  if ((*(int *)(local_70 + 4) != 0) && (uVar6 = FUN_100d970c0(param_2,&local_70), (uVar6 & 4) != 0))
  {
    local_88 = param_1->field0_0x0;
    if (1 < *(int *)local_88 + 1U) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
    FUN_100d98ee0(&local_80,&local_88);
    if (*(int *)(local_80 + 4) == 0) {
      bVar8 = 0;
    }
    else {
      uVar3 = FUN_100d970c0(param_2,&local_80);
      bVar8 = (byte)((uVar3 & 8) >> 3);
    }
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d9b4ba;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100d9b4ba:
    bVar8 = bVar8 ^ 1;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d9b4ed;
      }
      QArrayData::deallocate((QArrayData *)local_88,2,8);
    }
  }
LAB_100d9b4ed:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9b51d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100d9b51d:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9b54d;
    }
    QArrayData::deallocate((QArrayData *)local_78,2,8);
  }
LAB_100d9b54d:
  if (bVar8 != 0) {
    uVar2 = 0;
    goto LAB_100d9b699;
  }
  QFile::QFile((QFile *)local_98,param_1);
  QFile::open(local_98,3);
  uVar2 = QIODevice::isWritable();
  (**(code **)(local_98[0] + 0x70))(local_98);
  cVar1 = FUN_100d97590(param_2);
  if (cVar1 == '\0') {
    QString::toUtf8();
    iVar4 = _chown((char *)(local_a0 + *(long *)(local_a0 + 0x10)),uVar11,gVar10);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d9b608;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
LAB_100d9b608:
    if (iVar4 == -1) {
      QString::toUtf8();
      lVar5 = *(long *)(local_a8 + 0x10);
      piVar7 = ___error();
      FUN_100df99c0("","cmn_utils",0,"chown call was failed for file \'%s\' with error code %d",
                    local_a8 + lVar5,*piVar7);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d9b68d;
        }
        QArrayData::deallocate(local_a8,1,8);
      }
    }
  }
LAB_100d9b68d:
  QFile::~QFile((QFile *)local_98);
LAB_100d9b699:
  FUN_100d980a0(local_58);
  return uVar2;
}

