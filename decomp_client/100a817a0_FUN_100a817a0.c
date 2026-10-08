
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100a817a0(long param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  QArrayData *pQVar12;
  ulong in_stack_ffffffffffffc1f8;
  QArrayData *local_3dc8;
  QArrayData *local_3dc0;
  QArrayData *local_3db8;
  QArrayData *local_3db0;
  QArrayData *local_3da8;
  QArrayData *local_3da0;
  QArrayData *local_3d98;
  QArrayData *local_3d90;
  QArrayData *local_3d88;
  int local_3d7c;
  QArrayData *local_3d78;
  QArrayData *local_3d70;
  undefined8 local_3d68;
  QArrayData *local_3d60;
  QArrayData *local_3d58;
  undefined8 local_3d50;
  undefined8 local_3d48;
  undefined1 local_3d39;
  undefined1 local_3d38 [15360];
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_3d48 = 0;
  FUN_100a68840(&local_3d48);
  if (*(int *)(param_1 + 0x68) == 1) {
    FUN_100be4310();
  }
  else {
    FUN_100be4410(*(undefined8 *)(param_1 + 0x328));
  }
  do {
    do {
      iVar8 = 0;
      if (param_3 != 0) {
        local_3d50 = 0;
        FUN_100a68840(&local_3d50);
        iVar7 = FUN_100a68860(&local_3d48,&local_3d50);
        iVar8 = param_3 - iVar7;
        if (param_3 - iVar7 == 0) {
          local_3d60 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_3d60 + 1U) {
            LOCK();
            *(int *)local_3d60 = *(int *)local_3d60 + 1;
            local_3d39 = *(int *)local_3d60 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_100df99c0("","IOCommunication",0,"%sSSL handshake timeout expired!",
                        local_3d58 + *(long *)(local_3d58 + 0x10));
          if (*(int *)local_3d58 != -1) {
            if (*(int *)local_3d58 != 0) {
              LOCK();
              *(int *)local_3d58 = *(int *)local_3d58 + -1;
              local_3d39 = *(int *)local_3d58 != 0;
              UNLOCK();
              if ((bool)local_3d39) goto LAB_100a81be1;
            }
            QArrayData::deallocate(local_3d58,1,8);
          }
LAB_100a81be1:
          if (*(int *)local_3d60 == -1) goto LAB_100a820b9;
          pQVar12 = local_3d60;
          if (*(int *)local_3d60 == 0) goto LAB_100a820aa;
          LOCK();
          *(int *)local_3d60 = *(int *)local_3d60 + -1;
          iVar8 = *(int *)local_3d60;
          UNLOCK();
          goto joined_r0x000100a81c0d;
        }
      }
      param_3 = iVar8;
      iVar8 = FUN_100be6640(*(undefined8 *)(param_1 + 0x328));
      iVar7 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x338),10,0,0);
      if (0 < iVar7) {
        local_3d68 = 0;
        uVar9 = FUN_100c5f250(*(undefined8 *)(param_1 + 0x338),&local_3d68,iVar7);
        uVar11 = local_3d68;
        if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
           (uVar10 = FUN_100be45f0(*(undefined8 *)(param_1 + 0x328)), (uVar10 & 0x3000) == 0)) {
          in_stack_ffffffffffffc1f8 = 0;
          iVar7 = FUN_100aa39b0(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),uVar11,uVar9,
                                0,0);
        }
        else {
          in_stack_ffffffffffffc1f8 = 0;
          iVar7 = FUN_100aa2360(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),uVar11,uVar9,
                                0,0);
        }
        if (iVar7 != 0) {
          local_3d78 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_3d78 + 1U) {
            LOCK();
            *(int *)local_3d78 = *(int *)local_3d78 + 1;
            local_3d39 = *(int *)local_3d78 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_100df99c0("","IOCommunication",0,"%sSSL handshake: write failed, timeout %d",
                        local_3d70 + *(long *)(local_3d70 + 0x10),0);
          if (*(int *)local_3d70 != -1) {
            if (*(int *)local_3d70 != 0) {
              LOCK();
              *(int *)local_3d70 = *(int *)local_3d70 + -1;
              local_3d39 = *(int *)local_3d70 != 0;
              UNLOCK();
              if ((bool)local_3d39) goto LAB_100a81cbc;
            }
            QArrayData::deallocate(local_3d70,1,8);
          }
LAB_100a81cbc:
          if (*(int *)local_3d78 == -1) goto LAB_100a820b9;
          pQVar12 = local_3d78;
          if (*(int *)local_3d78 == 0) goto LAB_100a820aa;
          LOCK();
          *(int *)local_3d78 = *(int *)local_3d78 + -1;
          iVar8 = *(int *)local_3d78;
          UNLOCK();
          goto joined_r0x000100a81c0d;
        }
      }
      uVar10 = FUN_100be45f0(*(undefined8 *)(param_1 + 0x328));
      if (((uVar10 & 0x3000) == 0) || (0 < iVar8)) {
        iVar8 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x340),10,0,0);
        *(bool *)(param_1 + 0x378) = 0 < iVar8;
        cVar4 = '\x01';
        if (*(int *)(param_1 + 0x68) == 2) {
LAB_100a81a71:
          if (((*(long *)(param_1 + 0x60) != 0) &&
              (lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x10), lVar1 != 0)) &&
             (plVar2 = *(long **)(lVar1 + 0x18), plVar2 != (long *)0x0)) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            plVar3 = (long *)plVar2[2];
            if ((plVar3 != (long *)0x0) &&
               (cVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0x328)),
               cVar5 == '\0')) {
              *(undefined4 *)(param_1 + 0xa4) = 5;
              cVar4 = '\0';
            }
            LOCK();
            plVar3 = plVar2 + 1;
            lVar1 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar1 == 1) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        else {
          cVar4 = FUN_100aab5e0(*(undefined8 *)(param_1 + 0x348),*(undefined8 *)(param_1 + 0x328),
                                param_4);
          if (cVar4 == '\0') goto LAB_100a820b9;
          if (*(int *)(param_1 + 0x68) == 2) goto LAB_100a81a71;
        }
        FUN_100aabc20(&local_3dc8,*(undefined8 *)(param_1 + 0x328));
        bVar6 = FUN_100aacb30(&local_3dc8);
        *(uint *)(param_1 + 0x38) = bVar6 | 2;
        if (*(int *)local_3dc8 == -1) goto LAB_100a820c7;
        if (*(int *)local_3dc8 != 0) {
          LOCK();
          *(int *)local_3dc8 = *(int *)local_3dc8 + -1;
          local_3d39 = *(int *)local_3dc8 != 0;
          UNLOCK();
          if ((bool)local_3d39) goto LAB_100a820c7;
        }
        QArrayData::deallocate(local_3dc8,2,8);
        goto LAB_100a820c7;
      }
      iVar8 = FUN_100be64d0(*(undefined8 *)(param_1 + 0x328),iVar8);
    } while (iVar8 == 3);
    if (iVar8 != 2) {
      uVar11 = FUN_100c63310();
      FUN_100c63950(uVar11,local_138,0x100);
      local_3dc0 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_3dc0 + 1U) {
        LOCK();
        *(int *)local_3dc0 = *(int *)local_3dc0 + 1;
        local_3d39 = *(int *)local_3dc0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sSSL handshake: (SSL error: %s)",
                    local_3db8 + *(long *)(local_3db8 + 0x10),local_138);
      if (*(int *)local_3db8 != -1) {
        if (*(int *)local_3db8 != 0) {
          LOCK();
          *(int *)local_3db8 = *(int *)local_3db8 + -1;
          local_3d39 = *(int *)local_3db8 != 0;
          UNLOCK();
          if ((bool)local_3d39) goto LAB_100a81db4;
        }
        QArrayData::deallocate(local_3db8,1,8);
      }
LAB_100a81db4:
      if (*(int *)local_3dc0 == -1) goto LAB_100a820b9;
      pQVar12 = local_3dc0;
      if (*(int *)local_3dc0 == 0) goto LAB_100a820aa;
      LOCK();
      *(int *)local_3dc0 = *(int *)local_3dc0 + -1;
      iVar8 = *(int *)local_3dc0;
      UNLOCK();
      goto joined_r0x000100a81c0d;
    }
    uVar9 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x338),0x8d,0,0);
    local_3d7c = 0;
    in_stack_ffffffffffffc1f8 = in_stack_ffffffffffffc1f8 & 0xffffffff00000000;
    cVar4 = FUN_100a79740(param_1,param_2,local_3d38,uVar9,&local_3d7c,0,in_stack_ffffffffffffc1f8,0
                          ,0);
    iVar8 = local_3d7c;
    if (cVar4 == '\0') {
      uVar11 = FUN_100c63310();
      FUN_100c63950(uVar11,local_138,0x100);
      local_3d90 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_3d90 + 1U) {
        LOCK();
        *(int *)local_3d90 = *(int *)local_3d90 + 1;
        local_3d39 = *(int *)local_3d90 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sWrite handshake to SSL failed (SSL error: %s)",
                    local_3d88 + *(long *)(local_3d88 + 0x10),local_138);
      if (*(int *)local_3d88 != -1) {
        if (*(int *)local_3d88 != 0) {
          LOCK();
          *(int *)local_3d88 = *(int *)local_3d88 + -1;
          local_3d39 = *(int *)local_3d88 != 0;
          UNLOCK();
          if ((bool)local_3d39) goto LAB_100a81eac;
        }
        QArrayData::deallocate(local_3d88,1,8);
      }
LAB_100a81eac:
      if (*(int *)local_3d90 != -1) {
        if (*(int *)local_3d90 != 0) {
          LOCK();
          *(int *)local_3d90 = *(int *)local_3d90 + -1;
          local_3d39 = *(int *)local_3d90 != 0;
          UNLOCK();
          if ((bool)local_3d39) goto LAB_100a81ee8;
        }
        QArrayData::deallocate(local_3d90,2,8);
      }
LAB_100a81ee8:
      local_3da0 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_3da0 + 1U) {
        LOCK();
        *(int *)local_3da0 = *(int *)local_3da0 + 1;
        local_3d39 = *(int *)local_3da0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sSSL handshake: read failed, timeout %d",
                    local_3d98 + *(long *)(local_3d98 + 0x10),0);
      if (*(int *)local_3d98 != -1) {
        if (*(int *)local_3d98 != 0) {
          LOCK();
          *(int *)local_3d98 = *(int *)local_3d98 + -1;
          local_3d39 = *(int *)local_3d98 != 0;
          UNLOCK();
          if ((bool)local_3d39) goto LAB_100a81f85;
        }
        QArrayData::deallocate(local_3d98,1,8);
      }
LAB_100a81f85:
      if (*(int *)local_3da0 == -1) goto LAB_100a820b9;
      pQVar12 = local_3da0;
      if (*(int *)local_3da0 == 0) goto LAB_100a820aa;
      LOCK();
      *(int *)local_3da0 = *(int *)local_3da0 + -1;
      iVar8 = *(int *)local_3da0;
      UNLOCK();
      goto joined_r0x000100a81c0d;
    }
    iVar7 = FUN_100c58980(*(undefined8 *)(param_1 + 0x338),local_3d38,local_3d7c);
  } while (iVar7 == iVar8);
  uVar11 = FUN_100c63310();
  FUN_100c63950(uVar11,local_138,0x100);
  local_3db0 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)local_3db0 + 1U) {
    LOCK();
    *(int *)local_3db0 = *(int *)local_3db0 + 1;
    local_3d39 = *(int *)local_3db0 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","IOCommunication",0,"%sWrite handshake to SSL failed (SSL error: %s)",
                local_3da8 + *(long *)(local_3da8 + 0x10),local_138);
  if (*(int *)local_3da8 != -1) {
    if (*(int *)local_3da8 != 0) {
      LOCK();
      *(int *)local_3da8 = *(int *)local_3da8 + -1;
      local_3d39 = *(int *)local_3da8 != 0;
      UNLOCK();
      if ((bool)local_3d39) goto LAB_100a8207d;
    }
    QArrayData::deallocate(local_3da8,1,8);
  }
LAB_100a8207d:
  if (*(int *)local_3db0 != -1) {
    pQVar12 = local_3db0;
    if (*(int *)local_3db0 != 0) {
      LOCK();
      *(int *)local_3db0 = *(int *)local_3db0 + -1;
      iVar8 = *(int *)local_3db0;
      UNLOCK();
joined_r0x000100a81c0d:
      local_3d39 = iVar8 != 0;
      if ((bool)local_3d39) goto LAB_100a820b9;
    }
LAB_100a820aa:
    QArrayData::deallocate(pQVar12,2,8);
  }
LAB_100a820b9:
  *(undefined4 *)(param_1 + 0xa4) = 5;
  cVar4 = '\0';
LAB_100a820c7:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_1021e1840 >> 8),cVar4);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

