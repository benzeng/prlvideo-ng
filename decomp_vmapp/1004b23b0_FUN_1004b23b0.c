
undefined8 FUN_1004b23b0(long param_1,char param_2)

{
  char *pcVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  QMutex::lock();
  if ((*(char *)(param_1 + 0x128) != '\0') && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                  "   **** ProcessDynResEnabledEvent received when m_bWasSuspendedFromCoherence!");
  }
  if (1 < DAT_1011b55f8) {
    pcVar1 = "DISABLED";
    if (param_2 != '\0') {
      pcVar1 = "ENABLED";
    }
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"ProcessDynResEnabledEvent %s",pcVar1);
  }
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x151) == '\0') goto LAB_1004b2608;
    if ((*(int *)(param_1 + 0x88) == 1) && (*(char *)(param_1 + 0x128) == '\0')) {
      local_50 = (QArrayData *)QString::fromAscii_helper("",0);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"SendCoherenceToolAvailabilityToClients %s",
                      "UNAVAILABLE");
      }
      local_38 = 0;
      FUN_1004b43e0(&local_38,9,0,0);
      if (local_38 != 0) {
        FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),&local_50);
      }
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004b2600;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
LAB_1004b2600:
    *(undefined1 *)(param_1 + 0x151) = 0;
    goto LAB_1004b2608;
  }
  if (*(char *)(param_1 + 0x151) != '\0') goto LAB_1004b2608;
  if ((*(int *)(param_1 + 0x88) == 1) && (*(char *)(param_1 + 0x128) == '\0')) {
    local_48 = (QArrayData *)QString::fromAscii_helper("",0);
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"SendCoherenceToolAvailabilityToClients %s",
                    "AVAILABLE");
    }
    local_40 = 0;
    FUN_1004b43e0(&local_40,8,param_1 + 0x140,0x10);
    if (local_40 != 0) {
      FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),&local_48);
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004b252b;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004b252b:
  *(undefined1 *)(param_1 + 0x151) = 1;
LAB_1004b2608:
  QMutex::unlock();
  return 1;
}

