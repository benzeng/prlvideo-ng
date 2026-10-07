
long * FUN_100711a60(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  string local_d8;
  undefined1 local_d7 [15];
  undefined1 *local_c8;
  string local_c0;
  undefined1 local_bf [15];
  undefined1 *local_b0;
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
  
  plVar2 = operator_new(0x88);
  FUN_1007123e0(plVar2);
  if (param_2 == 0) {
    param_2 = _CFRunLoopGetCurrent();
  }
  plVar2[9] = param_2;
  FUN_1008ec270(&local_48,
                "L1N5c3RlbS9MaWJyYXJ5L0ZyYW1ld29ya3MvSU9LaXQuZnJhbWV3b3JrL1ZlcnNpb25zL0N1cnJlbnQvSU9LaXQ"
               );
  if (((byte)local_48 & 1) == 0) {
    local_38 = local_47;
  }
  lVar3 = _dlopen(local_38,1);
  plVar2[7] = lVar3;
  std::string::~string(&local_48);
  lVar3 = plVar2[7];
  if (lVar3 != 0) {
    FUN_1008ec270(&local_60,"SU9QTUNvbm5lY3Rpb25TY2hlZHVsZVdpdGhSdW5Mb29w");
    if (((byte)local_60 & 1) == 0) {
      local_50 = local_5f;
    }
    lVar3 = _dlsym(lVar3,local_50);
    plVar2[10] = lVar3;
    std::string::~string(&local_60);
    lVar3 = plVar2[7];
    FUN_1008ec270(&local_78,"SU9QTUNvbm5lY3Rpb25VbnNjaGVkdWxlRnJvbVJ1bkxvb3A=");
    if (((byte)local_78 & 1) == 0) {
      local_68 = local_77;
    }
    lVar3 = _dlsym(lVar3,local_68);
    plVar2[0xb] = lVar3;
    std::string::~string(&local_78);
    lVar3 = plVar2[7];
    FUN_1008ec270(&local_90,"SU9QTUNvbm5lY3Rpb25DcmVhdGU=");
    if (((byte)local_90 & 1) == 0) {
      local_80 = local_8f;
    }
    lVar3 = _dlsym(lVar3,local_80);
    plVar2[0xc] = lVar3;
    std::string::~string(&local_90);
    lVar3 = plVar2[7];
    FUN_1008ec270(&local_a8,"SU9QTUNvbm5lY3Rpb25SZWxlYXNl");
    if (((byte)local_a8 & 1) == 0) {
      local_98 = local_a7;
    }
    lVar3 = _dlsym(lVar3,local_98);
    plVar2[0xd] = lVar3;
    std::string::~string(&local_a8);
    lVar3 = plVar2[7];
    FUN_1008ec270(&local_c0,"SU9QTUNvbm5lY3Rpb25TZXROb3RpZmljYXRpb24=");
    if (((byte)local_c0 & 1) == 0) {
      local_b0 = local_bf;
    }
    lVar3 = _dlsym(lVar3,local_b0);
    plVar2[0xe] = lVar3;
    std::string::~string(&local_c0);
    lVar3 = plVar2[7];
    FUN_1008ec270(&local_d8,"SU9QTUNvbm5lY3Rpb25BY2tub3dsZWRnZUV2ZW50V2l0aE9wdGlvbnM=");
    if (((byte)local_d8 & 1) == 0) {
      local_c8 = local_d7;
    }
    lVar3 = _dlsym(lVar3,local_c8);
    plVar2[0xf] = lVar3;
    std::string::~string(&local_d8);
  }
  if ((((plVar2[10] != 0) && ((code *)plVar2[0xc] != (code *)0x0)) && (plVar2[0xe] != 0)) &&
     (plVar2[0xf] != 0)) {
    iVar1 = (*(code *)plVar2[0xc])(&cf_CMacPowerHelper,0x1e,plVar2 + 8);
    if (((iVar1 == 0) &&
        (iVar1 = (*(code *)plVar2[0xe])(plVar2[8],plVar2,FUN_100712630), iVar1 == 0)) &&
       (iVar1 = (*(code *)plVar2[10])
                          (plVar2[8],param_2,*(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8),
       iVar1 == 0)) {
      plVar2[0x10] = param_1;
      return plVar2;
    }
  }
  (**(code **)(*plVar2 + 0x20))(plVar2);
  return (long *)0x0;
}

