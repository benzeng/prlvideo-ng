
undefined8 FUN_1000b9720(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  long *local_f8;
  long *local_f0;
  void *local_e8;
  void *pvStack_e0;
  undefined8 local_d8;
  long *local_d0;
  void *local_c8;
  void *pvStack_c0;
  undefined8 local_b8;
  long *local_b0;
  void *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  long *local_90;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  long *local_70;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  long *local_50;
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
  if (iVar2 < 0x4e21) {
    if ((iVar2 == 0x3f0) || (iVar2 == 0x3f3)) {
      iVar2 = FUN_1000b3f60(param_1);
      if (iVar2 == 0) goto LAB_1000b9a79;
    }
    else if (iVar2 != 0x3f4) {
      return 0;
    }
    goto LAB_1000b9a66;
  }
  if (iVar2 < 0x4e4a) {
    if (iVar2 < 0x4e2c) {
      if (iVar2 == 0x4e21) {
LAB_1000b9958:
        FUN_1000a78a0(param_1,0);
        FUN_1000a7ae0(param_1,0,0);
        uVar7 = DAT_1011c3650;
        iVar2 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
        local_68 = (void *)0x0;
        pvStack_60 = (void *)0x0;
        local_58 = 0;
        plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_70 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          *(undefined4 *)(plVar4 + 1) = 1;
          plVar4[2] = 0;
          *plVar4 = (long)&PTR_FUN_100bef0d0;
          local_70 = plVar4;
        }
        uVar5 = 0x186b4;
        if (iVar2 != 0x4e21) {
          uVar5 = 0x186ec;
        }
        FUN_100063770(uVar7,uVar5,0,&local_68,0xbbb,&local_70);
        if (local_70 != (long *)0x0) {
          LOCK();
          plVar4 = local_70 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_70 + 0x10))();
          }
        }
        if (local_68 != (void *)0x0) {
          if (pvStack_60 != local_68) {
            pvStack_60 = (void *)((~((long)pvStack_60 + (-8 - (long)local_68)) & 0xfffffffffffffff8U
                                  ) + (long)pvStack_60);
          }
          operator_delete(local_68);
        }
        FUN_10008ec80(param_1,0xe);
LAB_1000b9a4c:
        FUN_10008f910(param_1,0);
        return 1;
      }
      if (iVar2 != 0x4e22) {
        return 0;
      }
      goto LAB_1000b9a79;
    }
    if (iVar2 < 0x4e2e) {
      if (iVar2 != 0x4e2c) {
        return 0;
      }
LAB_1000b9a66:
      cVar1 = FUN_10008f440(param_1);
      if (cVar1 != '\0') {
        DAT_1011c36a0 = '\x01';
      }
      goto LAB_1000b9a79;
    }
    if (0x4e38 < iVar2) {
      if (iVar2 == 0x4e39) goto LAB_1000b9958;
      if (iVar2 != 0x4e3b) {
        return 0;
      }
      goto LAB_1000b9a66;
    }
    if (iVar2 == 0x4e2e) goto LAB_1000b9a66;
    if (iVar2 != 0x4e30) {
      return 0;
    }
    DAT_1011c36a0 = '\x01';
    FUN_10008f440(param_1);
LAB_1000b9f17:
    FUN_10008fa70(param_1,0x4e30);
    uVar7 = 0x12;
    goto LAB_1000ba0a2;
  }
  if (iVar2 != 0x4e4a) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x108);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x14) == 0x40f) {
      FUN_10008f790(param_1,lVar6,0x80000275);
      *(undefined8 *)(param_1 + 0x108) = 0;
      if (*(long *)(param_1 + 0x50) == 0) {
        FUN_1000a78a0(param_1,0);
        FUN_1000a7ae0(param_1,0,0);
        FUN_10008ec80(param_1,0xe);
        uVar7 = DAT_1011c3650;
        local_48 = (void *)0x0;
        pvStack_40 = (void *)0x0;
        local_38 = 0;
        plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_50 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          *(undefined4 *)(plVar4 + 1) = 1;
          plVar4[2] = 0;
          *plVar4 = (long)&PTR_FUN_100bef0d0;
          local_50 = plVar4;
        }
        FUN_100063770(uVar7,0x186b4,0,&local_48,0xbbb,&local_50);
        if (local_50 != (long *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
        if (local_48 != (void *)0x0) {
          if (pvStack_40 != local_48) {
            pvStack_40 = (void *)((~((long)pvStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U
                                  ) + (long)pvStack_40);
          }
          operator_delete(local_48);
        }
        goto LAB_1000b9a4c;
      }
    }
    else if (*(long *)(param_1 + 0x50) == 0) {
      FUN_100097120(param_1);
      FUN_10008fa70(param_1,0x3f0);
    }
  }
LAB_1000b9a79:
  FUN_10008f910(param_1,0);
  uVar7 = DAT_1011c3650;
  lVar6 = *(long *)(param_1 + 0x50);
  if (lVar6 == 0) {
    local_88 = (void *)0x0;
    pvStack_80 = (void *)0x0;
    local_78 = 0;
    plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_90 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_FUN_100bef0d0;
      local_90 = plVar4;
    }
    FUN_100063770(uVar7,0x186b3,0,&local_88,0xbbb,&local_90);
    if (local_90 != (long *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (local_88 != (void *)0x0) {
      if (pvStack_80 != local_88) {
        pvStack_80 = (void *)((~((long)pvStack_80 + (-8 - (long)local_88)) & 0xfffffffffffffff8U) +
                             (long)pvStack_80);
      }
      operator_delete(local_88);
      return 1;
    }
    return 1;
  }
  iVar2 = *(int *)(lVar6 + 0x14);
  if (iVar2 == 0x4e22) {
    iVar2 = 0;
    if (*(int *)(lVar6 + 0x28) != 0) {
      iVar2 = (int)**(undefined8 **)(lVar6 + 0x30);
    }
    if (iVar2 != 0) {
      FUN_10008f1c0(param_1,9,iVar2 * 1000,1,1);
      lVar6 = *(long *)(param_1 + 0x50);
      iVar2 = *(int *)(lVar6 + 0x14);
      goto LAB_1000b9ad6;
    }
LAB_1000b9f39:
    uVar7 = DAT_1011c3650;
    local_a8 = (void *)0x0;
    pvStack_a0 = (void *)0x0;
    local_98 = 0;
    plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_b0 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_FUN_100bef0d0;
      local_b0 = plVar4;
    }
    FUN_100063770(uVar7,0x186b3,0,&local_a8,0xbbb,&local_b0);
    if (local_b0 != (long *)0x0) {
      LOCK();
      plVar4 = local_b0 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    if (local_a8 != (void *)0x0) {
      pvVar8 = local_a8;
      if (pvStack_a0 != local_a8) {
        pvStack_a0 = (void *)((~((long)pvStack_a0 + (-8 - (long)local_a8)) & 0xfffffffffffffff8U) +
                             (long)pvStack_a0);
      }
LAB_1000ba00a:
      operator_delete(pvVar8);
    }
LAB_1000ba00f:
    iVar3 = 0;
  }
  else {
LAB_1000b9ad6:
    uVar7 = DAT_1011c3650;
    iVar3 = -0x7ffffff7;
    if (iVar2 < 0x4e22) {
      if (iVar2 < 0x3f4) {
        if (iVar2 == 0x3f0) {
          iVar2 = FUN_1000b3f60(param_1);
          uVar5 = DAT_1011c3650;
          uVar7 = 0xc;
          if (iVar2 == 0) goto LAB_1000ba0a2;
          local_e8 = (void *)0x0;
          pvStack_e0 = (void *)0x0;
          local_d8 = 0;
          plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
          local_f0 = (long *)0x0;
          if (plVar4 != (long *)0x0) {
            *(undefined4 *)(plVar4 + 1) = 1;
            plVar4[2] = 0;
            *plVar4 = (long)&PTR_FUN_100bef0d0;
            local_f0 = plVar4;
          }
          FUN_100063770(uVar5,0x186ab,0,&local_e8,0xbbb,&local_f0);
          if (local_f0 != (long *)0x0) {
            LOCK();
            plVar4 = local_f0 + 1;
            lVar6 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)(*local_f0 + 0x10))();
            }
          }
          if (local_e8 != (void *)0x0) {
            if (pvStack_e0 != local_e8) {
              pvStack_e0 = (void *)((~((long)pvStack_e0 + (-8 - (long)local_e8)) &
                                    0xfffffffffffffff8U) + (long)pvStack_e0);
            }
            operator_delete(local_e8);
          }
          uVar7 = *(undefined8 *)(param_1 + 0x109c8);
          plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
          local_f8 = (long *)0x0;
          if (plVar4 != (long *)0x0) {
            *(undefined4 *)(plVar4 + 1) = 1;
            plVar4[2] = 0;
            *plVar4 = (long)&PTR_FUN_100bef0d0;
            local_f8 = plVar4;
          }
          FUN_1000d24f0(uVar7,&local_f8);
          if (local_f8 != (long *)0x0) {
            LOCK();
            plVar4 = local_f8 + 1;
            lVar6 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)(*local_f8 + 0x10))();
            }
          }
          FUN_10008dc80(*(undefined8 *)(param_1 + 0x1940));
          iVar3 = FUN_1000cba70(*(undefined8 *)(param_1 + 0x109c8));
          uVar7 = 7;
        }
        else {
          if (iVar2 != 0x3f3) goto LAB_1000ba05e;
          iVar2 = FUN_1000b3f60(param_1);
          uVar7 = 0xc;
          if (iVar2 == 0) goto LAB_1000ba0a2;
          FUN_1000d24f0(*(undefined8 *)(param_1 + 0x109c8),*(long *)(param_1 + 0x50) + 0x18);
          FUN_10008dc80(*(undefined8 *)(param_1 + 0x1940));
          iVar3 = FUN_1000cc070(*(undefined8 *)(param_1 + 0x109c8),*(long *)(param_1 + 0x50) + 0x18)
          ;
LAB_1000b9eff:
          uVar7 = 10;
        }
      }
      else {
        if (iVar2 != 0x3f4) {
          if (iVar2 != 0xfa9) goto LAB_1000ba05e;
          goto LAB_1000b9f39;
        }
        iVar3 = FUN_1000cc520(*(undefined8 *)(param_1 + 0x109c8),lVar6 + 0x18);
        *(undefined4 *)(param_1 + 0x1948) = 4;
        uVar7 = 0xc;
      }
LAB_1000ba059:
      if (iVar3 == 0) {
LAB_1000ba0a2:
        FUN_10008ec80(param_1,uVar7);
        return 1;
      }
    }
    else if (iVar2 < 0x4e38) {
      if (iVar2 < 0x4e30) {
        if (iVar2 - 0x4e22U < 2) goto LAB_1000b9f39;
        if (iVar2 == 0x4e2c) {
          iVar3 = FUN_1000cbb80(*(undefined8 *)(param_1 + 0x109c8),lVar6 + 0x18);
          goto LAB_1000b9eff;
        }
        if (iVar2 == 0x4e2e) {
          iVar3 = FUN_1000ccd20(*(undefined8 *)(param_1 + 0x109c8),lVar6 + 0x18);
          uVar7 = 0x13;
          goto LAB_1000ba059;
        }
      }
      else if (iVar2 == 0x4e30) goto LAB_1000b9f17;
    }
    else {
      if (iVar2 == 0x4e38) {
        local_c8 = (void *)0x0;
        pvStack_c0 = (void *)0x0;
        local_b8 = 0;
        plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_d0 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          *(undefined4 *)(plVar4 + 1) = 1;
          plVar4[2] = 0;
          *plVar4 = (long)&PTR_FUN_100bef0d0;
          local_d0 = plVar4;
        }
        FUN_100063770(uVar7,0x186eb,0,&local_c8,0xbbb,&local_d0);
        if (local_d0 != (long *)0x0) {
          LOCK();
          plVar4 = local_d0 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_d0 + 0x10))();
          }
        }
        if (local_c8 != (void *)0x0) {
          pvVar8 = local_c8;
          if (pvStack_c0 != local_c8) {
            pvStack_c0 = (void *)((~((long)pvStack_c0 + (-8 - (long)local_c8)) & 0xfffffffffffffff8U
                                  ) + (long)pvStack_c0);
          }
          goto LAB_1000ba00a;
        }
        goto LAB_1000ba00f;
      }
      if (iVar2 == 0x4e3b) {
        iVar3 = FUN_1000cd260(*(undefined8 *)(param_1 + 0x109c8),lVar6 + 0x18);
        uVar7 = 0x15;
        goto LAB_1000ba059;
      }
    }
LAB_1000ba05e:
    if (DAT_1011c36a0 == '\0') {
      FUN_10008ec80(param_1,0xe);
      FUN_1000a78a0(param_1,0);
      FUN_1000a7ae0(param_1,0,0);
    }
    *(undefined4 *)(param_1 + 0x1948) = 0;
  }
  FUN_10008f760(param_1,iVar3);
  return 1;
}

