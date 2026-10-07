
undefined8 * FUN_1000e8150(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  undefined1 local_41;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  QString::fromUtf16((ushort *)&local_60,(int)param_1 + 4);
  QString::normalized(&local_58,&local_60,1,0);
  FUN_1007d6cd0(local_40,param_1 + 0x204);
  FUN_1007d6a70(&local_68,local_40);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_41 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_41 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_1000e820e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000e820e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_41 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_1000e823e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000e823e:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_41 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_1000e826e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000e826e:
  if (DAT_1011c3780 == (undefined8 *)0x0) {
LAB_1000e82dd:
    puVar5 = &DAT_1011c3780;
  }
  else {
    puVar2 = DAT_1011c3780;
    puVar5 = &DAT_1011c3780;
    do {
      while (puVar4 = puVar2, cVar3 = operator<((QString *)(puVar4 + 4),&local_50), cVar3 != '\0') {
        puVar2 = (undefined8 *)puVar4[1];
        if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) goto LAB_1000e82c0;
      }
      puVar5 = puVar4;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
LAB_1000e82c0:
    if (((undefined8 **)puVar5 == &DAT_1011c3780) ||
       (cVar3 = operator<(&local_50,(QString *)(puVar5 + 4)), cVar3 != '\0')) goto LAB_1000e82dd;
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_41 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_1000e8314;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1000e8314:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar5;
}

