
char * FUN_1007e93e0(int param_1)

{
  if (param_1 < 0x30000001) {
    if (param_1 == 0) {
      return "VMS_UNKNOWN";
    }
  }
  else {
    switch(param_1) {
    case 0x30000001:
      return "VMS_STOPPED";
    case 0x30000002:
      return "VMS_STARTING";
    case 0x30000003:
      return "VMS_RESTORING";
    case 0x30000004:
      return "VMS_RUNNING";
    case 0x30000005:
      return "VMS_PAUSED";
    case 0x30000006:
      return "VMS_SUSPENDING";
    case 0x30000007:
      return "VMS_STOPPING";
    case 0x30000008:
      return "VMS_COMPACTING";
    case 0x30000009:
      return "VMS_SUSPENDED";
    case 0x3000000a:
      return "VMS_SNAPSHOTING";
    case 0x3000000b:
      return "VMS_RESETTING";
    case 0x3000000c:
      return "VMS_PAUSING";
    case 0x3000000d:
      return "VMS_CONTINUING";
    case 0x3000000e:
      return "VMS_MIGRATING";
    case 0x3000000f:
      return "VMS_DELETING_STATE";
    case 0x30000010:
      return "VMS_RESUMING";
    case 0x30000011:
      return "VMS_SUSPENDING_SYNC";
    case 0x30000012:
      return "VMS_RECONNECTING";
    case 0x30000013:
      return "VMS_MOUNTED";
    }
  }
  FUN_1008e3970("","Std",0,"Unknown VIRTUAL_MACHINE_STATE value %p",param_1);
  return "Unknown";
}

