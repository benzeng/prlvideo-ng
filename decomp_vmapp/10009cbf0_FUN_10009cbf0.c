
void FUN_10009cbf0(void)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  CVmEventParameter *pCVar5;
  long *plVar6;
  char *pcVar7;
  void *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  undefined1 local_88 [24];
  QArrayData *local_70;
  long *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  CVmEventParameter *local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  undefined1 local_21;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVirtualPrintersInfo();
  cVar3 = CVmVirtualPrintersInfo::isUseHostPrinters();
  if (cVar3 == '\0') {
    pcVar7 = "Virtual Printers feature disabled.";
LAB_10009cd19:
    FUN_1008e3970("","vm",0,pcVar7);
    return;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVirtualPrintersInfo();
  cVar3 = CVmVirtualPrintersInfo::isSyncDefaultPrinter();
  if (cVar3 == '\0') {
    pcVar7 = "Sync Default Printer flag already disabled.";
    goto LAB_10009cd19;
  }
  CVmConfiguration::getVmSettings();
  bVar4 = (bool)CVmSettings::getVirtualPrintersInfo();
  CVmVirtualPrintersInfo::setSyncDefaultPrinter(bVar4);
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  pCVar5 = operator_new(0xd0);
  local_58 = (QArrayData *)QString::fromAscii_helper("1",1);
  local_60 = (QArrayData *)QString::fromAscii_helper("vmcfg_disable_sync_default_printer",0x22);
  CVmEventParameter::CVmEventParameter(pCVar5,1,&local_58);
  local_50 = pCVar5;
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_50);
  }
  else {
    *puStack_40 = pCVar5;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10009cd70;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10009cd70:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10009cda0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10009cda0:
  uVar2 = DAT_1011c3650;
  plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_68 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_100bef0d0;
    local_68 = plVar6;
  }
  FUN_100063770(uVar2,0x186bc,0,&local_48,0xbbb,&local_68);
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar6 = local_68 + 1;
    lVar1 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmName();
  FUN_10006a060(local_88);
  FUN_10006a120(local_88,&local_70,0);
  local_a8 = (void *)0x0;
  pvStack_a0 = (void *)0x0;
  local_98 = 0;
  FUN_1000648b0(DAT_1011c3650,0x80000545,&local_a8,local_88);
  if (local_a8 != (void *)0x0) {
    if (pvStack_a0 != local_a8) {
      pvStack_a0 = (void *)((~((long)pvStack_a0 + (-4 - (long)local_a8)) & 0xfffffffffffffffcU) +
                           (long)pvStack_a0);
    }
    operator_delete(local_a8);
  }
  FUN_10006a680(local_88);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10009ceee;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10009ceee:
  if (local_48 != (undefined8 *)0x0) {
    if (puStack_40 != local_48) {
      puStack_40 = (undefined8 *)
                   ((~((long)puStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U) +
                   (long)puStack_40);
    }
    operator_delete(local_48);
  }
  return;
}

