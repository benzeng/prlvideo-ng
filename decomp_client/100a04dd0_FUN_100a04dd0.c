
undefined1 FUN_100a04dd0(undefined8 param_1,QString *param_2,QString *param_3,QString *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 uVar6;
  QString local_88;
  QString local_80;
  QString local_78;
  QArrayData *local_70;
  uint *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QRegExp local_48 [8];
  QArrayData *local_40;
  QRegExp local_38 [15];
  undefined1 local_29;
  
  local_40 = (QArrayData *)
             QString::fromAscii_helper
                       ("^com\\.parallels\\.kext\\..+\\s+(\\d+)\\.\\d+\\s+(\\d+\\.\\d+)\\s*$",0x37);
  QRegExp::QRegExp(local_38,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a04e44;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a04e44:
  QRegExp::setMinimal(SUB81(local_38,0));
  local_50 = (QArrayData *)
             QString::fromAscii_helper
                       ("^com\\.parallels\\.kext\\..+\\s+(\\d+)\\.\\d+\\.\\d+\\s+(\\d+)\\s*$",0x37);
  QRegExp::QRegExp(local_48,&local_50,1,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a04eab;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a04eab:
  QRegExp::setMinimal(SUB81(local_48,0));
  iVar2 = QRegExp::indexIn(local_38,param_1,0,0);
  if (iVar2 == -1) {
    iVar2 = QRegExp::indexIn(local_48,param_1,0,0);
    if (iVar2 == -1) {
      uVar6 = 0;
      goto LAB_100a05173;
    }
    QRegExp::cap((int)&local_78);
    QString::operator=(param_2,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_29 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a05016;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100a05016:
    QRegExp::cap((int)&local_80);
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_4,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_29 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a0506f;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_100a0506f:
    QString::operator=(param_3,&local_80);
    uVar6 = 1;
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a05173;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
    goto LAB_100a05173;
  }
  QRegExp::cap((int)&local_58);
  QString::operator=(param_2,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a04f20;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100a04f20:
  QRegExp::cap((int)&local_60);
  local_70 = (QArrayData *)QString::fromAscii_helper(".",1);
  QString::split(&local_68,&local_60,&local_70,0,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a04f90;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100a04f90:
  uVar1 = local_68[3];
  uVar3 = local_68[2];
  lVar5 = (long)(int)uVar3;
  if ((int)((int)uVar1 - lVar5) < 2) {
    uVar6 = 0;
  }
  else {
    if (1 < *local_68) {
      FUN_100036c40(&local_68,local_68[1]);
      uVar3 = local_68[2];
    }
    QString::operator=(param_4,(QString *)
                               (local_68 + ((long)(int)uVar3 + ((int)uVar1 - lVar5) + -1) * 2 + 4));
    uVar1 = local_68[3];
    uVar3 = local_68[2];
    uVar4 = uVar3;
    if (1 < *local_68) {
      FUN_100036c40(&local_68,local_68[1]);
      uVar4 = local_68[2];
    }
    uVar6 = 1;
    QString::operator=(param_3,(QString *)
                               (local_68 +
                               ((long)(int)((uVar1 - 2) - uVar3) + (long)(int)uVar4) * 2 + 4));
  }
  FUN_100039a80(&local_68);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a05173;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a05173:
  QRegExp::~QRegExp(local_48);
  QRegExp::~QRegExp(local_38);
  return uVar6;
}

