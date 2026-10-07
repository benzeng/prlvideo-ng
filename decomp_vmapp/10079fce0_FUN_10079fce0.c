
undefined8 FUN_10079fce0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  QArrayData *pQVar8;
  QArrayData *local_a0;
  QArrayData *local_90;
  long *local_88;
  undefined4 local_7c;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_51;
  undefined4 local_50;
  undefined1 local_4c [20];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar7 = 0;
    goto LAB_10079ff2e;
  }
  lVar6 = param_1 + 400;
  iVar4 = FUN_1007c7b80(lVar6,param_2,*(undefined4 *)(param_1 + 0x2e8),&DAT_100b4b000,0x48,param_4,0
                       );
  if (iVar4 == 0) {
    local_50 = *(undefined4 *)(param_1 + 0x30);
    FUN_1007ea6d0(param_3,local_4c);
    if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
       (uVar5 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar5 & 0x3000) == 0)) {
      iVar4 = FUN_1007c91d0(lVar6,param_2,*(undefined4 *)(param_1 + 0x2e8),&local_50,0x14,param_4,0)
      ;
    }
    else {
      iVar4 = FUN_1007c7b80(lVar6,param_2,*(undefined4 *)(param_1 + 0x2e8),&local_50,0x14,param_4,0)
      ;
    }
    if (iVar4 == 0) {
      local_7c = 0;
      FUN_1007942d0(&local_88,*(undefined8 *)(param_1 + 0x28),&local_7c);
      uVar3 = local_7c;
      if ((local_88 == (long *)0x0) || (lVar2 = local_88[2], lVar2 == 0)) {
        pQVar8 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)pQVar8 + 1U) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + 1;
          local_51 = *(int *)pQVar8 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                      local_90 + *(long *)(local_90 + 0x10));
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_51 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1007a013f;
          }
          QArrayData::deallocate(local_90,1,8);
        }
LAB_1007a013f:
        if (*(int *)pQVar8 != -1) {
          if (*(int *)pQVar8 != 0) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_51 = *(int *)pQVar8 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1007a0175;
          }
          QArrayData::deallocate(pQVar8,2,8);
        }
LAB_1007a0175:
        *(undefined4 *)(param_1 + 0xa4) = 3;
        uVar7 = 0;
      }
      else {
        if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
           (uVar5 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar5 & 0x3000) == 0)) {
          iVar4 = FUN_1007c91d0(lVar6,param_2,*(undefined4 *)(param_1 + 0x2e8),lVar2,uVar3,param_4,0
                               );
        }
        else {
          iVar4 = FUN_1007c7b80(lVar6,param_2,*(undefined4 *)(param_1 + 0x2e8),lVar2,uVar3,param_4,0
                               );
        }
        uVar7 = 1;
        if (iVar4 != 0) {
          pQVar8 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)pQVar8 + 1U) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + 1;
            local_51 = *(int *)pQVar8 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,
                        "%sHandshake error: routing table send has been failed!",
                        local_a0 + *(long *)(local_a0 + 0x10));
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_51 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_51) goto LAB_1007a006e;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
LAB_1007a006e:
          if (*(int *)pQVar8 != -1) {
            if (*(int *)pQVar8 != 0) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_51 = *(int *)pQVar8 != 0;
              UNLOCK();
              if ((bool)local_51) goto LAB_1007a0175;
            }
            QArrayData::deallocate(pQVar8,2,8);
          }
          goto LAB_1007a0175;
        }
      }
      if (local_88 != (long *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_10079ff2e;
    }
    local_78 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_51 = *(int *)local_78 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sHandshake error: handshake struct send has been failed!"
                  ,local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_51 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_10079fee7;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_10079fee7:
    if (*(int *)local_78 != -1) {
      pQVar8 = local_78;
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        iVar4 = *(int *)local_78;
        UNLOCK();
        goto joined_r0x00010079ff02;
      }
      goto LAB_10079ff08;
    }
  }
  else {
    local_68 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_51 = *(int *)local_68 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sHandshake error: protocol version send has been failed!"
                  ,local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_51 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_10079fdd1;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_10079fdd1:
    if (*(int *)local_68 != -1) {
      pQVar8 = local_68;
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        iVar4 = *(int *)local_68;
        UNLOCK();
joined_r0x00010079ff02:
        local_51 = iVar4 != 0;
        if ((bool)local_51) goto LAB_10079ff17;
      }
LAB_10079ff08:
      QArrayData::deallocate(pQVar8,2,8);
    }
  }
LAB_10079ff17:
  *(undefined4 *)(param_1 + 0xa4) = 3;
  uVar7 = 0;
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10079ff2e:
  if (lVar6 == local_38) {
    return CONCAT71((int7)((ulong)lVar6 >> 8),uVar7);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

