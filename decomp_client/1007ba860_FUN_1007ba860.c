
void FUN_1007ba860(QMenu *param_1,undefined8 *param_2,long *param_3,QWidget *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  Connection local_30 [16];
  
  QMenu::QMenu(param_1,param_4);
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_10222dc70;
  param_1->field2_0x10 = (undefined4 **)&PTR_FUN_10222de20;
  piVar1 = (int *)*param_2;
  *(int **)((long)&param_1[1].field0_0x0 + 6) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined **)((long)&param_1[1].field1_0x8.field0_0x0 + 6) = PTR_shared_null_1021e15e8;
  uVar2 = (**(code **)(*param_3 + 0x68))(param_3);
  *(undefined4 *)((long)&param_1[1].field2_0x10 + 6) = uVar2;
  uVar2 = CVmDevice::getIndex();
  *(undefined4 *)&param_1[1].field4_0x1a = uVar2;
  *(int *)((long)&param_1[1].field4_0x1a + 4) = (int)param_3[0xd];
  uVar2 = CVmDevice::getEmulatedType();
  *(undefined4 *)&param_1[1].field5_0x22 = uVar2;
  *(undefined4 *)((long)&param_1[1].field5_0x22 + 4) = 0xffffffff;
  FUN_10010d050((undefined1 *)((long)&param_1[2].field0_0x0 + 4),0,
                *(undefined4 *)((long)&param_1[1].field2_0x10 + 6),1);
  *(undefined **)((long)&param_1[2].field1_0x8.field0_0x0 + 4) = PTR_shared_null_1021e1288;
  *(undefined1 *)((long)&param_1[2].field2_0x10 + 4) = 0;
  *(undefined4 *)&param_1[2].field3_0x18 = 0;
  QObject::connect(local_30,param_1,"2recreateActions()",param_1,"1onRecreateActions()",2);
  QMetaObject::Connection::~Connection(local_30);
  FUN_1007baa80(param_1,param_3);
  FUN_1007bb7c0(param_1,param_3);
  return;
}

