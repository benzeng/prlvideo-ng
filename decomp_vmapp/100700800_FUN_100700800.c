
undefined8
FUN_100700800(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ssize_t sVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  undefined1 local_4d8 [16];
  undefined4 local_4c8 [2];
  undefined8 local_4c0 [17];
  char local_438 [1024];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar4;
  iVar1 = _lstat_INODE64(param_2,local_4c8);
  uVar7 = 0xffffffff;
  if (iVar1 != 0) goto LAB_100700b04;
  ___bzero(param_1 + 0x20,0x210);
  FUN_1006ffc00(param_1,local_4c8);
  if (param_3 == (char *)0x0) {
    param_3 = param_2;
  }
  FUN_1006ff7a0(param_1,param_3);
  FUN_100701350(local_4d8);
  iVar1 = FUN_100701640(*(undefined8 *)(param_1 + 0x230),local_4d8,local_4c8,FUN_1006fe020);
  if (iVar1 == 0) {
    puVar3 = _calloc(1,0x10);
    *puVar3 = local_4c8[0];
    lVar4 = FUN_1007013b0(0x100,FUN_1006fe070);
    *(long *)(puVar3 + 2) = lVar4;
    if (lVar4 != 0) {
      iVar1 = FUN_1007016b0(*(undefined8 *)(param_1 + 0x230),puVar3);
      if (iVar1 != -1) goto LAB_100700929;
    }
LAB_100700a8c:
    lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
    uVar7 = 0xffffffff;
    goto LAB_100700b04;
  }
  puVar3 = (undefined4 *)FUN_100701370(local_4d8);
LAB_100700929:
  FUN_100701350(local_4d8);
  iVar1 = FUN_100701640(*(undefined8 *)(puVar3 + 2),local_4d8,local_4c0,FUN_1006fe030);
  if (iVar1 == 0) {
    puVar5 = _calloc(1,0x408);
    if (puVar5 == (undefined8 *)0x0) goto LAB_100700a8c;
    *puVar5 = local_4c0[0];
    ___snprintf_chk(puVar5 + 1,0x400,0,0x400,"%s",param_3);
    FUN_1007016b0(*(undefined8 *)(puVar3 + 2),puVar5);
  }
  else {
    lVar4 = FUN_100701370(local_4d8);
    *(undefined1 *)(param_1 + 0xbc) = 0x31;
    FUN_1006ff960(param_1,lVar4 + 8);
  }
  pbVar9 = (byte *)(param_1 + 0xbc);
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*pbVar9 == 0x32) {
LAB_100700a2a:
    sVar6 = _readlink(param_2,local_438,0x400);
    iVar1 = (int)sVar6;
    if (iVar1 == -1) {
      uVar7 = 0xffffffff;
      goto LAB_100700b04;
    }
    lVar8 = 0x3ff;
    if (iVar1 < 0x400) {
      lVar8 = (long)iVar1;
    }
    local_438[lVar8] = '\0';
    FUN_1006ff960(param_1,local_438);
  }
  else {
    uVar2 = FUN_1006fe320(param_1 + 0x84);
    if ((uVar2 & 0xf000) == 0xa000) goto LAB_100700a2a;
  }
  if ((*(byte *)(param_1 + 0x1c) & 2) != 0) {
    FUN_1006fe570(param_1);
  }
  iVar1 = FUN_100700410(param_1);
  if (iVar1 != 0) {
    uVar7 = 0xffffffff;
    goto LAB_100700b04;
  }
  if (((ulong)*pbVar9 < 0x38) && ((0x81000000000001U >> ((ulong)*pbVar9 & 0x3f) & 1) != 0)) {
LAB_100700ae0:
    iVar1 = FUN_100700b30(param_1,param_2,param_4,param_5);
    uVar7 = 0xffffffff;
    if (iVar1 != 0) goto LAB_100700b04;
  }
  else {
    uVar2 = FUN_1006fe320(param_1 + 0x84);
    if (((uVar2 & 0xf000) == 0x8000) && (*pbVar9 != 0x31)) goto LAB_100700ae0;
  }
  uVar7 = 0;
LAB_100700b04:
  if (lVar4 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

