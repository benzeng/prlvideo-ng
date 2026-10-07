
undefined8
FUN_10089dad0(code *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
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
  
  FUN_10088a650(local_60);
  uVar1 = FUN_100821ab0(*param_2);
  uVar4 = FUN_100821930(uVar1);
  lVar5 = FUN_100890b60(uVar4);
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
    ptr = (void *)FUN_10081ddd0((ulong)uVar2,"a_verify.c",99);
    if (ptr != (void *)0x0) {
      local_68 = ptr;
      (*param_1)(param_4,&local_68);
      uVar4 = 0;
      iVar3 = FUN_10088a720(local_60,lVar5,0);
      if (iVar3 != 0) {
        iVar3 = FUN_10088a910(local_60,ptr,(long)(int)uVar2);
        if (iVar3 != 0) {
          _OPENSSL_cleanse(ptr,(ulong)uVar2);
          FUN_10081e1a0(ptr);
          iVar3 = FUN_100891b50(local_60,*(undefined8 *)(param_3 + 2),*param_3,param_5);
          uVar4 = 1;
          if (iVar3 < 1) {
            FUN_100887ce0(0xd,0x89,6,"a_verify.c",0x77);
            uVar4 = 0;
          }
          goto LAB_10089dc84;
        }
      }
      FUN_100887ce0(0xd,0x89,6,"a_verify.c",0x6d);
      goto LAB_10089dc84;
    }
    uVar4 = 0x41;
    uVar6 = 0x65;
  }
  FUN_100887ce0(0xd,0x89,uVar4,"a_verify.c",uVar6);
  uVar4 = 0xffffffff;
LAB_10089dc84:
  FUN_10088aa50(local_60);
  return uVar4;
}

