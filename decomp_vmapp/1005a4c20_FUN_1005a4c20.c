
void FUN_1005a4c20(QThread *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bc6620;
  FUN_1007d6870(param_1 + 0x25);
  FUN_1007d6870(param_1 + 0x35);
  puVar1 = PTR_shared_null_100ba20d0;
  auVar2._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar2._0_8_ = PTR_shared_null_100ba20d0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar2;
  *(undefined **)(param_1 + 0x58) = puVar1;
  FUN_1007d6870(param_1 + 0x70);
  param_1[0x45] = (QThread)0x0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x24] = (QThread)0x0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

