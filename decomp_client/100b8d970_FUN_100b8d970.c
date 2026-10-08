
QString * FUN_100b8d970(QString *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  ushort local_48 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x6ba,"GetProductId");
  }
  puVar1 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar2 = FUN_100b8c5c0(param_2,local_48);
  if (iVar2 != 0) {
    uVar5 = 0;
    do {
      if ((int)uVar5 == 0) {
        local_68 = (QArrayData *)puVar1;
        uVar3 = QString::setNum((longlong)&local_68,(byte)local_48[0] ^ 0x4e);
        QString::rightJustified(&local_60,uVar3,3,0x30,0);
        QString::append(param_1);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_49 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100b8db4d;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100b8db4d:
        uVar4 = 0;
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_49 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100b8db80;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_100b8db80:
        QString::fromUtf8_helper((char *)&local_58,0x1db6a71);
        QString::append(param_1);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_49 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100b8dbcf;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
      else {
        local_78 = (QArrayData *)puVar1;
        uVar3 = QString::setNum((longlong)&local_78,
                                (uint)(*(ushort *)((long)local_48 + uVar5) ^
                                      *(ushort *)("NADVORETRAV" + uVar5)));
        QString::rightJustified(&local_70,uVar3,5,0x30,0);
        QString::append(param_1);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_49 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100b8da95;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_100b8da95:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_49 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100b8dac5;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100b8dac5:
        uVar4 = (int)uVar5 + 1;
        if (uVar4 < 10) goto LAB_100b8db80;
      }
LAB_100b8dbcf:
      uVar5 = (ulong)(uVar4 + 1);
    } while (uVar4 + 1 < 0xb);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

