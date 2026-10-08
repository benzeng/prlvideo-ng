
long FUN_100c91810(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4)

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
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_440 = (char *)0x0;
  local_448 = (void *)0x0;
  local_450 = (void *)0x0;
  local_38 = lVar1;
  iVar3 = FUN_100c8deb0(&local_450,&local_458,&local_440,"ANY PRIVATE KEY",param_1,param_3,param_4);
  pcVar2 = local_440;
  lVar5 = 0;
  if (iVar3 == 0) goto LAB_100c91a29;
  local_448 = local_450;
  iVar3 = _strcmp(local_440,"PRIVATE KEY");
  if (iVar3 == 0) {
    lVar6 = FUN_100c8d150(0,&local_448,local_458);
LAB_100c919a9:
    if (lVar6 == 0) {
LAB_100c919db:
      FUN_100c62ee0(9,0x7b,0xd,"pem_pkey.c",0x8a);
      goto LAB_100c919fc;
    }
    lVar5 = FUN_100c6fd10(lVar6);
    if (param_2 != (long *)0x0) {
      if (*param_2 != 0) {
        FUN_100c6d8c0();
      }
      *param_2 = lVar5;
    }
    FUN_100c8d1b0(lVar6);
LAB_100c919d6:
    if (lVar5 == 0) goto LAB_100c919db;
  }
  else {
    iVar3 = _strcmp(pcVar2,"ENCRYPTED PRIVATE KEY");
    if (iVar3 != 0) {
      iVar3 = FUN_100c8f980(pcVar2,"PRIVATE KEY");
      if (0 < iVar3) {
        puVar4 = (undefined4 *)FUN_100c84f40(0,local_440,iVar3);
        if ((puVar4 != (undefined4 *)0x0) && (*(long *)(puVar4 + 0x2c) != 0)) {
          lVar5 = FUN_100c7e200(*puVar4,param_2,&local_448,local_458);
          goto LAB_100c919d6;
        }
      }
      goto LAB_100c919db;
    }
    lVar5 = FUN_100c7ba30(0,&local_448,local_458);
    if (lVar5 == 0) goto LAB_100c919db;
    if (param_3 == (code *)0x0) {
      iVar3 = FUN_100c8dbd0(local_438,0x400,0,param_4);
    }
    else {
      iVar3 = (*param_3)();
    }
    if (0 < iVar3) {
      lVar6 = FUN_100cb40a0(lVar5,local_438,iVar3);
      FUN_100c7ba90(lVar5);
      goto LAB_100c919a9;
    }
    FUN_100c62ee0(9,0x7b,0x68,"pem_pkey.c",0x72);
    FUN_100c7ba90(lVar5);
LAB_100c919fc:
    lVar5 = 0;
  }
  FUN_100bf3910(local_440);
  _OPENSSL_cleanse(local_450,local_458);
  FUN_100bf3910(local_450);
LAB_100c91a29:
  if (lVar1 == local_38) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

