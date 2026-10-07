
void FUN_10040a050(long param_1,byte param_2,char param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  bVar6 = param_2 == 0;
  pcVar4 = (char *)(param_1 + 0x42);
  if (bVar6) {
    pcVar4 = (char *)(param_1 + 0x43);
  }
  local_28 = 0x766d7663;
  local_24 = 0x6f757470;
  if (!bVar6) {
    local_24 = 0x696e7074;
  }
  local_20 = 0;
  plVar3 = (long *)(param_1 + 0x38);
  if (!bVar6) {
    plVar3 = (long *)(param_1 + 0x30);
  }
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    if (param_3 == '\0') {
      if (*pcVar4 != '\0') {
        _AudioObjectRemovePropertyListener
                  (*(undefined4 *)(lVar1 + 0x40),&local_28,FUN_10040bad0,param_2 ^ 1);
        *pcVar4 = '\0';
      }
    }
    else {
      if (*pcVar4 != '\0') {
        pcVar4 = "output";
        if (param_2 != 0) {
          pcVar4 = "input";
        }
        FUN_1008e3970("","PrlAudioCore",0,
                      "Double subscription for master volume changes for %s device",pcVar4);
        return;
      }
      iVar2 = _AudioObjectAddPropertyListener
                        (*(undefined4 *)(lVar1 + 0x40),&local_28,FUN_10040bad0,param_2 ^ 1);
      if (iVar2 != 0) {
        if (0 < DAT_1011b55f8) {
          pcVar5 = "output";
          if (param_2 != 0) {
            pcVar5 = "input";
          }
          FUN_1008e3970("","PrlAudioCore",1,
                        "Failed to subscribe for master volume changes for %s device (%d)",pcVar5);
        }
        *pcVar4 = '\0';
      }
      *pcVar4 = '\x01';
    }
  }
  return;
}

