
undefined8 FUN_10042d840(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr *psVar3;
  size_t sVar4;
  undefined8 uVar5;
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QFileInfo local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  *param_1 = 0xb;
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_29 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)(local_80.field0_0x0 + 4) == 0) {
    QDir::tempPath();
    local_60 = (QArrayData *)QString::fromAscii_helper("%1/%2%3%4%5",0xb);
    QFileInfo::QFileInfo(local_70,&local_38);
    QFileInfo::canonicalFilePath();
    QString::arg(&local_58,&local_60,&local_68,0,0x20);
    local_78 = (QArrayData *)QString::fromAscii_helper(".prl_sock_",10);
    QString::arg(&local_50,&local_58,&local_78,0,0x20);
    iVar1 = _rand();
    QString::arg(&local_48,&local_50,(long)iVar1,0,10,0x20);
    iVar1 = _rand();
    QString::arg(&local_40,&local_48,(long)iVar1,0,10,0x20);
    iVar1 = _rand();
    QString::arg(&local_88,&local_40,(long)iVar1,0,10,0x20);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042d997;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10042d997:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042d9c7;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10042d9c7:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042d9f7;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10042d9f7:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042da27;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_10042da27:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042da57;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10042da57:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042da87;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10042da87:
    QFileInfo::~QFileInfo(local_70);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042dac0;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10042dac0:
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042daf0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_10042daf0:
    QString::operator=(&local_80,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_29 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042db2d;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
  }
LAB_10042db2d:
  iVar1 = _socket(1,1,0);
  param_1[4] = iVar1;
  if (iVar1 < 0) {
    uVar2 = FUN_100768f60();
    uVar5 = 0x80029000;
    psVar3 = (sockaddr *)0x0;
    FUN_1008e3970("","IPCFileOpenClnt",0,"Error creating socket: %d",uVar2);
  }
  else {
    psVar3 = (sockaddr *)FUN_1008e2de0(&local_80);
    if (psVar3 == (sockaddr *)0x0) {
      uVar5 = 0x80029000;
      psVar3 = (sockaddr *)0x0;
      FUN_1008e3970("","IPCFileOpenClnt",0,"Failed to allocate sockaddr_un");
    }
    else {
      iVar1 = param_1[4];
      sVar4 = _strlen(psVar3->sa_data);
      iVar1 = _bind(iVar1,psVar3,(int)sVar4 + 2);
      if (iVar1 < 0) {
        uVar2 = FUN_100768f60();
        uVar5 = 0x80029001;
        FUN_1008e3970("","IPCFileOpenClnt",0,"Bind() failed. Error %d",uVar2);
      }
      else {
        iVar1 = _listen(param_1[4],0x32);
        if (-1 < iVar1) {
          uVar5 = 0;
          QString::operator=((QString *)(param_1 + 2),&local_80);
          goto LAB_10042dc71;
        }
        uVar2 = FUN_100768f60();
        uVar5 = 0x80029002;
        FUN_1008e3970("","IPCFileOpenClnt",0,"listen() failed. Error %d",uVar2);
      }
    }
  }
  FUN_10042d6a0(param_1);
LAB_10042dc71:
  _free(psVar3);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_80.field0_0x0 != 0) {
        return uVar5;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
  return uVar5;
}

