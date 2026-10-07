
void FUN_100106b10(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  undefined4 local_58;
  undefined4 local_54;
  long *local_50;
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getAutoSyncOSType();
  cVar2 = CVmAutoSyncOSType::isEnabled();
  if (cVar2 != '\0') {
    cVar2 = FUN_100106d70(&local_58);
    if (cVar2 != '\0') {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("OSTYPESYNC","vm",1,"Changing OS type to %#x/%#x",local_58,local_54);
      }
      local_48 = (void *)0x0;
      pvStack_40 = (void *)0x0;
      local_38 = 0;
      FUN_100106fc0(&local_48,&local_58);
      lVar1 = DAT_1011c3650;
      plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_50 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        plVar4[2] = 0;
        *plVar4 = (long)&PTR_FUN_100bef0d0;
        local_50 = plVar4;
      }
      cVar2 = FUN_100063770(lVar1,0x186bc,0,&local_48,0xbbb,&local_50);
      if (local_50 != (long *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar1 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
      if (cVar2 == '\0') {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("OSTYPESYNC","vm",1,"Failed to post config update");
        }
      }
      else {
        if (*(long *)(*(long *)(DAT_1011c3650 + 0x10) + 0x120) != 0) {
          CVmConfiguration::getVmSettings();
          uVar3 = CVmSettings::getVmCommonOptions();
          CVmCommonOptions::setOsType(uVar3);
          CVmCommonOptions::setOsVersion(uVar3);
        }
        CVmConfiguration::getVmSettings();
        uVar3 = CVmSettings::getVmCommonOptions();
        CVmCommonOptions::setOsType(uVar3);
        CVmCommonOptions::setOsVersion(uVar3);
      }
      if (local_48 != (void *)0x0) {
        if (pvStack_40 != local_48) {
          pvStack_40 = (void *)((~((long)pvStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U)
                               + (long)pvStack_40);
        }
        operator_delete(local_48);
      }
    }
  }
  return;
}

