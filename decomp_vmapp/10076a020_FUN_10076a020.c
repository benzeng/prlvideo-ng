
void FUN_10076a020(long *param_1)

{
  long lVar1;
  string local_48;
  undefined1 local_47 [15];
  undefined1 *local_38;
  string local_30;
  undefined1 local_2f [15];
  undefined1 *local_20;
  
  param_1[1] = 0;
  FUN_1008ec270(&local_30,"L3Vzci9saWIvc3lzdGVtL2xpYnN5c3RlbV9zYW5kYm94LmR5bGli");
  if (((byte)local_30 & 1) == 0) {
    local_20 = local_2f;
  }
  lVar1 = _dlopen(local_20,0x11);
  *param_1 = lVar1;
  std::string::~string(&local_30);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1008ec270(&local_48,"c2FuZGJveF9jaGVjaw==");
    if (((byte)local_48 & 1) == 0) {
      local_38 = local_47;
    }
    lVar1 = _dlsym(lVar1,local_38);
    param_1[1] = lVar1;
    std::string::~string(&local_48);
  }
  return;
}

