
void FUN_1000b14d0(undefined8 param_1,char param_2)

{
  short sVar1;
  uint uVar2;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_2 == '\0') {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",1,"Dock was not configured");
      return;
    }
  }
  else {
    local_80 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    local_38 = 0;
    local_78 = 0x48;
    sVar1 = _GetNextProcess(&local_80);
    if (sVar1 == 0) {
      do {
        _GetProcessInformation(&local_80,&local_78);
        if (((int)uStack_60 == 0x646f636b) && (local_68._4_4_ == 0x4150504c)) {
          local_88 = local_80;
          sVar1 = _KillProcess(&local_88);
          if (sVar1 != 0) {
            FUN_100df99c0("SGAC","prl_client_app",0,"Failed to kill Dock, KillProcess() err %i",
                          (int)sVar1);
            return;
          }
          uVar2 = 0;
          do {
            if (0 < DAT_10230ffd0) {
              FUN_100df99c0("SGAC","prl_client_app",1,"Waiting Dock to start (%u/%u)...",uVar2,10);
            }
            _usleep(500000);
            local_80 = 0;
            local_48 = 0;
            uStack_40 = 0;
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
            uStack_70 = 0;
            local_38 = 0;
            local_78 = 0x48;
            while (sVar1 = _GetNextProcess(&local_80), sVar1 == 0) {
              _GetProcessInformation(&local_80,&local_78);
              if (((int)uStack_60 == 0x646f636b) && (local_68._4_4_ == 0x4150504c)) {
                return;
              }
            }
            FUN_1000b12d0();
            uVar2 = uVar2 + 1;
            if (9 < uVar2) {
              return;
            }
          } while( true );
        }
        sVar1 = _GetNextProcess(&local_80);
      } while (sVar1 == 0);
    }
  }
  return;
}

