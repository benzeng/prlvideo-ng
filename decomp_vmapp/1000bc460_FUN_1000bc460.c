
undefined8 FUN_1000bc460(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  long *local_80;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  long *local_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  long *local_40;
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  FUN_10008f4d0();
  FUN_100062ab0(DAT_1011c3650);
  uVar8 = DAT_1011c3650;
  if (*(long *)(param_1 + 0x50) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x50) + 0x14);
    if (iVar1 < 0x3f4) {
      if (iVar1 != 0x3ee) {
LAB_1000bc51e:
        FUN_10008f790(param_1,*(undefined8 *)(param_1 + 0x108),0x80000275);
        *(undefined8 *)(param_1 + 0x108) = 0;
        uVar8 = DAT_1011c3650;
        local_58 = (void *)0x0;
        pvStack_50 = (void *)0x0;
        local_48 = 0;
        plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_60 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar7[2] = 0;
          *plVar7 = (long)&PTR_FUN_100bef0d0;
          local_60 = plVar7;
        }
        FUN_100063770(uVar8,0x186c7,0,&local_58,0xbbb,&local_60);
        if (local_60 != (long *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_60 + 0x10))();
          }
        }
        if (local_58 != (void *)0x0) {
          if (pvStack_50 != local_58) {
            pvStack_50 = (void *)((~((long)pvStack_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U
                                  ) + (long)pvStack_50);
          }
          operator_delete(local_58);
        }
        goto LAB_1000bc6b3;
      }
    }
    else if (iVar1 < 0x4e26) {
      if (iVar1 == 0x3f4) goto LAB_1000bc6b3;
      if (iVar1 != 0x40f) goto LAB_1000bc51e;
    }
    else if (iVar1 == 0x4e28) {
      if ((*(long *)(param_1 + 0x108) == 0) ||
         (*(int *)(*(long *)(param_1 + 0x108) + 0x14) != 0x40f)) {
        local_38 = (void *)0x0;
        pvStack_30 = (void *)0x0;
        local_28 = 0;
        plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_40 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar7[2] = 0;
          *plVar7 = (long)&PTR_FUN_100bef0d0;
          local_40 = plVar7;
        }
        FUN_100063770(uVar8,0x186c7,0,&local_38,0xbbb,&local_40);
        if (local_40 != (long *)0x0) {
          LOCK();
          plVar7 = local_40 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_40 + 0x10))();
          }
        }
        if (local_38 != (void *)0x0) {
          if (pvStack_30 != local_38) {
            pvStack_30 = (void *)((~((long)pvStack_30 + (-8 - (long)local_38)) & 0xfffffffffffffff8U
                                  ) + (long)pvStack_30);
          }
          operator_delete(local_38);
        }
        goto LAB_1000bc6b3;
      }
      FUN_10008f760(param_1,0);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x108);
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else if (iVar1 != 0x4e26) goto LAB_1000bc51e;
    *(undefined4 *)(param_1 + 0x1948) = 2;
  }
LAB_1000bc6b3:
  lVar6 = *(long *)(param_1 + 0x108);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x14) - 0x4e29U < 2) {
      uVar8 = 0x80000275;
      if (*(int *)(param_1 + 0x1948) != 2) {
        uVar8 = 0;
      }
    }
    else {
      if (*(int *)(lVar6 + 0x14) != 0x40f) goto LAB_1000bc70e;
      uVar8 = 0;
      if (*(int *)(param_1 + 0x1948) != 2) {
        uVar8 = 0x80000275;
      }
    }
    FUN_10008f790(param_1,lVar6,uVar8);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
LAB_1000bc70e:
  switch(*(undefined4 *)(param_1 + 0x1948)) {
  case 2:
    if (*(int *)(*(long *)(param_1 + 0x109c8) + 0x1f0) == 0) goto switchD_1000bc767_caseD_4;
    FUN_1008e3970("","vm",0,"Wait for snapshot action to complete before restart");
    goto LAB_1000bca0b;
  case 3:
  case 5:
switchD_1000bc767_caseD_3:
    lVar6 = *(long *)(param_1 + 0x109c8);
    if (*(int *)(lVar6 + 0x1f0) != 0) {
      FUN_1008e3970("","vm",0);
      goto LAB_1000bc7b7;
    }
    break;
  case 4:
    goto switchD_1000bc767_caseD_4;
  default:
    uVar2 = *(uint *)(*(long *)(param_1 + 0x109c8) + 0x1f0);
    if ((uVar2 & 0x2000000) == 0) {
      if (uVar2 != 0) {
        FUN_1008e3970("","vm",0,"Wait for snapshot action to complete (%u)");
        goto LAB_1000bca0b;
      }
      goto switchD_1000bc767_caseD_3;
    }
    FUN_1008e3970("","vm",0);
LAB_1000bc7b7:
    lVar6 = *(long *)(param_1 + 0x109c8);
  }
  FUN_1000c6950(lVar6);
switchD_1000bc767_caseD_4:
  FUN_1000a7c40(param_1);
  cVar3 = FUN_1000a7bc0(param_1);
  if (cVar3 == '\0') {
    FUN_100471370(param_1 + 0x10840);
    FUN_1000a9530(param_1);
    FUN_10042fe30(*(undefined8 *)(param_1 + 0xf0));
    FUN_1000a45d0(param_1);
    FUN_10008f940(param_1);
    lVar6 = CVmConfiguration::getVmSettings();
    if (lVar6 == 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmSettings",
                    "VirtualPCStates.cpp",0x2b9,"stateVmStopped");
    }
    bVar4 = (bool)CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setCpuFeaturesMaskValid(bVar4);
    if (*(long *)(param_1 + 0x50) == 0) {
      *(undefined1 *)(param_1 + 0x80) = 0;
      FUN_10008eef0(param_1);
      FUN_10008f9b0(param_1);
      FUN_10008f940(param_1);
      uVar8 = DAT_1011c3650;
      bVar5 = FUN_1000bdea0(param_1);
      local_78 = (void *)0x0;
      pvStack_70 = (void *)0x0;
      local_68 = 0;
      plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_80 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        *(undefined4 *)(plVar7 + 1) = 1;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_100bef0d0;
        local_80 = plVar7;
      }
      FUN_100063770(uVar8,(uint)bVar5 * 4 + 0x186a8,0,&local_78,0xbbb,&local_80);
      if (local_80 != (long *)0x0) {
        LOCK();
        plVar7 = local_80 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      if (local_78 == (void *)0x0) {
        return 1;
      }
      if (pvStack_70 != local_78) {
        pvStack_70 = (void *)((~((long)pvStack_70 + (-8 - (long)local_78)) & 0xfffffffffffffff8U) +
                             (long)pvStack_70);
      }
      operator_delete(local_78);
      return 1;
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x50) + 0x14);
    if (iVar1 < 0x40f) {
      if (iVar1 == 0x3ee) {
LAB_1000bca4d:
        uVar8 = 1;
        goto LAB_1000bca10;
      }
      if (iVar1 == 0x3f4) {
        FUN_10008ec80(param_1,0xb);
        FUN_10008f910(param_1,0);
        return 1;
      }
    }
    else if (iVar1 - 0x4e27U < 2) {
      FUN_10008f760(param_1,0);
    }
    else if ((iVar1 == 0x40f) || (iVar1 == 0x4e26)) goto LAB_1000bca4d;
    *(undefined1 *)(param_1 + 0x80) = 0;
    FUN_10008eef0(param_1);
    FUN_10008f9b0(param_1);
    FUN_10008f940(param_1);
    uVar8 = DAT_1011c3650;
    bVar5 = FUN_1000bdea0(param_1);
    local_98 = (void *)0x0;
    pvStack_90 = (void *)0x0;
    local_88 = 0;
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_a0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_100bef0d0;
      local_a0 = plVar7;
    }
    FUN_100063770(uVar8,(uint)bVar5 * 4 + 0x186a8,0,&local_98,0xbbb,&local_a0);
    if (local_a0 != (long *)0x0) {
      LOCK();
      plVar7 = local_a0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
    if (local_98 != (void *)0x0) {
      if (pvStack_90 != local_98) {
        pvStack_90 = (void *)((~((long)pvStack_90 + (-8 - (long)local_98)) & 0xfffffffffffffff8U) +
                             (long)pvStack_90);
      }
      operator_delete(local_98);
    }
  }
  else {
    FUN_1008e3970("","vm",0,"Wait for the VCPU threads to stop");
    FUN_10008f1c0(param_1,8,0x1e,0,1);
LAB_1000bca0b:
    uVar8 = 0xd;
LAB_1000bca10:
    FUN_10008ec80(param_1,uVar8);
  }
  return 1;
}

