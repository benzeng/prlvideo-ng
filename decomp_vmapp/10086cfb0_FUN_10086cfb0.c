
undefined8
FUN_10086cfb0(undefined8 param_1,void *param_2,uint param_3,undefined8 param_4,uint param_5,
             undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *local_38;
  
  uVar1 = FUN_100870f50(param_6);
  if (uVar1 != param_5) {
    uVar4 = 0x77;
    uVar5 = 0x74;
LAB_10086d0dc:
    FUN_100887ce0(4,0x78,uVar4,"rsa_saos.c",uVar5);
    return 0;
  }
  ptr = (void *)FUN_10081ddd0(param_5,"rsa_saos.c",0x78);
  if (ptr == (void *)0x0) {
    uVar4 = 0x41;
    uVar5 = 0x7a;
    goto LAB_10086d0dc;
  }
  iVar2 = FUN_100870fa0(param_5,param_4,ptr,param_6,1);
  uVar4 = 0;
  if (iVar2 < 1) goto LAB_10086d08d;
  uVar4 = 0;
  local_38 = ptr;
  puVar3 = (uint *)FUN_1008a8340(0,&local_38,(long)iVar2);
  if (puVar3 == (uint *)0x0) goto LAB_10086d08d;
  if (*puVar3 == param_3) {
    iVar2 = _memcmp(param_2,*(void **)(puVar3 + 2),(ulong)param_3);
    uVar4 = 1;
    if (iVar2 != 0) goto LAB_10086d062;
  }
  else {
LAB_10086d062:
    FUN_100887ce0(4,0x78,0x68,"rsa_saos.c",0x89);
    uVar4 = 0;
  }
  FUN_1008afd70(puVar3);
LAB_10086d08d:
  _OPENSSL_cleanse(ptr,(ulong)param_5);
  FUN_10081e1a0(ptr);
  return uVar4;
}

