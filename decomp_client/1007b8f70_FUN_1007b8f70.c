
void FUN_1007b8f70(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  bool bVar9;
  long local_e0;
  int *local_d8;
  undefined8 uStack_d0;
  int *local_c8;
  int *local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 local_b0 [16];
  QString local_a0;
  QVariant local_98;
  QVariant local_88;
  QVariant local_78;
  int *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  QString QStack_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined *local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,(QString *)(param_1 + 0x10));
  QObject::sender();
  uVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222dc30);
  lVar6 = QMetaObject::cast((QObject *)&PTR_PTR_10222d800);
  if (lVar6 == 0) {
    bVar9 = false;
  }
  else {
    iVar2 = FUN_1007b5c70(lVar6);
    bVar9 = iVar2 == 1;
  }
  if ((lVar5 != 0) && (iVar2 = FUN_1007b57b0(param_2), !bVar9 && iVar2 != 0xc)) {
    uVar7 = FUN_10018c2b0(lVar5);
    cVar1 = FUN_1003bb560(uVar7);
    if (cVar1 != '\0') {
      local_68 = (int *)0x0;
      uStack_60 = 0;
      register0x00001208 = (int)PTR_shared_null_1021e1288;
      local_58 = (undefined1  [8])PTR_shared_null_1021e1288;
      register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
      local_40 = PTR_shared_null_1021e15e8;
      local_44 = 0;
      QString::operator=((QString *)(local_58 + 8),(QString *)(param_1 + 0x10));
      local_48 = 1;
      uVar3 = FUN_1007bd980(uVar4);
      QVariant::QVariant(&local_78,uVar3);
      FUN_10012ae80(&local_40,&local_78);
      uVar3 = FUN_1007bd990(uVar4);
      QVariant::QVariant(&local_88,uVar3);
      FUN_10012ae80(&local_40,&local_88);
      (**(code **)(*param_2 + 0x60))(&local_a0,param_2);
      QVariant::QVariant(&local_98,&local_a0);
      FUN_10012ae80(&local_40,&local_98);
      QVariant::~QVariant(&local_98);
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007b9117;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_1007b9117:
      QVariant::~QVariant(&local_88);
      QVariant::~QVariant(&local_78);
      pvVar8 = operator_new(0x68);
      local_d8 = local_68;
      uStack_d0 = uStack_60;
      if (local_68 != (int *)0x0) {
        LOCK();
        *local_68 = *local_68 + 1;
        local_31 = *local_68 != 0;
        UNLOCK();
      }
      local_c8 = (int *)local_58;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      local_c0 = (int *)QStack_50.field0_0x0;
      if (1 < *(int *)QStack_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)QStack_50.field0_0x0 = *(int *)QStack_50.field0_0x0 + 1;
        local_31 = *(int *)QStack_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_b4 = local_44;
      local_b8 = local_48;
      FUN_100036740(local_b0,&local_40);
      FUN_100291650(pvVar8,&local_d8);
      FUN_100291b30(&local_d8);
      CAbstractTask::execute();
      QObject::connect(&local_e0,pvVar8,"2taskFinished(PRL_RESULT)",param_1,
                       "1onChangeLockStateTaskFinished(PRL_RESULT)",0);
      if (local_e0 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_e0);
      FUN_100291b30(&local_68);
      return;
    }
  }
  FUN_1007b93c0(param_1,param_2,uVar4);
  return;
}

