
undefined8
FUN_100b924e0(QString *param_1,QString *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QDateTime local_c8;
  QString local_c0;
  undefined8 local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QDateTime local_a0;
  QString local_98;
  undefined1 local_89;
  undefined8 local_88;
  char acStack_80 [40];
  undefined8 local_58;
  char acStack_50 [32];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  acStack_50[8] = '\0';
  acStack_50[9] = '\0';
  acStack_50[10] = '\0';
  acStack_50[0xb] = '\0';
  acStack_50[0xc] = '\0';
  acStack_50[0xd] = '\0';
  acStack_50[0xe] = '\0';
  acStack_50[0xf] = '\0';
  acStack_50[0x10] = '\0';
  acStack_50[0x11] = '\0';
  acStack_50[0x12] = '\0';
  acStack_50[0x13] = '\0';
  acStack_50[0x14] = '\0';
  acStack_50[0x15] = '\0';
  acStack_50[0x16] = '\0';
  acStack_50[0x17] = '\0';
  local_58 = 0;
  acStack_50[0] = '\0';
  acStack_50[1] = '\0';
  acStack_50[2] = '\0';
  acStack_50[3] = '\0';
  acStack_50[4] = '\0';
  acStack_50[5] = '\0';
  acStack_50[6] = '\0';
  acStack_50[7] = '\0';
  acStack_50[0x18] = '\0';
  acStack_50[0x19] = '\0';
  acStack_50[0x1a] = '\0';
  acStack_50[0x1b] = '\0';
  acStack_50[0x1c] = '\0';
  acStack_50[0x1d] = '\0';
  acStack_50[0x1e] = '\0';
  acStack_50[0x1f] = '\0';
  acStack_80[8] = '\0';
  acStack_80[9] = '\0';
  acStack_80[10] = '\0';
  acStack_80[0xb] = '\0';
  acStack_80[0xc] = '\0';
  acStack_80[0xd] = '\0';
  acStack_80[0xe] = '\0';
  acStack_80[0xf] = '\0';
  acStack_80[0x10] = '\0';
  acStack_80[0x11] = '\0';
  acStack_80[0x12] = '\0';
  acStack_80[0x13] = '\0';
  acStack_80[0x14] = '\0';
  acStack_80[0x15] = '\0';
  acStack_80[0x16] = '\0';
  acStack_80[0x17] = '\0';
  local_88 = 0;
  acStack_80[0] = '\0';
  acStack_80[1] = '\0';
  acStack_80[2] = '\0';
  acStack_80[3] = '\0';
  acStack_80[4] = '\0';
  acStack_80[5] = '\0';
  acStack_80[6] = '\0';
  acStack_80[7] = '\0';
  acStack_80[0x18] = '\0';
  acStack_80[0x19] = '\0';
  acStack_80[0x1a] = '\0';
  acStack_80[0x1b] = '\0';
  acStack_80[0x1c] = '\0';
  acStack_80[0x1d] = '\0';
  acStack_80[0x1e] = '\0';
  acStack_80[0x1f] = '\0';
  local_30 = lVar1;
  iVar2 = FUN_100b98d40(param_3,param_4,param_5,&local_58,&local_88);
  uVar4 = 0;
  if (iVar2 != 0) goto LAB_100b927e5;
  sVar3 = _strlen(acStack_50);
  local_a8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(acStack_50,(int)sVar3);
  local_b0 = (QArrayData *)QString::fromAscii_helper("MM/dd/yyyy hh:mm:ss",0x13);
  QDateTime::fromString((QString *)&local_a0,&local_a8);
  local_b8 = QDateTime::date();
  QDate::toString(&local_98,&local_b8,1);
  QString::operator=(param_1,&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_89 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100b92613;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100b92613:
  QDateTime::~QDateTime(&local_a0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_89 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100b9265b;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100b9265b:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_89 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100b92697;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100b92697:
  sVar3 = _strlen(acStack_80);
  local_d0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(acStack_80,(int)sVar3);
  local_d8 = (QArrayData *)QString::fromAscii_helper("MM/dd/yyyy hh:mm:ss",0x13);
  QDateTime::fromString((QString *)&local_c8,&local_d0);
  local_e0 = QDateTime::date();
  QDate::toString(&local_c0,&local_e0,1);
  QString::operator=(param_2,&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_89 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100b9275c;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100b9275c:
  QDateTime::~QDateTime(&local_c8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_89 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100b927a4;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100b927a4:
  uVar4 = 1;
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_89 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100b927e5;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100b927e5:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

