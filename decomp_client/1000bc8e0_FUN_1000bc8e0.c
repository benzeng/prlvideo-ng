
void FUN_1000bc8e0(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  QVariant local_e0;
  QArrayData *local_d0;
  int *local_c8 [4];
  QVariant local_a8 [2];
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  undefined *local_70;
  undefined4 local_68;
  QDataStream local_60 [32];
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar4 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(*param_2 + 0x10);
  }
  QByteArray::fromRawData((char *)&local_40,(int)lVar4);
  QDataStream::QDataStream(local_60,(QByteArray *)&local_40);
  QDataStream::skipRawData((int)local_60);
  puVar1 = PTR_shared_null_1021e1288;
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_70 = PTR_shared_null_1021e15e8;
  local_68 = *(undefined4 *)(lVar4 + 0x10);
  operator>>(local_60,&local_78);
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAA","prl_client_app",3,"LaunchApp: app=\"%s\", flags=0x%x",
                  local_80 + *(long *)(local_80 + 0x10),local_68);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000bc9d0;
      }
      QArrayData::deallocate(local_80,1,8);
    }
  }
LAB_1000bc9d0:
  iVar2 = *(int *)(lVar4 + 0x18);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
      operator>>(local_60,&local_88);
      FUN_1000341d0(&local_70,&local_88);
      if (2 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("SGAA","prl_client_app",3,"LaunchApp: docs[%i/%i]=\"%s\"",iVar5 + 1,iVar2,
                      local_90 + *(long *)(local_90 + 0x10));
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000bca90;
          }
          QArrayData::deallocate(local_90,1,8);
        }
      }
LAB_1000bca90:
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000bcac0;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_1000bcac0:
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  iVar2 = (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff);
  if (iVar2 == -2) {
LAB_1000bcc08:
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("SGAA","prl_client_app",2,"LaunchApp: VM in Isolation Mode");
    }
  }
  else if (iVar2 == 0) {
    local_d0 = (QArrayData *)
               QString::fromAscii_helper
                         ("1onSharedHostAppsEnabledAnswered(PRL_RESULT, Messaging::ButtonID, const QVariant &)"
                          ,0x53);
    if (DAT_10226cd88 == 0) {
      DAT_10226cd88 = FUN_1000bf7f0("CSharedApps::LaunchAppData",0xffffffffffffffff,1);
    }
    QVariant::QVariant(&local_e0,DAT_10226cd88,&local_78,0);
    FUN_100a1c600(local_c8,param_1,&local_d0,&local_e0);
    QVariant::~QVariant(&local_e0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000bcbab;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1000bcbab:
    uVar3 = FUN_1000bb930(param_1,local_c8,0);
    FUN_1000bc3e0(param_1,uVar3,&local_78);
    QVariant::~QVariant(local_a8);
    if (local_c8[0] != (int *)0x0) {
      LOCK();
      *local_c8[0] = *local_c8[0] + -1;
      local_31 = *local_c8[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_c8[0] != (int *)0x0)) {
        operator_delete(local_c8[0]);
      }
    }
  }
  else if (iVar2 == 2) goto LAB_1000bcc08;
  FUN_100039a80(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000bcc68;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1000bcc68:
  QDataStream::~QDataStream(local_60);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return;
}

