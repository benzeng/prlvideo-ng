
int FUN_1008d6e10(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_34;
  void *local_30;
  
  if (param_1 == 0) {
    local_30 = (void *)0x0;
    local_34 = 0;
  }
  else {
    lVar3 = FUN_1008d7570(param_1,param_2,&local_30,&local_34);
    if (lVar3 == 0) {
      FUN_100887ce0(0x23,0x6e,0x41,"p12_key.c",0x5c);
      return 0;
    }
  }
  iVar1 = FUN_1008d6ee0(local_30,local_34,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar2 = 0;
  if ((0 < iVar1) && (iVar2 = iVar1, local_30 != (void *)0x0)) {
    _OPENSSL_cleanse(local_30,(long)local_34);
    FUN_10081e1a0(local_30);
  }
  return iVar2;
}

