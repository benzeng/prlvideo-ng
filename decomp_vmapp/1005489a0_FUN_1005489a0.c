
void FUN_1005489a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  undefined *puVar2;
  char local_48;
  undefined7 uStack_47;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = &PTR_FUN_100bc54a8;
  piVar1 = (int *)*param_2;
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_48 = *piVar1 != 0;
    UNLOCK();
  }
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = param_5;
  param_1[7] = param_6;
  param_1[9] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_100bc5680;
  piVar1 = (int *)*param_2;
  param_1[10] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper(&local_48,0xa3e78c);
  QString::append((QString *)(param_1 + 10));
  piVar1 = (int *)CONCAT71(uStack_47,local_48);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_31 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100548a89;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_47,local_48),2,8);
  }
LAB_100548a89:
  piVar1 = (int *)*param_2;
  param_1[0xb] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0xa3e790);
  QString::append((QString *)(param_1 + 0xb));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100548af7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100548af7:
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_100761460(param_1 + 0xd);
  *(undefined1 *)((long)param_1 + 0x6e) = 0;
  puVar2 = PTR_shared_null_100ba20d0;
  param_1[0xe] = PTR_shared_null_100ba20d0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  FUN_1005445e0(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xa4) = 0xffffffff;
  param_1[0x15] = puVar2;
  param_1[0x16] = param_3;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  return;
}

