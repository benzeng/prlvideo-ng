
int FUN_10059da00(int *param_1,QString *param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  QString local_68;
  QTypedArrayData<unsigned_short> *local_60;
  QArrayData *local_58;
  QFileInfo local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*param_1 != 7) {
    if (*param_1 == 6) {
      QString::operator=(param_2,(QString *)(param_1 + 6));
      return 0;
    }
    FUN_10059c790(&local_40);
    QString::toLocal8Bit();
    FUN_1008e3970("","vdisk",0,"Errorneous call to get BSD name from type %s",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10059dbc5;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_10059dbc5:
    iVar1 = -0x7ffffffd;
    if (*(int *)local_40 == -1) {
      return -0x7ffffffd;
    }
    pQVar2 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return -0x7ffffffd;
      }
      local_29 = 0;
    }
    goto LAB_10059dca3;
  }
  QFileInfo::QFileInfo(local_50,(QString *)(param_1 + 6));
  QFileInfo::fileName();
  iVar1 = FUN_100786550(&local_48,param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10059da7e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10059da7e:
  QFileInfo::~QFileInfo(local_50);
  if (iVar1 < 0) {
    local_60 = ((QString *)(param_1 + 6))->field0_0x0;
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","vdisk",0,"Error converting UID [%s] to path",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10059dc78;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_10059dc78:
    if (*(int *)local_60 == -1) {
      return iVar1;
    }
    pQVar2 = (QArrayData *)local_60;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return iVar1;
      }
      local_29 = 0;
    }
    goto LAB_10059dca3;
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
  QString::append(&local_68);
  QString::operator=(param_2,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10059db03;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10059db03:
  iVar1 = 0;
  if (*(int *)pQVar2 == -1) {
    return 0;
  }
  if (*(int *)pQVar2 != 0) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + -1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
    if ((bool)local_29) {
      return 0;
    }
  }
LAB_10059dca3:
  QArrayData::deallocate(pQVar2,2,8);
  return iVar1;
}

