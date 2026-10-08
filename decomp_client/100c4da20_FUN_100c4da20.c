
undefined4
FUN_100c4da20(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5,
             undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  void *local_48;
  void *local_40;
  long local_38;
  
  local_48 = (void *)0x0;
  local_40 = param_4;
  local_38 = FUN_100c4dc10();
  uVar3 = 0xffffffff;
  if (local_38 != 0) {
    lVar4 = FUN_100c81490(&local_38,&local_40,(long)param_5,&DAT_10224d8b8);
    uVar3 = 0xffffffff;
    if (lVar4 != 0) {
      iVar1 = FUN_100c80850(local_38,&local_48,&DAT_10224d8b8);
      uVar3 = 0xffffffff;
      if (iVar1 == param_5) {
        iVar2 = _memcmp(param_4,local_48,(long)param_5);
        if (iVar2 == 0) {
          uVar3 = FUN_100c4dbe0(param_2,param_3,local_38,param_6);
        }
      }
      if (0 < iVar1) {
        _OPENSSL_cleanse(local_48,(long)iVar1);
        FUN_100bf3910(local_48);
      }
    }
    FUN_100c4dc50(local_38);
  }
  return uVar3;
}

