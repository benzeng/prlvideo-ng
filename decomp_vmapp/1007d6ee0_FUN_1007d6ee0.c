
QString * FUN_1007d6ee0(QString *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  byte local_48 [16];
  long local_38;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  cVar2 = FUN_1007d6d90(param_2);
  if (cVar2 != '\0') {
    FUN_1007d6880(local_48,param_2);
    uVar4 = 0;
    do {
      local_60 = (QArrayData *)puVar1;
      uVar3 = QString::setNum((longlong)&local_60,
                              (uint)(byte)(local_48[uVar4] ^ "QUODLICETIOVINOT"[uVar4]));
      QString::rightJustified(&local_58,uVar3,2,0x30,0);
      QString::append(param_1);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_49 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1007d6fb7;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1007d6fb7:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_49 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1007d6fe7;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1007d6fe7:
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

