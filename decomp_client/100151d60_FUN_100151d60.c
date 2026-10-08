
void FUN_100151d60(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  bool bVar5;
  QArrayData *local_78;
  QHostAddress local_70 [8];
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  uint local_50;
  undefined1 local_48 [8];
  QString local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021fcfd0;
  puVar1 = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x20) = puVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  QHostInfo::localHostName();
  QString::operator=((QString *)(param_1 + 0x18),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100151df7;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100151df7:
  QNetworkInterface::allAddresses();
  FUN_10008d4c0(&local_68,local_48);
  local_60 = (undefined8 *)(local_68 + 0x10 + (long)*(int *)(local_68 + 8) * 8);
  local_58 = (undefined8 *)(local_68 + 0x10 + (long)*(int *)(local_68 + 0xc) * 8);
  local_50 = 1;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      QHostAddress::QHostAddress(local_70,(QHostAddress *)*local_60);
      if (local_50 != 0) {
        iVar2 = QHostAddress::protocol();
        if (iVar2 == 0) {
          QHostAddress::toString();
          FUN_1000341d0(param_1 + 0x20,&local_78);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100151ec0;
            }
            QArrayData::deallocate(local_78,2,8);
          }
        }
LAB_100151ec0:
        local_50 = 0;
      }
      QHostAddress::~QHostAddress(local_70);
      local_60 = local_60 + 1;
      uVar4 = local_50 ^ 1;
      bVar5 = local_50 != 1;
      local_50 = uVar4;
    } while ((bVar5) && (local_60 != local_58));
  }
  FUN_10008c780(&local_68);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2afterServerAdded(const QString&)",
                "2serverAdded(const QString&)",0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2beforeServerRemoved(const QString&)",
                "2beforeServerRemoved(const QString&)",0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2afterServerRemoved(const QString&)",
                "2serverRemoved(const QString&)",0);
  FUN_10008c780(local_48);
  return;
}

