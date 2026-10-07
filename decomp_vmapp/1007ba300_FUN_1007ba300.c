
undefined8 FUN_1007ba300(long param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  QArrayData *pQVar3;
  char cVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 uVar11;
  bool bVar12;
  ulong local_108;
  QArrayData *local_f0;
  long local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  QString local_98;
  long *local_90;
  undefined1 local_88 [32];
  QArrayData *local_68;
  undefined1 local_59;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  local_68 = *(QArrayData **)(param_1 + 0x48);
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_59 = *(int *)local_68 != 0;
    UNLOCK();
  }
  local_108 = param_1 + 0x58U & 0xfffffffffffffffe;
  QMutex::unlock();
  QMutex::lock();
  FUN_1007b7670(local_88,param_1 + 0xa8);
  QMutex::unlock();
  if ((param_2 == -1) && (*(int *)(param_1 + 0x30) == 2)) {
    local_90 = (long *)0x0;
    FUN_1007d6a90(&local_98,param_4 + 0x114);
    cVar4 = operator==(&local_98,(QString *)&DAT_1011ccba0);
    if ((cVar4 == '\0') && (*(int *)(local_98.field0_0x0 + 4) != 0)) {
      lVar10 = *(long *)(param_1 + 0x28);
      uVar1 = *(undefined4 *)(lVar10 + 0x40);
      local_a0 = (long *)0x0;
      pvVar5 = operator_new(0x20);
      FUN_10079a890(pvVar5,&local_98,lVar10 + 0x38,uVar1,&local_a0);
      plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      bVar12 = plVar6 == (long *)0x0;
      if (bVar12) {
        FUN_1007c4250(pvVar5);
        operator_delete(pvVar5);
        plVar6 = (long *)0x0;
      }
      else {
        *(undefined4 *)(plVar6 + 1) = 1;
        plVar6[2] = (long)pvVar5;
        *plVar6 = (long)&PTR_FUN_1011a5d80;
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      plVar8 = plVar6;
      if (local_90 != (long *)0x0) {
        LOCK();
        plVar9 = local_90 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          lVar10 = *local_90;
          local_90 = plVar6;
          (**(code **)(lVar10 + 0x10))();
          plVar8 = local_90;
        }
      }
      local_90 = plVar8;
      if (!bVar12) {
        LOCK();
        plVar8 = plVar6 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (local_a0 != (long *)0x0) {
        LOCK();
        plVar6 = local_a0 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)(*local_a0 + 0x10))();
        }
      }
    }
    plVar6 = operator_new(0x3c8);
    lVar10 = *(long *)(param_1 + 0x28);
    local_a8 = *(long **)(lVar10 + 0x28);
    if (local_a8 != (long *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
      lVar10 = *(long *)(param_1 + 0x28);
    }
    uVar1 = *(undefined4 *)(lVar10 + 0x30);
    uVar2 = *(undefined4 *)(lVar10 + 0x40);
    FUN_1007d6920(local_48,&local_68);
    lVar7 = lVar10 + 0x78;
    if (lVar10 == 0) {
      lVar7 = 0;
    }
    local_b0 = (long *)0x0;
    FUN_10079bf40(plVar6,&local_a8,lVar10 + 0x50,uVar1,1,lVar10 + 0x38,uVar2,&local_90,1,lVar7,
                  param_1 + 0x18,0xffffffff,local_48,&local_b0,local_88,0,1);
    plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (plVar8 == (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
      plVar8 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      plVar8[2] = (long)plVar6;
      *plVar8 = (long)&PTR_FUN_1011a5de8;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar8 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (local_b0 != (long *)0x0) {
      LOCK();
      plVar6 = local_b0 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    if (local_a8 != (long *)0x0) {
      LOCK();
      plVar6 = local_a8 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)(*local_a8 + 0x10))();
      }
    }
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_59 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1007ba905;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_1007ba905:
    if (local_90 != (long *)0x0) {
      LOCK();
      plVar6 = local_90 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
  }
  else {
    plVar6 = operator_new(0x3c8);
    lVar10 = *(long *)(param_1 + 0x28);
    local_b8 = *(long **)(lVar10 + 0x28);
    if (local_b8 != (long *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
      lVar10 = *(long *)(param_1 + 0x28);
    }
    uVar1 = *(undefined4 *)(lVar10 + 0x30);
    uVar2 = *(undefined4 *)(lVar10 + 0x40);
    local_c0 = (long *)0x0;
    FUN_1007d6920(local_58,&local_68);
    lVar7 = lVar10 + 0x78;
    if (lVar10 == 0) {
      lVar7 = 0;
    }
    FUN_10079bf40(plVar6,&local_b8,lVar10 + 0x50,uVar1,0,lVar10 + 0x38,uVar2,&local_c0,1,lVar7,
                  param_1 + 0x18,param_2,local_58,param_3,local_88,*(undefined1 *)(param_1 + 0xe0),1
                 );
    plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (plVar8 == (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
      plVar8 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      plVar8[2] = (long)plVar6;
      *plVar8 = (long)&PTR_FUN_1011a5de8;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar8 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (local_c0 != (long *)0x0) {
      LOCK();
      plVar6 = local_c0 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    if (local_b8 != (long *)0x0) {
      LOCK();
      plVar6 = local_b8 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
  }
  if ((plVar8 == (long *)0x0) || (plVar8[2] == 0)) {
    local_d0 = *(QArrayData **)(param_1 + 0x20);
    if (1 < *(int *)local_d0 + 1U) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + 1;
      local_59 = *(int *)local_d0 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                  local_c8 + *(long *)(local_c8 + 0x10));
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_59 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1007baa63;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
LAB_1007baa63:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_59 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1007bac68;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1007bac68:
    uVar11 = 0;
  }
  else {
    bVar12 = local_108 != 0;
    local_108 = 0;
    if (bVar12) {
      QMutex::lock();
      local_108 = param_1 + 0x58U | 1;
    }
    if (*(int *)(param_1 + 0x40) == 1) {
      local_e8 = plVar8[2];
      plVar9 = (long *)FUN_1007c2930(param_1 + 0x88,&local_e8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar6 = (long *)*plVar9;
      *plVar9 = (long)plVar8;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      if ((local_108 & 1) != 0) {
        local_108 = 0;
        QMutex::unlock();
      }
      cVar4 = FUN_10079e3e0(plVar8[2],300000);
      uVar11 = 1;
      if (cVar4 == '\0') {
        pQVar3 = *(QArrayData **)(param_1 + 0x20);
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_59 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sCan\'t start new client",
                      local_f0 + *(long *)(local_f0 + 0x10));
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_59 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_1007bac32;
          }
          QArrayData::deallocate(local_f0,1,8);
        }
LAB_1007bac32:
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_59 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_1007bac68;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
        goto LAB_1007bac68;
      }
    }
    else {
      local_e0 = *(QArrayData **)(param_1 + 0x20);
      if (1 < *(int *)local_e0 + 1U) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + 1;
        local_59 = *(int *)local_e0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sCan\'t create new client for not started server",
                    local_d8 + *(long *)(local_d8 + 0x10));
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_59 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1007bab34;
        }
        QArrayData::deallocate(local_d8,1,8);
      }
LAB_1007bab34:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_59 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1007bab6d;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_1007bab6d:
      uVar11 = 0;
    }
  }
  FUN_1000697c0(local_88);
  if ((local_108 & 1) != 0) {
    QMutex::unlock();
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_59 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1007bacc1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007bacc1:
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),uVar11);
}

