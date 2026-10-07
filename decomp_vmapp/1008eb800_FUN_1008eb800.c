
void FUN_1008eb800(undefined8 param_1,undefined8 param_2)

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
  
  if (-1 < DAT_1011c3568) {
    QMutex::lock();
    if (DAT_1011c3568 == 0) {
      puVar3 = operator_new(0x10);
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 1;
      FUN_1008ec270(&local_48,
                    "L1N5c3RlbS9MaWJyYXJ5L1ByaXZhdGVGcmFtZXdvcmtzL0JhY2t1cC5mcmFtZXdvcmsvQmFja3Vw");
      if (((byte)local_48 & 1) == 0) {
        local_38 = local_47;
      }
      lVar4 = _dlopen(local_38,1);
      std::string::~string(&local_48);
      if (lVar4 == 0) {
        FUN_1008e3970("","prl_time_machine_helper",0,"Backup framework wasn\'t loaded!");
      }
      else {
        FUN_1008ec270(&local_60,"X0NTQmFja3VwR2V0RGVmYXVsdEJhY2t1cFNlc3Npb24=");
        if (((byte)local_60 & 1) == 0) {
          local_50 = local_5f;
        }
        DAT_1011c3590 = _dlsym(lVar4,local_50);
        std::string::~string(&local_60);
        if (DAT_1011c3590 == 0) {
          FUN_1008e3970("","prl_time_machine_helper",0,"symbol 1 wasn\'t loaded!");
        }
        else {
          FUN_1008ec270(&local_78,"X0NTQmFja3VwQ29weVNlc3Npb25Ob3RpZnlTdHJpbmc=");
          if (((byte)local_78 & 1) == 0) {
            local_68 = local_77;
          }
          DAT_1011c3598 = _dlsym(lVar4,local_68);
          std::string::~string(&local_78);
          if (DAT_1011c3598 == 0) {
            FUN_1008e3970("","prl_time_machine_helper",0,"symbol 2 wasn\'t loaded!");
          }
          else {
            FUN_1008ec270(&local_90,"X0NTQmFja3VwU2VydmVyQ29weVN0YXR1cw==");
            if (((byte)local_90 & 1) == 0) {
              local_80 = local_8f;
            }
            DAT_1011c35a0 = _dlsym(lVar4,local_80);
            std::string::~string(&local_90);
            if (DAT_1011c35a0 == 0) {
              FUN_1008e3970("","prl_time_machine_helper",0,"symbol 3 wasn\'t loaded!");
            }
            else {
              FUN_1008ec270(&local_a8,"a0NTQmFja3VwRGVzdGluYXRpb25Nb3VudE5vdGlmaWNhdGlvbg==");
              if (((byte)local_a8 & 1) == 0) {
                local_98 = local_a7;
              }
              DAT_1011c3560 = (undefined8 *)_dlsym(lVar4,local_98);
              std::string::~string(&local_a8);
              if (DAT_1011c3560 == (undefined8 *)0x0) {
                FUN_1008e3970("","prl_time_machine_helper",0,"symbol 4 wasn\'t loaded!");
              }
              else {
                *(undefined1 *)(puVar3 + 1) = 0;
              }
            }
          }
        }
      }
      DAT_1011c3570 = puVar3;
      if ((DAT_1011c3588 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1011c3588), iVar1 != 0)) {
        ___cxa_atexit(FUN_1008ebda0,&DAT_1011c3580,0x100000000);
        ___cxa_guard_release(&DAT_1011c3588);
      }
      DAT_1011c3568 = -1;
    }
    QMutex::unlock();
  }
  if (*(char *)(DAT_1011c3570 + 1) == '\0') {
    DAT_1011c3550 = param_1;
    DAT_1011c3558 = param_2;
    uVar2 = _CFNotificationCenterGetDistributedCenter();
    _CFNotificationCenterAddObserver(uVar2,DAT_1011c3550,FUN_1008ebbd0,*DAT_1011c3560,0,4);
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","prl_time_machine_helper",2,
                    "Time Machine running state listener was initialized");
    }
  }
  return;
}

