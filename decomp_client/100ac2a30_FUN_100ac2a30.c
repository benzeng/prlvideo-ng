
void FUN_100ac2a30(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  FUN_100aceec0();
  *param_1 = &PTR_FUN_10223af00;
  puVar1 = PTR_shared_null_1021e12f0;
  auVar2._8_4_ = (int)PTR_shared_null_1021e12f0;
  auVar2._0_8_ = PTR_shared_null_1021e12f0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e12f0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x15e) = auVar2;
  param_1[0x160] = puVar1;
  param_1[0x164] = 0;
  QTimer::QTimer((QTimer *)(param_1 + 0x165),(QObject *)0x0);
  QTimer::QTimer((QTimer *)(param_1 + 0x169),(QObject *)0x0);
  QTimer::QTimer((QTimer *)(param_1 + 0x16d),(QObject *)0x0);
  *(undefined1 *)(param_1 + 0x171) = 0;
  *(undefined1 *)((long)param_1 + 0xb89) = 0;
  *(undefined4 *)((long)param_1 + 0xb8c) = 0;
  *(byte *)((long)param_1 + 0xb44) = *(byte *)((long)param_1 + 0xb44) | 1;
  *(byte *)((long)param_1 + 0xb64) = *(byte *)((long)param_1 + 0xb64) | 1;
  QTimer::setInterval((int)(QTimer *)(param_1 + 0x169));
  QTimer::setInterval((int)(QTimer *)(param_1 + 0x16d));
  *(byte *)((long)param_1 + 0xb84) = *(byte *)((long)param_1 + 0xb84) | 1;
  FUN_100ac2c50(param_1);
  *(undefined4 *)((long)param_1 + 0xb0c) = 1;
  param_1[0x163] = 0;
  param_1[0x162] = 0;
  return;
}

