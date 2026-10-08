
undefined4
FUN_100c511a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5,
             undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  void *local_48;
  void *local_40;
  long local_38;
  
  local_48 = (void *)0x0;
  local_40 = param_4;
  local_38 = FUN_100c4ff90();
  uVar3 = 0xffffffff;
  if (local_38 != 0) {
    lVar4 = FUN_100c4ff50(&local_38,&local_40,(long)param_5);
    uVar3 = 0xffffffff;
    if (lVar4 != 0) {
      iVar1 = FUN_100c4ff70(local_38,&local_48);
      uVar3 = 0xffffffff;
      if (iVar1 == param_5) {
        iVar2 = _memcmp(param_4,local_48,(long)param_5);
        lVar4 = local_38;
        if (iVar2 == 0) {
          lVar5 = FUN_100c4fc00(param_6);
          uVar3 = 0;
          if (lVar5 != 0) {
            uVar3 = (**(code **)(*(long *)(lVar5 + 0x18) + 0x18))(param_2,param_3,lVar4,param_6);
          }
        }
      }
      if (0 < iVar1) {
        _OPENSSL_cleanse(local_48,(long)iVar1);
        FUN_100bf3910(local_48);
      }
    }
    FUN_100c4ffb0(local_38);
  }
  return uVar3;
}

