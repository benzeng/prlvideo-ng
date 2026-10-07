
long FUN_1008b6290(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  size_t local_458;
  void *local_450;
  void *local_448;
  char *local_440;
  undefined1 local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_440 = (char *)0x0;
  local_448 = (void *)0x0;
  local_450 = (void *)0x0;
  local_38 = lVar1;
  iVar3 = FUN_1008b2930(&local_450,&local_458,&local_440,"ANY PRIVATE KEY",param_1,param_3,param_4);
  pcVar2 = local_440;
  lVar5 = 0;
  if (iVar3 == 0) goto LAB_1008b64a9;
  local_448 = local_450;
  iVar3 = _strcmp(local_440,"PRIVATE KEY");
  if (iVar3 == 0) {
    lVar6 = FUN_1008b1bd0(0,&local_448,local_458);
LAB_1008b6429:
    if (lVar6 == 0) {
LAB_1008b645b:
      FUN_100887ce0(9,0x7b,0xd,"pem_pkey.c",0x8a);
      goto LAB_1008b647c;
    }
    lVar5 = FUN_100894790(lVar6);
    if (param_2 != (long *)0x0) {
      if (*param_2 != 0) {
        FUN_1008924e0();
      }
      *param_2 = lVar5;
    }
    FUN_1008b1c30(lVar6);
LAB_1008b6456:
    if (lVar5 == 0) goto LAB_1008b645b;
  }
  else {
    iVar3 = _strcmp(pcVar2,"ENCRYPTED PRIVATE KEY");
    if (iVar3 != 0) {
      iVar3 = FUN_1008b4400(pcVar2,"PRIVATE KEY");
      if (0 < iVar3) {
        puVar4 = (undefined4 *)FUN_1008a99c0(0,local_440,iVar3);
        if ((puVar4 != (undefined4 *)0x0) && (*(long *)(puVar4 + 0x2c) != 0)) {
          lVar5 = FUN_1008a2c80(*puVar4,param_2,&local_448,local_458);
          goto LAB_1008b6456;
        }
      }
      goto LAB_1008b645b;
    }
    lVar5 = FUN_1008a04b0(0,&local_448,local_458);
    if (lVar5 == 0) goto LAB_1008b645b;
    if (param_3 == (code *)0x0) {
      iVar3 = FUN_1008b2650(local_438,0x400,0,param_4);
    }
    else {
      iVar3 = (*param_3)();
    }
    if (0 < iVar3) {
      lVar6 = FUN_1008d7860(lVar5,local_438,iVar3);
      FUN_1008a0510(lVar5);
      goto LAB_1008b6429;
    }
    FUN_100887ce0(9,0x7b,0x68,"pem_pkey.c",0x72);
    FUN_1008a0510(lVar5);
LAB_1008b647c:
    lVar5 = 0;
  }
  FUN_10081e1a0(local_440);
  _OPENSSL_cleanse(local_450,local_458);
  FUN_10081e1a0(local_450);
LAB_1008b64a9:
  if (lVar1 == local_38) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

