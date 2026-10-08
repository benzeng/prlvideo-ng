
undefined8 FUN_100a7ebf0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  long lVar5;
  QArrayData *local_70;
  QArrayData *local_60;
  undefined4 local_50;
  undefined1 local_4c [20];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar5;
  if (*(int *)(param_1 + 0x68) == 1) {
    lVar5 = param_1 + 400;
    iVar1 = FUN_100aa2360(lVar5,param_2,*(undefined4 *)(param_1 + 0x2e8),&DAT_101cd45a0,0x48,param_4
                          ,0);
    if (iVar1 == 0) {
      local_50 = *(undefined4 *)(param_1 + 0x30);
      FUN_100deb2a0(param_3,local_4c);
      if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
         (uVar2 = FUN_100be45f0(*(undefined8 *)(param_1 + 0x328)), (uVar2 & 0x3000) == 0)) {
        iVar1 = FUN_100aa39b0(lVar5,param_2,*(undefined4 *)(param_1 + 0x2e8),&local_50,0x14,param_4,
                              0);
      }
      else {
        iVar1 = FUN_100aa2360(lVar5,param_2,*(undefined4 *)(param_1 + 0x2e8),&local_50,0x14,param_4,
                              0);
      }
      uVar3 = 1;
      lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
      if (iVar1 == 0) goto LAB_100a7ee36;
      pQVar4 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,
                    "%sHandshake error: handshake struct send has been failed!",
                    local_70 + *(long *)(local_70 + 0x10));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          UNLOCK();
          if (*(int *)local_70 != 0) goto LAB_100a7ee04;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_100a7ee04:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          iVar1 = *(int *)pQVar4;
          UNLOCK();
          goto joined_r0x000100a7ee1f;
        }
        goto LAB_100a7ee25;
      }
    }
    else {
      pQVar4 = *(QArrayData **)(param_1 + 0x18);
      lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,
                    "%sHandshake error: protocol version send has been failed!",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          if (*(int *)local_60 != 0) goto LAB_100a7ece5;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_100a7ece5:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          iVar1 = *(int *)pQVar4;
          UNLOCK();
joined_r0x000100a7ee1f:
          if (iVar1 != 0) goto LAB_100a7ee34;
        }
LAB_100a7ee25:
        QArrayData::deallocate(pQVar4,2,8);
      }
    }
  }
LAB_100a7ee34:
  uVar3 = 0;
LAB_100a7ee36:
  if (lVar5 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

