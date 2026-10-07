
void FUN_10054fc50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int *piVar1;
  long lVar2;
  undefined1 auVar3 [16];
  QArrayData *local_30;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[1] = param_3;
  param_1[2] = param_4;
  lVar2 = param_5 + 0x20;
  if (param_5 == 0) {
    lVar2 = 0;
  }
  param_1[3] = lVar2;
  param_1[4] = 0;
  FUN_100761480(param_1 + 6);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_1007d6870((long)param_1 + 0x71);
  auVar3._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar3._0_8_ = PTR_shared_null_100ba20d0;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x11) = auVar3;
  param_1[0x13] = 0;
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemorySnapshot::CGuestMemorySnapshot(%s,%llu,%llu)",
                local_30 + *(long *)(local_30 + 0x10),param_1[1],param_1[2]);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return;
}

