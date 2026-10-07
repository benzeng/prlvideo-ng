
void FUN_10040a1b0(long param_1,byte param_2,char param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
  bVar7 = param_2 == 0;
  pcVar5 = (char *)(param_1 + 0x44);
  if (bVar7) {
    pcVar5 = (char *)(param_1 + 0x45);
  }
  local_30 = 0x73737263;
  local_3c = 0x6f757470;
  if (!bVar7) {
    local_3c = 0x696e7074;
  }
  local_28 = 0;
  local_40 = 0x73736323;
  local_38 = 0;
  plVar4 = (long *)(param_1 + 0x38);
  if (!bVar7) {
    plVar4 = (long *)(param_1 + 0x30);
  }
  lVar1 = *plVar4;
  if (lVar1 != 0) {
    local_2c = local_3c;
    if (param_3 == '\0') {
      if (*pcVar5 != '\0') {
        _AudioObjectRemovePropertyListener
                  (*(undefined4 *)(lVar1 + 0x40),&local_30,FUN_10040baf0,param_2 ^ 1);
        *pcVar5 = '\0';
      }
    }
    else {
      if (*pcVar5 != '\0') {
        pcVar5 = "output";
        if (param_2 != 0) {
          pcVar5 = "input";
        }
        FUN_1008e3970("","PrlAudioCore",0,
                      "Double subscription for data source changes for %s device",pcVar5);
        return;
      }
      cVar2 = _AudioObjectHasProperty(*(undefined4 *)(lVar1 + 0x40),&local_40);
      if (cVar2 != '\0') {
        iVar3 = _AudioObjectGetPropertyDataSize
                          (*(undefined4 *)(lVar1 + 0x40),&local_40,0,0,&local_24);
        if (iVar3 == 0) {
          if (7 < local_24) {
            iVar3 = _AudioObjectAddPropertyListener
                              (*(undefined4 *)(lVar1 + 0x40),&local_30,FUN_10040baf0,param_2 ^ 1);
            if (iVar3 != 0) {
              if (0 < DAT_1011b55f8) {
                pcVar6 = "output";
                if (param_2 != 0) {
                  pcVar6 = "input";
                }
                FUN_1008e3970("","PrlAudioCore",1,
                              "Failed to subscribe for data source changes for %s device (%d)",
                              pcVar6);
              }
              *pcVar5 = '\0';
            }
            *pcVar5 = '\x01';
          }
        }
        else if (0 < DAT_1011b55f8) {
          pcVar5 = "output";
          if (param_2 != 0) {
            pcVar5 = "input";
          }
          FUN_1008e3970("","PrlAudioCore",1,
                        "Failed to get the size of datasources array for %s device (%d)",pcVar5);
        }
      }
    }
  }
  return;
}

