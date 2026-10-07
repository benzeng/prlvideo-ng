
void FUN_100540c80(undefined8 param_1,undefined2 param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  string local_58;
  undefined1 local_57 [15];
  undefined1 *local_48;
  string local_40;
  undefined1 local_3f [15];
  undefined1 *local_30;
  
  FUN_1008ec270(&local_40,
                "L1N5c3RlbS9MaWJyYXJ5L0ZyYW1ld29ya3MvRGlza0FyYml0cmF0aW9uLmZyYW1ld29yay9WZXJzaW9ucy9BL0Rpc2tBcmJpdHJhdGlvbg=="
               );
  if (((byte)local_40 & 1) == 0) {
    local_30 = local_3f;
  }
  lVar1 = _dlopen(local_30,4);
  std::string::~string(&local_40);
  if (lVar1 == 0) {
    LOCK();
    if (DAT_10111d688 == FUN_100540c80) {
      DAT_10111d688 = (code *)PTR__mkdir_100ba25e0;
    }
    UNLOCK();
  }
  else {
    FUN_1008ec270(&local_58,"X0RBbWtkaXI=");
    if (((byte)local_58 & 1) == 0) {
      local_48 = local_57;
    }
    pcVar2 = (code *)_dlsym(lVar1,local_48);
    std::string::~string(&local_58);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = (code *)PTR__mkdir_100ba25e0;
    }
    pcVar3 = FUN_100540c80;
    LOCK();
    if (DAT_10111d688 != FUN_100540c80) {
      pcVar3 = DAT_10111d688;
      pcVar2 = DAT_10111d688;
    }
    DAT_10111d688 = pcVar2;
    UNLOCK();
    if (pcVar3 != FUN_100540c80) {
      _dlclose(lVar1);
    }
  }
  (*DAT_10111d688)(param_1,param_2);
  return;
}

