
undefined8 FUN_1007a4260(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

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
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  if (*(int *)(param_1 + 0x68) == 1) {
    lVar5 = param_1 + 400;
    iVar1 = FUN_1007c7b80(lVar5,param_2,*(undefined4 *)(param_1 + 0x2e8),&DAT_100b4b000,0x48,param_4
                          ,0);
    if (iVar1 == 0) {
      local_50 = *(undefined4 *)(param_1 + 0x30);
      FUN_1007ea6d0(param_3,local_4c);
      if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
         (uVar2 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar2 & 0x3000) == 0)) {
        iVar1 = FUN_1007c91d0(lVar5,param_2,*(undefined4 *)(param_1 + 0x2e8),&local_50,0x14,param_4,
                              0);
      }
      else {
        iVar1 = FUN_1007c7b80(lVar5,param_2,*(undefined4 *)(param_1 + 0x2e8),&local_50,0x14,param_4,
                              0);
      }
      uVar3 = 1;
      lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (iVar1 == 0) goto LAB_1007a44a6;
      pQVar4 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,
                    "%sHandshake error: handshake struct send has been failed!",
                    local_70 + *(long *)(local_70 + 0x10));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          UNLOCK();
          if (*(int *)local_70 != 0) goto LAB_1007a4474;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_1007a4474:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          iVar1 = *(int *)pQVar4;
          UNLOCK();
          goto joined_r0x0001007a448f;
        }
        goto LAB_1007a4495;
      }
    }
    else {
      pQVar4 = *(QArrayData **)(param_1 + 0x18);
      lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,
                    "%sHandshake error: protocol version send has been failed!",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          if (*(int *)local_60 != 0) goto LAB_1007a4355;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_1007a4355:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          iVar1 = *(int *)pQVar4;
          UNLOCK();
joined_r0x0001007a448f:
          if (iVar1 != 0) goto LAB_1007a44a4;
        }
LAB_1007a4495:
        QArrayData::deallocate(pQVar4,2,8);
      }
    }
  }
LAB_1007a44a4:
  uVar3 = 0;
LAB_1007a44a6:
  if (lVar5 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

