
void FUN_1000990b0(QMutex *param_1)

{
  QMutex::QMutex(param_1,0);
  param_1[1].field0_0x0.field0_0x0 = (QMutexData *)PTR_shared_null_100ba2188;
  param_1[2].field0_0x0.field0_0x0 = (QMutexData *)PTR_shared_null_100ba20d0;
  QMutex::QMutex(param_1 + 3,0);
  param_1[4].field0_0x0.field0_0x0 = (QMutexData *)PTR_shared_null_100ba2180;
  param_1[5].field0_0x0.field0_0x0 = (QMutexData *)0x0;
  *(undefined4 *)&param_1[6].field0_0x0.field0_0x0 = 0;
  *(undefined1 *)((long)&param_1[6].field0_0x0.field0_0x0 + 4) = 1;
  *(undefined1 *)((long)&param_1[6].field0_0x0.field0_0x0 + 5) = 0;
  *(undefined1 *)((long)&param_1[6].field0_0x0.field0_0x0 + 7) = 0;
  param_1[7].field0_0x0.field0_0x0 = (QMutexData *)0x0;
  return;
}

