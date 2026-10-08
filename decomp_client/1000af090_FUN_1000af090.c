
undefined8 FUN_1000af090(undefined8 param_1,undefined8 param_2,undefined4 param_3,QString *param_4)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QFileInfo local_b8 [8];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined8 *local_78;
  undefined4 local_70;
  QArrayData *local_6c;
  QArrayData *local_64;
  QArrayData *local_5c;
  undefined8 local_54;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_2);
  if (lVar4 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get Vm for vmUuid=\"%s\"",
                  local_80 + *(long *)(local_80 + 0x10));
    uVar3 = 0x80000009;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000af4c4;
      }
      QArrayData::deallocate(local_80,1,8);
    }
  }
  else {
    FUN_100188480(&local_90,lVar4);
    QString::toUtf8();
    QByteArray::operator=((QByteArray *)&local_38,(QByteArray *)&local_88);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000af136;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_1000af136:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000af16c;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1000af16c:
    FUN_10018d830(&local_a0,lVar4);
    QString::toUtf8();
    QByteArray::operator=((QByteArray *)&local_40,(QByteArray *)&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000af1d4;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_1000af1d4:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000af20a;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1000af20a:
    FUN_10018d860(&local_c0,lVar4);
    QFileInfo::QFileInfo(local_b8,&local_c0);
    QFileInfo::path();
    QString::toUtf8();
    QByteArray::operator=((QByteArray *)&local_48,(QByteArray *)&local_a8);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000af298;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_1000af298:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000af2ce;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1000af2ce:
    QFileInfo::~QFileInfo(local_b8);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_29 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000af310;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_1000af310:
    local_6c = local_38 + *(long *)(local_38 + 0x10);
    local_64 = local_40 + *(long *)(local_40 + 0x10);
    local_5c = local_48 + *(long *)(local_48 + 0x10);
    local_54 = 0;
    local_70 = param_3;
    iVar2 = _PxAppFolderFind(&local_70,&local_78);
    if (iVar2 == 0) {
      pcVar1 = (char *)*local_78;
      if (pcVar1 != (char *)0x0) {
        _strlen(pcVar1);
      }
      QString::fromUtf8_helper((char *)&local_d0,(int)pcVar1);
      QString::normalized(&local_c8,&local_d0,1,0);
      QString::operator=(param_4,&local_c8);
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_29 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000af482;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
LAB_1000af482:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_29 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000af4b8;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1000af4b8:
      uVar3 = 0;
      _PxAppFree(local_78);
    }
    else {
      uVar3 = 0x80000009;
      FUN_100df99c0("SGAC","prl_client_app",0,"PxAppFolderFind() err %#x",iVar2);
    }
  }
LAB_1000af4c4:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000af4f4;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1000af4f4:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000af524;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000af524:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar3;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return uVar3;
}

