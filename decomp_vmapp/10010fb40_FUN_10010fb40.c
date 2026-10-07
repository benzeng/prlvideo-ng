
void FUN_10010fb40(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_100ba9600;
  FUN_1006825a0((long)param_1 + 0xc);
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 6),0);
  QMutex::QMutex((QMutex *)(param_1 + 7),0);
  QMutex::QMutex((QMutex *)(param_1 + 8),0);
  QMutex::QMutex((QMutex *)(param_1 + 9),0);
  QMutex::QMutex((QMutex *)(param_1 + 10),0);
  QMutex::QMutex((QMutex *)(param_1 + 0xb),0);
  QMutex::QMutex((QMutex *)(param_1 + 0xc),0);
  QMutex::QMutex((QMutex *)(param_1 + 0xd),0);
  QMutex::QMutex((QMutex *)(param_1 + 0xe),0);
  QMutex::QMutex((QMutex *)(param_1 + 0xf),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x10),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x11),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x12),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x13),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x14),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x15),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x16),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x17),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x18),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x19),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x1a),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x1b),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x1c),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x1d),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x1e),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x1f),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x20),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x21),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x22),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x23),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x24),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x25),0);
  FUN_1000c5060(param_1 + 0x26,param_2);
  param_1[0x53] = PTR_shared_null_100ba20d0;
  FUN_1006825d0((long)param_1 + 0xc,"com_parallels_hypervisor",1);
  return;
}

