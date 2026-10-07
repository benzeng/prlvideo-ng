
undefined1 FUN_1007a4d40(long param_1,undefined4 param_2,undefined4 param_3)

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
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  if (*(int *)(param_1 + 0x68) == 2) {
    local_84 = 0;
    uStack_83 = 0;
    if (*(char *)(param_1 + 0x370) == '\0') {
      piVar6 = (int *)&DAT_100b4b048;
    }
    else {
      piVar6 = &DAT_100b4b090;
    }
    if ((*(char *)(param_1 + 0x370) == '\0') ||
       (uVar4 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar4 & 0x3000) != 0))
    goto LAB_1007a4dc2;
    cVar3 = FUN_1007b59b0(param_1,param_2,&local_80,0x48,param_3,0,0);
  }
  else {
    local_84 = 0;
    uStack_83 = 0;
    piVar6 = (int *)&DAT_100b4b048;
LAB_1007a4dc2:
    cVar3 = FUN_10079edb0(param_1,param_2,&local_80,0x48,&local_84,1,CONCAT44(uVar8,param_3),0,0);
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
    FUN_1008e3970("","IOCommunication",0,"%sProxy handshake error: protocol version read failed!",
                  local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_84 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_84) goto LAB_1007a4f5e;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_1007a4f5e:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        iVar1 = *(int *)pQVar5;
        UNLOCK();
joined_r0x0001007a4f7c:
        local_84 = iVar1 != 0;
        if ((bool)local_84) goto LAB_1007a4f94;
      }
LAB_1007a4f85:
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_1007a4f94:
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
      FUN_1008e3970("","IOCommunication",0,"%sIO proxy protocol magic bytes differs!",
                    local_a0 + *(long *)(local_a0 + 0x10));
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_84 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_84) goto LAB_1007a4e98;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
LAB_1007a4e98:
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          iVar1 = *(int *)pQVar5;
          UNLOCK();
          goto joined_r0x0001007a4f7c;
        }
        goto LAB_1007a4f85;
      }
      goto LAB_1007a4f94;
    }
    QMutex::lock();
    _memcpy((void *)(param_1 + 0x114),&local_80,0x48);
    QMutex::unlock();
    if (local_7c == (short)piVar6[1]) {
      uVar7 = 1;
      if (local_7a == *(short *)((long)piVar6 + 6)) goto LAB_1007a4fa2;
      pQVar5 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar5 + 1U) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + 1;
        local_84 = *(int *)pQVar5 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sIO proxy protocol minor version number differs!",
                    local_c0 + *(long *)(local_c0 + 0x10));
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_84 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_84) goto LAB_1007a50a0;
        }
        QArrayData::deallocate(local_c0,1,8);
      }
LAB_1007a50a0:
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_84 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_84) goto LAB_1007a4fa2;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
      goto LAB_1007a4fa2;
    }
    pQVar5 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      local_84 = *(int *)pQVar5 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sIO proxy protocol major version number differs!",
                  local_b0 + *(long *)(local_b0 + 0x10));
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_84 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_84) goto LAB_1007a5198;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_1007a5198:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_84 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_84) goto LAB_1007a51ce;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_1007a51ce:
    *(undefined4 *)(param_1 + 0xa4) = 9;
  }
  uVar7 = 0;
LAB_1007a4fa2:
  if (lVar2 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

