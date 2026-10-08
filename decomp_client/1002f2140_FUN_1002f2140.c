
void FUN_1002f2140(CAbstractTask *param_1)

{
  undefined *puVar1;
  CTaskGenericId *this;
  QObject *this_00;
  undefined1 auVar2 [16];
  Data *local_38;
  undefined1 local_2a;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x7d);
  *(undefined ***)this = &PTR_FUN_102273580;
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_38,this);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_1002f21b6;
    }
    QListData::dispose(local_38);
  }
LAB_1002f21b6:
  *(undefined ***)param_1 = &PTR_FUN_10220afc0;
  this_00 = operator_new(0x90);
  QObject::QObject(this_00,(QObject *)param_1);
  *(undefined ***)this_00 = &PTR_FUN_1021ef8c0;
  *(undefined4 *)(this_00 + 0x18) = 1;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  *(undefined8 *)(this_00 + 0x24) = 0;
  *(undefined8 *)(this_00 + 0x1c) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  *(undefined **)(this_00 + 0x30) = PTR_shared_null_1021e1288;
  *(undefined4 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  auVar2._8_4_ = (int)puVar1;
  auVar2._0_8_ = puVar1;
  auVar2._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x50) = auVar2;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined1 (*) [16])(this_00 + 0x78) = auVar2;
  *(undefined4 *)(this_00 + 0x88) = 0;
  *(undefined4 *)(this_00 + 0x8c) = 0x80000275;
  *(QObject **)(param_1 + 0x18) = this_00;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(CAbstractTask **)(this_00 + 0x10) = param_1;
  return;
}

