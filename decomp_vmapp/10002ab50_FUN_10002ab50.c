
undefined8 FUN_10002ab50(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  CVmEventParameter *pCVar8;
  long *plVar9;
  char *pcVar10;
  uint *puVar11;
  undefined4 uVar12;
  long *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  CVmEventParameter *local_100;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  undefined8 *local_e8;
  long *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  CVmEventParameter *local_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  long *local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  long *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  CVmEventParameter *local_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  long local_40;
  undefined1 local_31;
  
  lVar2 = *param_2;
  lVar3 = *(long *)(lVar2 + 0x10);
  puVar1 = (undefined8 *)(lVar2 + lVar3);
  QByteArray::resize((int)param_3);
  puVar11 = (uint *)*param_3;
  if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
    QByteArray::reallocData(param_3,puVar11[1] + 1,puVar11[2] >> 0x1f);
    puVar11 = (uint *)*param_3;
  }
  lVar4 = *(long *)(puVar11 + 4);
  uVar5 = *puVar1;
  *(undefined8 *)((long)puVar11 + lVar4 + 8) = puVar1[1];
  *(undefined8 *)((long)puVar11 + lVar4) = uVar5;
  uVar12 = 0xffffffff;
  switch(*(undefined4 *)(lVar3 + 0xc + lVar2)) {
  case 1:
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar6 = CVmCommonOptions::getOsVersion();
    local_40 = *(long *)(param_1 + 0x10) + 0x110;
    iVar7 = FUN_1000b4970(&local_40);
    uVar12 = 7;
    if (iVar7 == 2) {
      uVar12 = 0;
    }
    if ((iVar6 - 0x80cU < 5) && ((0x13U >> (iVar6 - 0x80cU & 0x1f) & 1) != 0)) {
      uVar12 = 0;
    }
    FUN_1008e3970("PTIAHOST","vm",0,"PIS: PisSupported = %u",uVar12);
    break;
  case 2:
    break;
  case 3:
    FUN_1008e3970("PTIAHOST","vm",0,"PIS: Not Found.");
    break;
  case 4:
    FUN_1008e3970("PTIAHOST","vm",0,"PIS: Ask to install Antivirus");
    uVar5 = DAT_1011c3650;
    local_98 = (void *)0x0;
    pvStack_90 = (void *)0x0;
    local_88 = 0;
    plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_a0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_100bef0d0;
      local_a0 = plVar9;
    }
    FUN_100063770(uVar5,0x189c6,0,&local_98,0xbbb,&local_a0);
    if (local_a0 != (long *)0x0) {
      LOCK();
      plVar9 = local_a0 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
    break;
  case 5:
    local_58 = (undefined8 *)0x0;
    puStack_50 = (undefined8 *)0x0;
    local_48 = (undefined8 *)0x0;
    pCVar8 = operator_new(0xd0);
    local_70 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_68,&local_70,1,0,10,0x20);
    local_78 = (QArrayData *)QString::fromAscii_helper("vmcfg_installed_software_id",0x1b);
    CVmEventParameter::CVmEventParameter(pCVar8,2,&local_68);
    local_60 = pCVar8;
    if (puStack_50 == local_48) {
      FUN_10002da50(&local_58,&local_60);
    }
    else {
      *puStack_50 = pCVar8;
      puStack_50 = puStack_50 + 1;
    }
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002b037;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_10002b037:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002b069;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10002b069:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002b099;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10002b099:
    uVar5 = DAT_1011c3650;
    plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_80 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_100bef0d0;
      local_80 = plVar9;
    }
    FUN_100063770(uVar5,0x189c5,0,&local_58,0xbbb,&local_80);
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar9 = local_80 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      if (puStack_50 != local_58) {
        puStack_50 = (undefined8 *)
                     ((~((long)puStack_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U) +
                     (long)puStack_50);
      }
      operator_delete(local_58);
    }
    pcVar10 = "PIS: Kaspersky installed sucessfully";
    goto LAB_10002b486;
  default:
    FUN_1008e3970("PTIAHOST","vm",0,"PIS: Unknown command (%u)!");
    break;
  case 0xb:
    local_b8 = (undefined8 *)0x0;
    puStack_b0 = (undefined8 *)0x0;
    local_a8 = (undefined8 *)0x0;
    pCVar8 = operator_new(0xd0);
    local_d0 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_c8,&local_d0,4,0,10,0x20);
    local_d8 = (QArrayData *)QString::fromAscii_helper("vmcfg_installed_software_id",0x1b);
    CVmEventParameter::CVmEventParameter(pCVar8,2,&local_c8);
    local_c0 = pCVar8;
    if (puStack_b0 == local_a8) {
      FUN_10002da50(&local_b8,&local_c0);
    }
    else {
      *puStack_b0 = pCVar8;
      puStack_b0 = puStack_b0 + 1;
    }
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002b1ac;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_10002b1ac:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002b1e4;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_10002b1e4:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002b21a;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_10002b21a:
    uVar5 = DAT_1011c3650;
    plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_e0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_100bef0d0;
      local_e0 = plVar9;
    }
    FUN_100063770(uVar5,0x189c5,0,&local_b8,0xbbb,&local_e0);
    if (local_e0 != (long *)0x0) {
      LOCK();
      plVar9 = local_e0 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    if (local_b8 != (undefined8 *)0x0) {
      if (puStack_b0 != local_b8) {
        puStack_b0 = (undefined8 *)
                     ((~((long)puStack_b0 + (-8 - (long)local_b8)) & 0xfffffffffffffff8U) +
                     (long)puStack_b0);
      }
      operator_delete(local_b8);
    }
    pcVar10 = "PIS: Norton installed sucessfully";
    goto LAB_10002b486;
  case 0x11:
    local_f8 = (undefined8 *)0x0;
    puStack_f0 = (undefined8 *)0x0;
    local_e8 = (undefined8 *)0x0;
    pCVar8 = operator_new(0xd0);
    local_110 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_108,&local_110,8,0,10,0x20);
    local_118 = (QArrayData *)QString::fromAscii_helper("vmcfg_installed_software_id",0x1b);
    CVmEventParameter::CVmEventParameter(pCVar8,2,&local_108);
    local_100 = pCVar8;
    if (puStack_f0 == local_e8) {
      FUN_10002da50(&local_f8,&local_100);
    }
    else {
      *puStack_f0 = pCVar8;
      puStack_f0 = puStack_f0 + 1;
    }
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002b342;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_10002b342:
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002b37a;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_10002b37a:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002b3b0;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_10002b3b0:
    uVar5 = DAT_1011c3650;
    plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_120 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_100bef0d0;
      local_120 = plVar9;
    }
    FUN_100063770(uVar5,0x189c5,0,&local_f8,0xbbb,&local_120);
    if (local_120 != (long *)0x0) {
      LOCK();
      plVar9 = local_120 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_120 + 0x10))();
      }
    }
    if (local_f8 != (undefined8 *)0x0) {
      if (puStack_f0 != local_f8) {
        puStack_f0 = (undefined8 *)
                     ((~((long)puStack_f0 + (-8 - (long)local_f8)) & 0xfffffffffffffff8U) +
                     (long)puStack_f0);
      }
      operator_delete(local_f8);
    }
    pcVar10 = "PIS: DrWeb installed sucessfully";
LAB_10002b486:
    FUN_1008e3970("PTIAHOST","vm",0,pcVar10);
  }
  *(undefined4 *)(lVar4 + 0xc + (long)puVar11) = uVar12;
  return 0;
}

