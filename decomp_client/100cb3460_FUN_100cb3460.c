
long FUN_100cb3460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,int param_6)

{
  long lVar1;
  int local_2c;
  void *local_28;
  void *local_20;
  
  lVar1 = FUN_100cb3280(param_1,param_3,param_4,*(undefined8 *)(param_5 + 2),*param_5,&local_20,
                        &local_2c,0);
  if (lVar1 == 0) {
    FUN_100c62ee0(0x23,0x6a,0x75,"p12_decr.c",0x8b);
    lVar1 = 0;
  }
  else {
    local_28 = local_20;
    lVar1 = FUN_100c81490(0,&local_28,(long)local_2c,param_2);
    if (param_6 != 0) {
      _OPENSSL_cleanse(local_20,(long)local_2c);
    }
    if (lVar1 == 0) {
      FUN_100c62ee0(0x23,0x6a,0x65,"p12_decr.c",0x9f);
    }
    FUN_100bf3910(local_20);
  }
  return lVar1;
}

