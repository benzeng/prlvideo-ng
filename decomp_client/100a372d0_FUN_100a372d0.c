
void FUN_100a372d0(QObject *param_1)

{
  undefined *puVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1022380b0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x20),0);
  _memset_pattern16(param_1 + 0x30,&PTR_shared_null_102237f80,0x30);
  *(undefined **)(param_1 + 0x60) = PTR_shared_null_1021e15d0;
  puVar1 = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x68) = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x78) = puVar1;
  *(undefined **)(param_1 + 0x88) = puVar1;
  QObject::QObject(param_1 + 0x90,(QObject *)0x0);
  *(undefined ***)(param_1 + 0x90) = &PTR_FUN_102238170;
  param_1[0xa0] = (QObject)0x0;
  *(undefined **)(param_1 + 0xa8) = PTR_shared_null_1021e1288;
  QMutex::lock();
  FUN_100a400f0(param_1 + 0x60);
  FUN_100a400f0(param_1 + 0x30);
  FUN_100a400f0(param_1 + 0x38);
  FUN_100a400f0(param_1 + 0x40);
  FUN_100a400f0(param_1 + 0x48);
  FUN_100a400f0(param_1 + 0x50);
  FUN_100a400f0(param_1 + 0x58);
  param_1[0x28] = (QObject)0x0;
  param_1[0x70] = (QObject)0x1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x84] = (QObject)0x0;
  FUN_100094ab0("PRL_RESULT",0,0);
  FUN_1000949e0("QList<TResolvedPath>",0,0);
  FUN_100250100("GUI::VmId",0,1);
  QMutex::unlock();
  return;
}

