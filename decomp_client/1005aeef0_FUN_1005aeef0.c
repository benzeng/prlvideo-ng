
void FUN_1005aeef0(QObject *param_1,undefined8 param_2)

{
  Node *pNVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  Node *pNVar7;
  Node *pNVar8;
  long *plVar9;
  undefined1 local_e0 [104];
  QArrayData *local_78;
  undefined4 local_70;
  Node *local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10221e220;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  QObject::connect(&local_40,param_2,"2currentPageIdChanged(int,int)",param_1,"1onPageChanged(int)",
                   0);
  bVar2 = 1;
  if (local_40 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,param_1,"2vmCustomized()",param_1,"1onVmCustomized()",0);
  if (bVar2 == 0) {
    if (local_48 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  else {
    cVar3 = '\0';
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_1001a61d0(pvVar5);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar5;
  }
  QObject::connect(&local_50,DAT_1023108e0,"2mountNotification(const QString&)",param_1,
                   "1onMountNotification(const QString&)",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_50 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_1001a61d0(pvVar5);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar5;
  }
  QObject::connect(&local_58,DAT_1023108e0,"2unmountNotification(const QString&)",param_1,
                   "1onUnmountNotification(const QString&)",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_58 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar6 = FUN_1005b86c0(uVar6);
  QObject::connect(&local_60,uVar6,"2serverHardwareChanged(const CHostHardwareInfo&)",param_1,
                   "1onServerHardwareChanged()",0);
  if ((cVar3 != '\0') && (local_60 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  FUN_1005af5b0(param_1);
  FUN_1002aed30(&local_68);
  pNVar7 = local_68;
  if (1 < *(uint *)(local_68 + 0x10)) {
    pNVar7 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)local_68,FUN_1002b5e60,0x2b5ef0,0x80
                               );
    if (*(int *)(local_68 + 0x10) != -1) {
      if (*(int *)(local_68 + 0x10) != 0) {
        LOCK();
        pNVar8 = local_68 + 0x10;
        *(int *)pNVar8 = *(int *)pNVar8 + -1;
        local_31 = *(int *)pNVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005af211;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_68);
    }
  }
LAB_1005af211:
  local_68 = pNVar7;
  iVar4 = *(int *)(local_68 + 0x20);
  pNVar7 = local_68;
  if (iVar4 != 0) {
    plVar9 = *(long **)(local_68 + 8);
    do {
      pNVar7 = (Node *)*plVar9;
      if ((Node *)*plVar9 != local_68) break;
      iVar4 = iVar4 + -1;
      plVar9 = plVar9 + 1;
      pNVar7 = local_68;
    } while (iVar4 != 0);
  }
  do {
    pNVar8 = local_68;
    if (1 < *(uint *)(local_68 + 0x10)) {
      pNVar8 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)local_68,FUN_1002b5e60,0x2b5ef0,
                                  0x80);
      if (*(int *)(local_68 + 0x10) != -1) {
        if (*(int *)(local_68 + 0x10) != 0) {
          LOCK();
          pNVar1 = local_68 + 0x10;
          *(int *)pNVar1 = *(int *)pNVar1 + -1;
          local_31 = *(int *)pNVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005af2b2;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_68);
      }
    }
LAB_1005af2b2:
    local_68 = pNVar8;
    if (pNVar7 == local_68) {
      FUN_1005af890(param_1);
      FUN_1005aff70(param_1);
      if (*(int *)(local_68 + 0x10) != -1) {
        if (*(int *)(local_68 + 0x10) != 0) {
          LOCK();
          pNVar7 = local_68 + 0x10;
          *(int *)pNVar7 = *(int *)pNVar7 + -1;
          UNLOCK();
          if (*(int *)pNVar7 != 0) {
            return;
          }
          local_31 = 0;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_68);
      }
      return;
    }
    uVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    local_78 = *(QArrayData **)(pNVar7 + 0x10);
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
    local_70 = 2;
    FUN_100260700(local_e0,pNVar7 + 0x18);
    FUN_1005bca00(uVar6,&local_78,local_e0);
    FUN_10005e410(local_e0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005af250;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1005af250:
    pNVar7 = (Node *)QHashData::nextNode(pNVar7);
  } while( true );
}

