
void FUN_100d72890(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  string local_a8;
  undefined1 local_a7 [15];
  undefined1 *local_98;
  string local_90;
  undefined1 local_8f [15];
  undefined1 *local_80;
  string local_78;
  undefined1 local_77 [15];
  undefined1 *local_68;
  string local_60;
  undefined1 local_5f [15];
  undefined1 *local_50;
  string local_48;
  undefined1 local_47 [15];
  undefined1 *local_38;
  
  if (-1 < DAT_102318900) {
    QMutex::lock();
    if (DAT_102318900 == 0) {
      puVar3 = operator_new(0x10);
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 1;
      FUN_100deba20(&local_48,
                    "L1N5c3RlbS9MaWJyYXJ5L1ByaXZhdGVGcmFtZXdvcmtzL0JhY2t1cC5mcmFtZXdvcmsvQmFja3Vw");
      if (((byte)local_48 & 1) == 0) {
        local_38 = local_47;
      }
      lVar4 = _dlopen(local_38,1);
      std::string::~string(&local_48);
      if (lVar4 == 0) {
        FUN_100df99c0("","prl_time_machine_helper",0,"Backup framework wasn\'t loaded!");
      }
      else {
        FUN_100deba20(&local_60,"X0NTQmFja3VwR2V0RGVmYXVsdEJhY2t1cFNlc3Npb24=");
        if (((byte)local_60 & 1) == 0) {
          local_50 = local_5f;
        }
        DAT_102318928 = _dlsym(lVar4,local_50);
        std::string::~string(&local_60);
        if (DAT_102318928 == 0) {
          FUN_100df99c0("","prl_time_machine_helper",0,"symbol 1 wasn\'t loaded!");
        }
        else {
          FUN_100deba20(&local_78,"X0NTQmFja3VwQ29weVNlc3Npb25Ob3RpZnlTdHJpbmc=");
          if (((byte)local_78 & 1) == 0) {
            local_68 = local_77;
          }
          DAT_102318930 = _dlsym(lVar4,local_68);
          std::string::~string(&local_78);
          if (DAT_102318930 == 0) {
            FUN_100df99c0("","prl_time_machine_helper",0,"symbol 2 wasn\'t loaded!");
          }
          else {
            FUN_100deba20(&local_90,"X0NTQmFja3VwU2VydmVyQ29weVN0YXR1cw==");
            if (((byte)local_90 & 1) == 0) {
              local_80 = local_8f;
            }
            DAT_102318938 = _dlsym(lVar4,local_80);
            std::string::~string(&local_90);
            if (DAT_102318938 == 0) {
              FUN_100df99c0("","prl_time_machine_helper",0,"symbol 3 wasn\'t loaded!");
            }
            else {
              FUN_100deba20(&local_a8,"a0NTQmFja3VwRGVzdGluYXRpb25Nb3VudE5vdGlmaWNhdGlvbg==");
              if (((byte)local_a8 & 1) == 0) {
                local_98 = local_a7;
              }
              DAT_1023188f8 = (undefined8 *)_dlsym(lVar4,local_98);
              std::string::~string(&local_a8);
              if (DAT_1023188f8 == (undefined8 *)0x0) {
                FUN_100df99c0("","prl_time_machine_helper",0,"symbol 4 wasn\'t loaded!");
              }
              else {
                *(undefined1 *)(puVar3 + 1) = 0;
              }
            }
          }
        }
      }
      DAT_102318908 = puVar3;
      if ((DAT_102318920 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_102318920), iVar1 != 0)) {
        ___cxa_atexit(FUN_100d72e30,&DAT_102318918,0x100000000);
        ___cxa_guard_release(&DAT_102318920);
      }
      DAT_102318900 = -1;
    }
    QMutex::unlock();
  }
  if (*(char *)(DAT_102318908 + 1) == '\0') {
    DAT_1023188e8 = param_1;
    DAT_1023188f0 = param_2;
    uVar2 = _CFNotificationCenterGetDistributedCenter();
    _CFNotificationCenterAddObserver(uVar2,DAT_1023188e8,FUN_100d72c60,*DAT_1023188f8,0,4);
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_time_machine_helper",2,
                    "Time Machine running state listener was initialized");
    }
  }
  return;
}

