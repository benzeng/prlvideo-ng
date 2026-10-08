
void FUN_1003a7790(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint in_stack_ffffffffffffff0c;
  long local_d8;
  long local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  ExternalRefCountData *local_48;
  AnonymousUnion0 local_40;
  AnonymousUnion0 local_38 [2];
  
  lVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  iVar1 = FUN_10018a9d0(uVar3);
  if (iVar1 == 0x30000001) {
    plVar4 = operator_new(0x68);
    uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    uVar5 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    FUN_100429a90(plVar4,uVar3,param_2,uVar5);
    QWidget::setAttribute(plVar4,0x37,1);
    QObject::connect(&local_d0,plVar4,"2finished(int)",param_1,"1onHddResizeFinished()",0);
    if (local_d0 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_d0);
    QObject::connect(&local_d8,plVar4,"2finished(int)",*(undefined8 *)(param_1 + 0x10),
                     "2resizeHddFinished()",0);
    if (local_d8 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_d8);
    (**(code **)(*plVar4 + 0x1a0))(plVar4);
  }
  else {
    iVar1 = CMessageManager::instance();
    FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmUuid();
    local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_48 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_88 = (int *)0x0;
    uStack_80 = 0;
    local_70 = 0;
    local_78 = 0;
    local_60 = 0x80000000;
    local_68.field7 = 0;
    local_58 = 1;
    local_c8 = (int *)0x0;
    uStack_c0 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_a0 = 0x80000000;
    local_a8.field7 = 0;
    local_98 = 1;
    CMessageManager::showMessageBox
              (iVar1,(QString *)0x80000484,(QStringList *)&local_38[0].field0,
               (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(&local_88,0),
               (QWidget *)((ulong)in_stack_ffffffffffffff0c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_a8);
    if (local_c8 != (int *)0x0) {
      LOCK();
      *local_c8 = *local_c8 + -1;
      local_38[1]._7_1_ = *local_c8 != 0;
      UNLOCK();
      if ((!(bool)local_38[1]._7_1_) && (local_c8 != (int *)0x0)) {
        operator_delete(local_c8);
      }
    }
    QVariant::~QVariant((QVariant *)&local_68);
    if (local_88 != (int *)0x0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_38[1]._7_1_ = *local_88 != 0;
      UNLOCK();
      if ((!(bool)local_38[1]._7_1_) && (local_88 != (int *)0x0)) {
        operator_delete(local_88);
      }
    }
    FUN_100039a80(&local_48);
    FUN_100039a80(&local_40);
    if (*(int *)local_38[0].field1 != -1) {
      if (*(int *)local_38[0].field1 != 0) {
        LOCK();
        *(int *)local_38[0].field1 = *(int *)local_38[0].field1 + -1;
        UNLOCK();
        if (*(int *)local_38[0].field1 != 0) {
          return;
        }
        local_38[1]._7_1_ = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38[0].field1,2,8);
    }
  }
  return;
}

