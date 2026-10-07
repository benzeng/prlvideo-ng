
void FUN_1002f7d10(undefined8 param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  QArrayData *local_9d0;
  QArrayData *local_9c8;
  QArrayData *local_9c0;
  QArrayData *local_9b8;
  QArrayData *local_9b0;
  QArrayData *local_9a8;
  QArrayData *local_9a0;
  QArrayData *local_998;
  QArrayData *local_990;
  QString local_988;
  undefined1 local_979;
  undefined1 local_978 [2368];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_988.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_38 = lVar1;
  local_9c8 = (QArrayData *)
              QString::fromAscii_helper("0x%1 bSlot=0x%2 bSeq=0x%3 [0x%4 0x%5 0x%6] Len=%7",0x31);
  QString::arg(&local_9c0,&local_9c8,*param_2,2,0x10,0x30);
  QString::arg(&local_9b8,&local_9c0,param_2[5],2,0x10,0x30);
  QString::arg(&local_9b0,&local_9b8,param_2[6],2,0x10,0x30);
  QString::arg(&local_9a8,&local_9b0,param_2[7],2,0x10,0x30);
  QString::arg(&local_9a0,&local_9a8,param_2[8],2,0x10,0x30);
  QString::arg(&local_998,&local_9a0,param_2[9],2,0x10,0x30);
  QString::arg(&local_990,&local_998,*(undefined4 *)(param_2 + 1),0,10,0x20);
  QString::append(&local_988);
  if (*(int *)local_990 != -1) {
    if (*(int *)local_990 != 0) {
      LOCK();
      *(int *)local_990 = *(int *)local_990 + -1;
      local_979 = *(int *)local_990 != 0;
      UNLOCK();
      if ((bool)local_979) goto LAB_1002f7ec4;
    }
    QArrayData::deallocate(local_990,2,8);
  }
LAB_1002f7ec4:
  if (*(int *)local_998 != -1) {
    if (*(int *)local_998 != 0) {
      LOCK();
      *(int *)local_998 = *(int *)local_998 + -1;
      local_979 = *(int *)local_998 != 0;
      UNLOCK();
      if ((bool)local_979) goto LAB_1002f7f00;
    }
    QArrayData::deallocate(local_998,2,8);
  }
LAB_1002f7f00:
  if (*(int *)local_9a0 != -1) {
    if (*(int *)local_9a0 != 0) {
      LOCK();
      *(int *)local_9a0 = *(int *)local_9a0 + -1;
      local_979 = *(int *)local_9a0 != 0;
      UNLOCK();
      if ((bool)local_979) goto LAB_1002f7f3c;
    }
    QArrayData::deallocate(local_9a0,2,8);
  }
LAB_1002f7f3c:
  if (*(int *)local_9a8 != -1) {
    if (*(int *)local_9a8 != 0) {
      LOCK();
      *(int *)local_9a8 = *(int *)local_9a8 + -1;
      local_979 = *(int *)local_9a8 != 0;
      UNLOCK();
      if ((bool)local_979) goto LAB_1002f7f78;
    }
    QArrayData::deallocate(local_9a8,2,8);
  }
LAB_1002f7f78:
  if (*(int *)local_9b0 != -1) {
    if (*(int *)local_9b0 != 0) {
      LOCK();
      *(int *)local_9b0 = *(int *)local_9b0 + -1;
      local_979 = *(int *)local_9b0 != 0;
      UNLOCK();
      if ((bool)local_979) goto LAB_1002f7fb4;
    }
    QArrayData::deallocate(local_9b0,2,8);
  }
LAB_1002f7fb4:
  if (*(int *)local_9b8 != -1) {
    if (*(int *)local_9b8 != 0) {
      LOCK();
      *(int *)local_9b8 = *(int *)local_9b8 + -1;
      local_979 = *(int *)local_9b8 != 0;
      UNLOCK();
      if ((bool)local_979) goto LAB_1002f7ff0;
    }
    QArrayData::deallocate(local_9b8,2,8);
  }
LAB_1002f7ff0:
  if (*(int *)local_9c0 != -1) {
    if (*(int *)local_9c0 != 0) {
      LOCK();
      *(int *)local_9c0 = *(int *)local_9c0 + -1;
      local_979 = *(int *)local_9c0 != 0;
      UNLOCK();
      if ((bool)local_979) goto LAB_1002f802c;
    }
    QArrayData::deallocate(local_9c0,2,8);
  }
LAB_1002f802c:
  if (*(int *)local_9c8 != -1) {
    if (*(int *)local_9c8 != 0) {
      LOCK();
      *(int *)local_9c8 = *(int *)local_9c8 + -1;
      local_979 = *(int *)local_9c8 != 0;
      UNLOCK();
      if ((bool)local_979) goto LAB_1002f8068;
    }
    QArrayData::deallocate(local_9c8,2,8);
  }
LAB_1002f8068:
  if (1 < DAT_1011c568c) {
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"%s %s",param_1,local_9d0 + *(long *)(local_9d0 + 0x10));
    if (*(int *)local_9d0 != -1) {
      if (*(int *)local_9d0 != 0) {
        LOCK();
        *(int *)local_9d0 = *(int *)local_9d0 + -1;
        local_979 = *(int *)local_9d0 != 0;
        UNLOCK();
        if ((bool)local_979) goto LAB_1002f80f4;
      }
      QArrayData::deallocate(local_9d0,1,8);
    }
  }
LAB_1002f80f4:
  if (((param_3 != 0) && (*(int *)(param_2 + 1) != 0)) && (1 < DAT_1011c568c)) {
    FUN_1002da020(local_978,0x940,param_3);
    FUN_1008e3970("","USB",0,"CCIDdata %s",local_978);
  }
  if (*(int *)local_988.field0_0x0 != -1) {
    if (*(int *)local_988.field0_0x0 != 0) {
      LOCK();
      *(int *)local_988.field0_0x0 = *(int *)local_988.field0_0x0 + -1;
      local_979 = *(int *)local_988.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_979) goto LAB_1002f817c;
    }
    QArrayData::deallocate((QArrayData *)local_988.field0_0x0,2,8);
  }
LAB_1002f817c:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

