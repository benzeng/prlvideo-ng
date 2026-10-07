
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1007a6e10(long param_1,undefined4 param_2,int param_3,undefined1 param_4)

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
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_3d48 = 0;
  FUN_10078f010(&local_3d48);
  if (*(int *)(param_1 + 0x68) == 1) {
    FUN_10080eba0();
  }
  else {
    FUN_10080eca0(*(undefined8 *)(param_1 + 0x328));
  }
  do {
    do {
      iVar8 = 0;
      if (param_3 != 0) {
        local_3d50 = 0;
        FUN_10078f010(&local_3d50);
        iVar7 = FUN_10078f030(&local_3d48,&local_3d50);
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
          FUN_1008e3970("","IOCommunication",0,"%sSSL handshake timeout expired!",
                        local_3d58 + *(long *)(local_3d58 + 0x10));
          if (*(int *)local_3d58 != -1) {
            if (*(int *)local_3d58 != 0) {
              LOCK();
              *(int *)local_3d58 = *(int *)local_3d58 + -1;
              local_3d39 = *(int *)local_3d58 != 0;
              UNLOCK();
              if ((bool)local_3d39) goto LAB_1007a7251;
            }
            QArrayData::deallocate(local_3d58,1,8);
          }
LAB_1007a7251:
          if (*(int *)local_3d60 == -1) goto LAB_1007a7729;
          pQVar12 = local_3d60;
          if (*(int *)local_3d60 == 0) goto LAB_1007a771a;
          LOCK();
          *(int *)local_3d60 = *(int *)local_3d60 + -1;
          iVar8 = *(int *)local_3d60;
          UNLOCK();
          goto joined_r0x0001007a727d;
        }
      }
      param_3 = iVar8;
      iVar8 = FUN_100810ed0(*(undefined8 *)(param_1 + 0x328));
      iVar7 = FUN_10087db60(*(undefined8 *)(param_1 + 0x338),10,0,0);
      if (0 < iVar7) {
        local_3d68 = 0;
        uVar9 = FUN_100884050(*(undefined8 *)(param_1 + 0x338),&local_3d68,iVar7);
        uVar11 = local_3d68;
        if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
           (uVar10 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar10 & 0x3000) == 0)) {
          in_stack_ffffffffffffc1f8 = 0;
          iVar7 = FUN_1007c91d0(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),uVar11,uVar9,
                                0,0);
        }
        else {
          in_stack_ffffffffffffc1f8 = 0;
          iVar7 = FUN_1007c7b80(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),uVar11,uVar9,
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
          FUN_1008e3970("","IOCommunication",0,"%sSSL handshake: write failed, timeout %d",
                        local_3d70 + *(long *)(local_3d70 + 0x10),0);
          if (*(int *)local_3d70 != -1) {
            if (*(int *)local_3d70 != 0) {
              LOCK();
              *(int *)local_3d70 = *(int *)local_3d70 + -1;
              local_3d39 = *(int *)local_3d70 != 0;
              UNLOCK();
              if ((bool)local_3d39) goto LAB_1007a732c;
            }
            QArrayData::deallocate(local_3d70,1,8);
          }
LAB_1007a732c:
          if (*(int *)local_3d78 == -1) goto LAB_1007a7729;
          pQVar12 = local_3d78;
          if (*(int *)local_3d78 == 0) goto LAB_1007a771a;
          LOCK();
          *(int *)local_3d78 = *(int *)local_3d78 + -1;
          iVar8 = *(int *)local_3d78;
          UNLOCK();
          goto joined_r0x0001007a727d;
        }
      }
      uVar10 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328));
      if (((uVar10 & 0x3000) == 0) || (0 < iVar8)) {
        iVar8 = FUN_10087db60(*(undefined8 *)(param_1 + 0x340),10,0,0);
        *(bool *)(param_1 + 0x378) = 0 < iVar8;
        cVar4 = '\x01';
        if (*(int *)(param_1 + 0x68) == 2) {
LAB_1007a70e1:
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
          cVar4 = FUN_1007d0e00(*(undefined8 *)(param_1 + 0x348),*(undefined8 *)(param_1 + 0x328),
                                param_4);
          if (cVar4 == '\0') goto LAB_1007a7729;
          if (*(int *)(param_1 + 0x68) == 2) goto LAB_1007a70e1;
        }
        FUN_1007d1440(&local_3dc8,*(undefined8 *)(param_1 + 0x328));
        bVar6 = FUN_1007d2350(&local_3dc8);
        *(uint *)(param_1 + 0x38) = bVar6 | 2;
        if (*(int *)local_3dc8 == -1) goto LAB_1007a7737;
        if (*(int *)local_3dc8 != 0) {
          LOCK();
          *(int *)local_3dc8 = *(int *)local_3dc8 + -1;
          local_3d39 = *(int *)local_3dc8 != 0;
          UNLOCK();
          if ((bool)local_3d39) goto LAB_1007a7737;
        }
        QArrayData::deallocate(local_3dc8,2,8);
        goto LAB_1007a7737;
      }
      iVar8 = FUN_100810d60(*(undefined8 *)(param_1 + 0x328),iVar8);
    } while (iVar8 == 3);
    if (iVar8 != 2) {
      uVar11 = FUN_100888110();
      FUN_100888750(uVar11,local_138,0x100);
      local_3dc0 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_3dc0 + 1U) {
        LOCK();
        *(int *)local_3dc0 = *(int *)local_3dc0 + 1;
        local_3d39 = *(int *)local_3dc0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sSSL handshake: (SSL error: %s)",
                    local_3db8 + *(long *)(local_3db8 + 0x10),local_138);
      if (*(int *)local_3db8 != -1) {
        if (*(int *)local_3db8 != 0) {
          LOCK();
          *(int *)local_3db8 = *(int *)local_3db8 + -1;
          local_3d39 = *(int *)local_3db8 != 0;
          UNLOCK();
          if ((bool)local_3d39) goto LAB_1007a7424;
        }
        QArrayData::deallocate(local_3db8,1,8);
      }
LAB_1007a7424:
      if (*(int *)local_3dc0 == -1) goto LAB_1007a7729;
      pQVar12 = local_3dc0;
      if (*(int *)local_3dc0 == 0) goto LAB_1007a771a;
      LOCK();
      *(int *)local_3dc0 = *(int *)local_3dc0 + -1;
      iVar8 = *(int *)local_3dc0;
      UNLOCK();
      goto joined_r0x0001007a727d;
    }
    uVar9 = FUN_10087db60(*(undefined8 *)(param_1 + 0x338),0x8d,0,0);
    local_3d7c = 0;
    in_stack_ffffffffffffc1f8 = in_stack_ffffffffffffc1f8 & 0xffffffff00000000;
    cVar4 = FUN_10079edb0(param_1,param_2,local_3d38,uVar9,&local_3d7c,0,in_stack_ffffffffffffc1f8,0
                          ,0);
    iVar8 = local_3d7c;
    if (cVar4 == '\0') {
      uVar11 = FUN_100888110();
      FUN_100888750(uVar11,local_138,0x100);
      local_3d90 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_3d90 + 1U) {
        LOCK();
        *(int *)local_3d90 = *(int *)local_3d90 + 1;
        local_3d39 = *(int *)local_3d90 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sWrite handshake to SSL failed (SSL error: %s)",
                    local_3d88 + *(long *)(local_3d88 + 0x10),local_138);
      if (*(int *)local_3d88 != -1) {
        if (*(int *)local_3d88 != 0) {
          LOCK();
          *(int *)local_3d88 = *(int *)local_3d88 + -1;
          local_3d39 = *(int *)local_3d88 != 0;
          UNLOCK();
          if ((bool)local_3d39) goto LAB_1007a751c;
        }
        QArrayData::deallocate(local_3d88,1,8);
      }
LAB_1007a751c:
      if (*(int *)local_3d90 != -1) {
        if (*(int *)local_3d90 != 0) {
          LOCK();
          *(int *)local_3d90 = *(int *)local_3d90 + -1;
          local_3d39 = *(int *)local_3d90 != 0;
          UNLOCK();
          if ((bool)local_3d39) goto LAB_1007a7558;
        }
        QArrayData::deallocate(local_3d90,2,8);
      }
LAB_1007a7558:
      local_3da0 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_3da0 + 1U) {
        LOCK();
        *(int *)local_3da0 = *(int *)local_3da0 + 1;
        local_3d39 = *(int *)local_3da0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sSSL handshake: read failed, timeout %d",
                    local_3d98 + *(long *)(local_3d98 + 0x10),0);
      if (*(int *)local_3d98 != -1) {
        if (*(int *)local_3d98 != 0) {
          LOCK();
          *(int *)local_3d98 = *(int *)local_3d98 + -1;
          local_3d39 = *(int *)local_3d98 != 0;
          UNLOCK();
          if ((bool)local_3d39) goto LAB_1007a75f5;
        }
        QArrayData::deallocate(local_3d98,1,8);
      }
LAB_1007a75f5:
      if (*(int *)local_3da0 == -1) goto LAB_1007a7729;
      pQVar12 = local_3da0;
      if (*(int *)local_3da0 == 0) goto LAB_1007a771a;
      LOCK();
      *(int *)local_3da0 = *(int *)local_3da0 + -1;
      iVar8 = *(int *)local_3da0;
      UNLOCK();
      goto joined_r0x0001007a727d;
    }
    iVar7 = FUN_10087d780(*(undefined8 *)(param_1 + 0x338),local_3d38,local_3d7c);
  } while (iVar7 == iVar8);
  uVar11 = FUN_100888110();
  FUN_100888750(uVar11,local_138,0x100);
  local_3db0 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)local_3db0 + 1U) {
    LOCK();
    *(int *)local_3db0 = *(int *)local_3db0 + 1;
    local_3d39 = *(int *)local_3db0 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","IOCommunication",0,"%sWrite handshake to SSL failed (SSL error: %s)",
                local_3da8 + *(long *)(local_3da8 + 0x10),local_138);
  if (*(int *)local_3da8 != -1) {
    if (*(int *)local_3da8 != 0) {
      LOCK();
      *(int *)local_3da8 = *(int *)local_3da8 + -1;
      local_3d39 = *(int *)local_3da8 != 0;
      UNLOCK();
      if ((bool)local_3d39) goto LAB_1007a76ed;
    }
    QArrayData::deallocate(local_3da8,1,8);
  }
LAB_1007a76ed:
  if (*(int *)local_3db0 != -1) {
    pQVar12 = local_3db0;
    if (*(int *)local_3db0 != 0) {
      LOCK();
      *(int *)local_3db0 = *(int *)local_3db0 + -1;
      iVar8 = *(int *)local_3db0;
      UNLOCK();
joined_r0x0001007a727d:
      local_3d39 = iVar8 != 0;
      if ((bool)local_3d39) goto LAB_1007a7729;
    }
LAB_1007a771a:
    QArrayData::deallocate(pQVar12,2,8);
  }
LAB_1007a7729:
  *(undefined4 *)(param_1 + 0xa4) = 5;
  cVar4 = '\0';
LAB_1007a7737:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),cVar4);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

