
void FUN_1004b0570(long param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  void *pvVar2;
  QArrayData *local_40;
  long local_38;
  long local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  cVar1 = FUN_10052aeb0(param_2);
  if (cVar1 == '\0') {
    if ((((*(uint *)(param_1 + 0x88) & 0xfffffffe) != 2) ||
        (cVar1 = FUN_1004affd0(param_1,param_2), cVar1 != '\0')) ||
       (*(char *)(param_1 + 0x8d) != '\0')) {
      FUN_10052ac80(param_1 + 0xf8,param_2);
      FUN_1004ae450(param_1,param_2);
      *(undefined4 *)(param_1 + 0x118) = *param_3;
      *(undefined4 *)(param_1 + 0x11c) = param_3[1];
      FUN_1004bb550(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x30));
      return;
    }
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Switch Coherence Mode off Guest Video Mem too low");
    }
    *(undefined1 *)(param_1 + 0x8c) = 0;
    *(undefined1 *)(param_1 + 0x8d) = 1;
    FUN_10052acc0(param_1 + 0xf8);
    pvVar2 = operator_new(0x18);
    *(undefined4 *)((long)pvVar2 + 4) = 0;
    FUN_1004ae8a0(param_1,pvVar2,param_1 + 0x98,0);
    local_30 = 3;
    local_28 = 0;
    local_24 = 0;
    local_38 = 0;
    FUN_1004b43e0(&local_38,0x17,&local_30,0x10);
    if (local_38 != 0) {
      FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80));
    }
    if (*(char *)(param_1 + 0x151) == '\0') {
      local_40 = (QArrayData *)QString::fromAscii_helper("",0);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"SendCoherenceToolAvailabilityToClients %s",
                      "UNAVAILABLE");
      }
      local_30 = 0;
      FUN_1004b43e0(&local_30,9,0,0);
      if (local_30 != 0) {
        FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),&local_40);
      }
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          local_30 = CONCAT71(local_30._1_7_,*(int *)local_40 != 0);
          if (*(int *)local_40 != 0) {
            return;
          }
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
  }
  else if (0 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                  "Try to set empty display configuration while in Coherence. Ignore it.");
    return;
  }
  return;
}

