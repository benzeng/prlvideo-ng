
undefined8
FUN_100c481b0(undefined8 param_1,void *param_2,uint param_3,undefined8 param_4,uint param_5,
             undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *local_38;
  
  uVar1 = FUN_100c4c150(param_6);
  if (uVar1 != param_5) {
    uVar4 = 0x77;
    uVar5 = 0x74;
LAB_100c482dc:
    FUN_100c62ee0(4,0x78,uVar4,"rsa_saos.c",uVar5);
    return 0;
  }
  ptr = (void *)FUN_100bf3540(param_5,"rsa_saos.c",0x78);
  if (ptr == (void *)0x0) {
    uVar4 = 0x41;
    uVar5 = 0x7a;
    goto LAB_100c482dc;
  }
  iVar2 = FUN_100c4c1a0(param_5,param_4,ptr,param_6,1);
  uVar4 = 0;
  if (iVar2 < 1) goto LAB_100c4828d;
  uVar4 = 0;
  local_38 = ptr;
  puVar3 = (uint *)FUN_100c838c0(0,&local_38,(long)iVar2);
  if (puVar3 == (uint *)0x0) goto LAB_100c4828d;
  if (*puVar3 == param_3) {
    iVar2 = _memcmp(param_2,*(void **)(puVar3 + 2),(ulong)param_3);
    uVar4 = 1;
    if (iVar2 != 0) goto LAB_100c48262;
  }
  else {
LAB_100c48262:
    FUN_100c62ee0(4,0x78,0x68,"rsa_saos.c",0x89);
    uVar4 = 0;
  }
  FUN_100c8b2f0(puVar3);
LAB_100c4828d:
  _OPENSSL_cleanse(ptr,(ulong)param_5);
  FUN_100bf3910(ptr);
  return uVar4;
}

