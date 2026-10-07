
uint FUN_1002f8fb0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  QArrayData *pQVar5;
  long lVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  if (1 < DAT_1011c568c) {
    if ((*(uint *)(param_2 + 0x44c) & 0x80) == 0) {
      local_988.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      local_9c8 = (QArrayData *)
                  QString::fromAscii_helper("CCIDreq %1 bSlot=%2 bSeq=%3 [%4 %5 %6] Len=%7",0x2d);
      QString::arg(&local_9c0,&local_9c8,*(undefined1 *)(param_2 + 0x4d8),2,0x10,0x30);
      QString::arg(&local_9b8,&local_9c0,*(undefined1 *)(param_2 + 0x4dd),2,0x10,0x30);
      QString::arg(&local_9b0,&local_9b8,*(undefined1 *)(param_2 + 0x4de),2,0x10,0x30);
      QString::arg(&local_9a8,&local_9b0,*(undefined1 *)(param_2 + 0x4df),2,0x10,0x30);
      QString::arg(&local_9a0,&local_9a8,*(undefined1 *)(param_2 + 0x4e0),2,0x10,0x30);
      QString::arg(&local_998,&local_9a0,*(undefined1 *)(param_2 + 0x4e1),2,0x10,0x30);
      QString::arg(&local_990,&local_998,*(undefined4 *)(param_2 + 0x4d9),0,10,0x20);
      QString::append(&local_988);
      if (*(int *)local_990 != -1) {
        if (*(int *)local_990 != 0) {
          LOCK();
          *(int *)local_990 = *(int *)local_990 + -1;
          local_979 = *(int *)local_990 != 0;
          UNLOCK();
          if ((bool)local_979) goto LAB_1002f9198;
        }
        QArrayData::deallocate(local_990,2,8);
      }
LAB_1002f9198:
      if (*(int *)local_998 != -1) {
        if (*(int *)local_998 != 0) {
          LOCK();
          *(int *)local_998 = *(int *)local_998 + -1;
          local_979 = *(int *)local_998 != 0;
          UNLOCK();
          if ((bool)local_979) goto LAB_1002f91d4;
        }
        QArrayData::deallocate(local_998,2,8);
      }
LAB_1002f91d4:
      if (*(int *)local_9a0 != -1) {
        if (*(int *)local_9a0 != 0) {
          LOCK();
          *(int *)local_9a0 = *(int *)local_9a0 + -1;
          local_979 = *(int *)local_9a0 != 0;
          UNLOCK();
          if ((bool)local_979) goto LAB_1002f9210;
        }
        QArrayData::deallocate(local_9a0,2,8);
      }
LAB_1002f9210:
      if (*(int *)local_9a8 != -1) {
        if (*(int *)local_9a8 != 0) {
          LOCK();
          *(int *)local_9a8 = *(int *)local_9a8 + -1;
          local_979 = *(int *)local_9a8 != 0;
          UNLOCK();
          if ((bool)local_979) goto LAB_1002f924c;
        }
        QArrayData::deallocate(local_9a8,2,8);
      }
LAB_1002f924c:
      if (*(int *)local_9b0 != -1) {
        if (*(int *)local_9b0 != 0) {
          LOCK();
          *(int *)local_9b0 = *(int *)local_9b0 + -1;
          local_979 = *(int *)local_9b0 != 0;
          UNLOCK();
          if ((bool)local_979) goto LAB_1002f9288;
        }
        QArrayData::deallocate(local_9b0,2,8);
      }
LAB_1002f9288:
      if (*(int *)local_9b8 != -1) {
        if (*(int *)local_9b8 != 0) {
          LOCK();
          *(int *)local_9b8 = *(int *)local_9b8 + -1;
          local_979 = *(int *)local_9b8 != 0;
          UNLOCK();
          if ((bool)local_979) goto LAB_1002f92c4;
        }
        QArrayData::deallocate(local_9b8,2,8);
      }
LAB_1002f92c4:
      if (*(int *)local_9c0 != -1) {
        if (*(int *)local_9c0 != 0) {
          LOCK();
          *(int *)local_9c0 = *(int *)local_9c0 + -1;
          local_979 = *(int *)local_9c0 != 0;
          UNLOCK();
          if ((bool)local_979) goto LAB_1002f9300;
        }
        QArrayData::deallocate(local_9c0,2,8);
      }
LAB_1002f9300:
      if (*(int *)local_9c8 != -1) {
        if (*(int *)local_9c8 != 0) {
          LOCK();
          *(int *)local_9c8 = *(int *)local_9c8 + -1;
          local_979 = *(int *)local_9c8 != 0;
          UNLOCK();
          if ((bool)local_979) goto LAB_1002f933c;
        }
        QArrayData::deallocate(local_9c8,2,8);
      }
LAB_1002f933c:
      if (1 < (int)DAT_1011c568c) {
        puVar2 = (&PTR_s_UNK_101117020)
                 [*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x1490)];
        uVar9 = *(undefined4 *)(param_2 + 0x43c);
        uVar1 = *(undefined4 *)(param_2 + 0x448);
        uVar8 = *(undefined4 *)(param_2 + 0x44c);
        QString::toUtf8();
        pQVar5 = local_9d0 + *(long *)(local_9d0 + 0x10);
        FUN_1008e3970("","USB",0,"[%s:%02x.%02x] size=%u %s",puVar2,uVar1,uVar8,uVar9,pQVar5);
        if (*(int *)local_9d0 != -1) {
          if (*(int *)local_9d0 != 0) {
            LOCK();
            *(int *)local_9d0 = *(int *)local_9d0 + -1;
            local_979 = *(int *)local_9d0 != 0;
            UNLOCK();
            if ((bool)local_979) goto LAB_1002f940e;
          }
          QArrayData::deallocate(local_9d0,1,8);
        }
LAB_1002f940e:
        if (1 < (int)DAT_1011c568c) {
          FUN_1002da020(local_978,0x940,param_2 + 0x4e2,*(undefined4 *)(param_2 + 0x4d9));
          FUN_1008e3970("","USB",0,"[%s] %s",
                        (&PTR_s_UNK_101117020)
                        [*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x1490)],local_978,
                        uVar8,uVar9,pQVar5);
        }
      }
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(int *)local_988.field0_0x0 != -1) {
        if (*(int *)local_988.field0_0x0 != 0) {
          LOCK();
          *(int *)local_988.field0_0x0 = *(int *)local_988.field0_0x0 + -1;
          local_979 = *(int *)local_988.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_979) goto LAB_1002f9519;
        }
        QArrayData::deallocate((QArrayData *)local_988.field0_0x0,2,8);
      }
    }
    else if (1 < (int)DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s:%02x.%02x] size=%u",
                    (&PTR_s_UNK_101117020)
                    [*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x1490)],
                    *(undefined4 *)(param_2 + 0x448),*(uint *)(param_2 + 0x44c),
                    *(undefined4 *)(param_2 + 0x43c));
    }
  }
LAB_1002f9519:
  iVar3 = *(int *)(param_2 + 0x44c);
  if (iVar3 == 1) {
    iVar3 = FUN_1002f87a0(param_1 + 0x48,param_2 + 0x4d8,*(undefined4 *)(param_2 + 0x43c));
    if (iVar3 < 0) goto LAB_1002f95a6;
    *(int *)(param_2 + 0x454) = iVar3;
    *(undefined4 *)(param_2 + 0x468) = 0;
  }
  else {
    if (iVar3 == 0x82) {
      QMutex::lock();
      bVar7 = *(int *)(param_1 + 0x80) == 0;
      if (bVar7) {
        *(undefined4 *)(param_2 + 0x468) = 7;
      }
      else {
        *(long *)(param_1 + 0xa8) = param_2;
        QWaitCondition::wakeOne();
      }
      uVar4 = (uint)!bVar7;
      QMutex::unlock();
      goto LAB_1002f95c8;
    }
    if (iVar3 == 0x83) {
      uVar4 = FUN_1002f8490(param_1,param_2);
      goto LAB_1002f95c8;
    }
LAB_1002f95a6:
    *(undefined4 *)(param_2 + 0x468) = 7;
  }
  uVar4 = 0;
LAB_1002f95c8:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

