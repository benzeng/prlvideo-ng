
undefined8 FUN_1004f5e90(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  string local_68;
  undefined1 local_67 [15];
  undefined1 *local_58;
  string local_50;
  undefined1 local_4f [15];
  undefined1 *local_40;
  string local_38;
  undefined1 local_37 [15];
  undefined1 *local_28;
  
  if (DAT_1011bc208 == 0) {
    if (DAT_1011bc210 == '\0') {
      FUN_1008ec270(&local_38,
                    "L1N5c3RlbS9MaWJyYXJ5L1ByaXZhdGVGcmFtZXdvcmtzL0Rlc2t0b3BTZXJ2aWNlc1ByaXYuZnJhbWV3b3JrL0Rlc2t0b3BTZXJ2aWNlc1ByaXY="
                   );
      if (((byte)local_38 & 1) == 0) {
        local_28 = local_37;
      }
      lVar2 = _dlopen(local_28,5);
      std::string::~string(&local_38);
      if (lVar2 == 0) {
        DAT_1011bc210 = 1;
        return 0;
      }
      FUN_1008ec270(&local_50,"X0NvcHlQcm9wZXJ0eVN0b3JlV2l0aFVSTA==");
      if (((byte)local_50 & 1) == 0) {
        local_40 = local_4f;
      }
      pcVar3 = (code *)_dlsym(lVar2,local_40);
      std::string::~string(&local_50);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(0);
        lVar4 = 0;
        LOCK();
        lVar1 = lVar2;
        if (DAT_1011bc208 != 0) {
          lVar4 = DAT_1011bc208;
          lVar1 = DAT_1011bc208;
        }
        DAT_1011bc208 = lVar1;
        UNLOCK();
        if (lVar4 == 0) {
          _dlclose(lVar2);
        }
        if (DAT_1011bc208 == 0) {
          return 0;
        }
        goto LAB_1004f5f6c;
      }
      DAT_1011bc210 = '\x01';
      _dlclose(lVar2);
    }
    uVar5 = 0;
  }
  else {
LAB_1004f5f6c:
    lVar2 = DAT_1011bc208;
    FUN_1008ec270(&local_68,param_1);
    if (((byte)local_68 & 1) == 0) {
      local_58 = local_67;
    }
    uVar5 = _dlsym(lVar2,local_58);
    std::string::~string(&local_68);
  }
  return uVar5;
}

