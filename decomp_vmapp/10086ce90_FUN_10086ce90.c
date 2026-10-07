
bool FUN_10086ce90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  void *ptr;
  bool bVar3;
  void *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  local_44 = 4;
  bVar3 = false;
  local_48 = param_3;
  local_40 = param_2;
  iVar1 = FUN_1008a8360(&local_48,0);
  iVar2 = FUN_100870f50(param_6);
  if (iVar2 + -0xb < iVar1) {
    FUN_100887ce0(4,0x76,0x70,"rsa_saos.c",0x53);
  }
  else {
    ptr = (void *)FUN_10081ddd0(iVar2 + 1U,"rsa_saos.c",0x56);
    if (ptr == (void *)0x0) {
      FUN_100887ce0(4,0x76,0x41,"rsa_saos.c",0x58);
      bVar3 = false;
    }
    else {
      local_50 = ptr;
      FUN_1008a8360(&local_48,&local_50);
      iVar1 = FUN_100870f80(iVar1,ptr,param_4,param_6,1);
      bVar3 = 0 < iVar1;
      if (bVar3) {
        *param_5 = iVar1;
      }
      _OPENSSL_cleanse(ptr,(ulong)(iVar2 + 1U));
      FUN_10081e1a0(ptr);
    }
  }
  return bVar3;
}

