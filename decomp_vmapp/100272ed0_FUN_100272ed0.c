
undefined8 FUN_100272ed0(void)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_60;
  QDateTime local_58 [8];
  QDateTime local_50 [12];
  undefined4 local_44;
  undefined1 local_40 [7];
  undefined1 local_39;
  undefined1 local_38 [24];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  FUN_10027ec90(local_40);
  QDateTime::currentDateTime();
  QDateTime::toTimeSpec(local_50,local_58,1);
  uVar2 = QDateTime::toTime_t();
  QDateTime::~QDateTime(local_50);
  QDateTime::~QDateTime(local_58);
  local_44 = uVar2;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getServerUuid();
  FUN_1007d6bf0(&local_60,local_38);
  iVar3 = FUN_1000ed430(3);
  uVar4 = 0xffffffff;
  if (iVar3 != 0) {
    iVar3 = FUN_1000ed5c0(&local_44,4);
    if ((iVar3 != 0) && (iVar3 = FUN_1000ed5c0(local_40,4), iVar3 != 0)) {
      FUN_1000ed5c0(local_38,0x10);
    }
    uVar4 = 0;
    FUN_1000ed7d0();
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_39 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100272fdc;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100272fdc:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

