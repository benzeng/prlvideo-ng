
undefined8
FUN_100c79050(code *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  void *ptr;
  undefined8 uVar6;
  void *local_68;
  undefined1 local_60 [48];
  
  FUN_100c65850(local_60);
  uVar1 = FUN_100bf7220(*param_2);
  uVar4 = FUN_100bf70a0(uVar1);
  lVar5 = FUN_100c6bd60(uVar4);
  if (lVar5 == 0) {
    uVar4 = 0xa1;
    uVar6 = 0x59;
  }
  else if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    uVar4 = 0xdc;
    uVar6 = 0x5e;
  }
  else {
    uVar2 = (*param_1)(param_4,0);
    ptr = (void *)FUN_100bf3540((ulong)uVar2,"a_verify.c",99);
    if (ptr != (void *)0x0) {
      local_68 = ptr;
      (*param_1)(param_4,&local_68);
      uVar4 = 0;
      iVar3 = FUN_100c65920(local_60,lVar5,0);
      if (iVar3 != 0) {
        iVar3 = FUN_100c65b10(local_60,ptr,(long)(int)uVar2);
        if (iVar3 != 0) {
          _OPENSSL_cleanse(ptr,(ulong)uVar2);
          FUN_100bf3910(ptr);
          iVar3 = FUN_100c6cf30(local_60,*(undefined8 *)(param_3 + 2),*param_3,param_5);
          uVar4 = 1;
          if (iVar3 < 1) {
            FUN_100c62ee0(0xd,0x89,6,"a_verify.c",0x77);
            uVar4 = 0;
          }
          goto LAB_100c79204;
        }
      }
      FUN_100c62ee0(0xd,0x89,6,"a_verify.c",0x6d);
      goto LAB_100c79204;
    }
    uVar4 = 0x41;
    uVar6 = 0x65;
  }
  FUN_100c62ee0(0xd,0x89,uVar4,"a_verify.c",uVar6);
  uVar4 = 0xffffffff;
LAB_100c79204:
  FUN_100c65c50(local_60);
  return uVar4;
}

