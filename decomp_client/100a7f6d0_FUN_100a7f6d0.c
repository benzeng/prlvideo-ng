
undefined1 FUN_100a7f6d0(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  QArrayData *pQVar5;
  int *piVar6;
  undefined1 uVar7;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar8;
  QArrayData *local_c0;
  QArrayData *local_b0;
  QArrayData *local_a0;
  QArrayData *local_90;
  undefined1 local_84;
  undefined3 uStack_83;
  int local_80;
  short local_7c;
  short local_7a;
  long local_38;
  
  uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar2;
  if (*(int *)(param_1 + 0x68) == 2) {
    local_84 = 0;
    uStack_83 = 0;
    if (*(char *)(param_1 + 0x370) == '\0') {
      piVar6 = (int *)&DAT_101cd45e8;
    }
    else {
      piVar6 = &DAT_101cd4630;
    }
    if ((*(char *)(param_1 + 0x370) == '\0') ||
       (uVar4 = FUN_100be45f0(*(undefined8 *)(param_1 + 0x328)), (uVar4 & 0x3000) != 0))
    goto LAB_100a7f752;
    cVar3 = FUN_100a90340(param_1,param_2,&local_80,0x48,param_3,0,0);
  }
  else {
    local_84 = 0;
    uStack_83 = 0;
    piVar6 = (int *)&DAT_101cd45e8;
LAB_100a7f752:
    cVar3 = FUN_100a79740(param_1,param_2,&local_80,0x48,&local_84,1,CONCAT44(uVar8,param_3),0,0);
  }
  if (cVar3 == '\0') {
    pQVar5 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      local_84 = *(int *)pQVar5 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%sProxy handshake error: protocol version read failed!",
                  local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_84 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_84) goto LAB_100a7f8ee;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_100a7f8ee:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        iVar1 = *(int *)pQVar5;
        UNLOCK();
joined_r0x000100a7f90c:
        local_84 = iVar1 != 0;
        if ((bool)local_84) goto LAB_100a7f924;
      }
LAB_100a7f915:
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_100a7f924:
    *(undefined4 *)(param_1 + 0xa4) = 8;
  }
  else {
    if (local_80 != *piVar6) {
      pQVar5 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar5 + 1U) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + 1;
        local_84 = *(int *)pQVar5 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sIO proxy protocol magic bytes differs!",
                    local_a0 + *(long *)(local_a0 + 0x10));
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_84 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_84) goto LAB_100a7f828;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
LAB_100a7f828:
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          iVar1 = *(int *)pQVar5;
          UNLOCK();
          goto joined_r0x000100a7f90c;
        }
        goto LAB_100a7f915;
      }
      goto LAB_100a7f924;
    }
    QMutex::lock();
    _memcpy((void *)(param_1 + 0x114),&local_80,0x48);
    QMutex::unlock();
    if (local_7c == (short)piVar6[1]) {
      uVar7 = 1;
      if (local_7a == *(short *)((long)piVar6 + 6)) goto LAB_100a7f932;
      pQVar5 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar5 + 1U) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + 1;
        local_84 = *(int *)pQVar5 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sIO proxy protocol minor version number differs!",
                    local_c0 + *(long *)(local_c0 + 0x10));
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_84 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_84) goto LAB_100a7fa30;
        }
        QArrayData::deallocate(local_c0,1,8);
      }
LAB_100a7fa30:
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_84 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_84) goto LAB_100a7f932;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
      goto LAB_100a7f932;
    }
    pQVar5 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      local_84 = *(int *)pQVar5 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%sIO proxy protocol major version number differs!",
                  local_b0 + *(long *)(local_b0 + 0x10));
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_84 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_84) goto LAB_100a7fb28;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_100a7fb28:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_84 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_84) goto LAB_100a7fb5e;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_100a7fb5e:
    *(undefined4 *)(param_1 + 0xa4) = 9;
  }
  uVar7 = 0;
LAB_100a7f932:
  if (lVar2 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

