
void FUN_100a50640(long param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 **local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 **local_58;
  long local_50;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_60 = &local_60;
  local_50 = 0;
  local_68 = 0;
  uVar3 = 0;
  if (*param_2 != 0) {
    uVar3 = *(undefined8 *)(*param_2 + 0x10);
  }
  puVar4 = &local_88;
  local_78 = &local_78;
  local_70 = &local_78;
  local_58 = local_60;
  local_38 = lVar1;
  cVar2 = FUN_100a51160(uVar3,param_3,&local_7c,&local_80,&local_84,local_48,puVar4,local_60);
  uVar5 = (undefined4)((ulong)puVar4 >> 0x20);
  if (cVar2 == '\0') {
    FUN_100df99c0("","VmCliPasswordClient",0,"parsePacket failed");
    goto LAB_100a5081b;
  }
  uVar3 = FUN_100319390(*(undefined8 *)(param_1 + 0x30));
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  cVar2 = CVmTools::isIsolatedVm();
  if (cVar2 == '\0') {
    CVmTools::getVmSharedApplications();
    cVar2 = CVmSharedApplications::isStoreInternetPasswordsInOSXKeychain();
    if (cVar2 == '\0') goto LAB_100a5079d;
    if (local_50 == 0) {
      local_84 = 0xf0000003;
    }
    else {
      uVar3 = CONCAT44(uVar5,local_88);
      local_84 = FUN_100a4e340(param_1,local_7c,local_58 + 2,local_58 + 5,local_58 + 8,
                               *(undefined4 *)(local_58 + 0xc),uVar3,local_48,&local_78);
      uVar5 = (undefined4)((ulong)uVar3 >> 0x20);
    }
  }
  else {
LAB_100a5079d:
    local_84 = 0xf0000002;
  }
  local_a8 = (void *)0x0;
  pvStack_a0 = (void *)0x0;
  local_98 = 0;
  FUN_100a51530(&local_a8,&local_78,local_7c,local_80,local_84,local_48,CONCAT44(uVar5,local_88));
  FUN_100a4a170(param_1 + 0x10,local_a8,(int)pvStack_a0 - (int)local_a8);
  if (local_a8 != (void *)0x0) {
    if (pvStack_a0 != local_a8) {
      pvStack_a0 = local_a8;
    }
    operator_delete(local_a8);
  }
LAB_100a5081b:
  FUN_100a50c10(&local_78);
  FUN_100a50c10(&local_60);
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

