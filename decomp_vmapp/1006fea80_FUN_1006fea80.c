
ulong FUN_1006fea80(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  mode_t mVar3;
  int iVar4;
  uint uVar5;
  uid_t uVar6;
  gid_t gVar7;
  uid_t uVar8;
  int *piVar9;
  ulong uVar10;
  size_t sVar11;
  char *pcVar12;
  void *pvVar13;
  undefined8 uVar14;
  utimbuf local_c0 [9];
  
  if (((*(byte *)(param_1 + 0x1c) & 4) != 0) &&
     ((iVar4 = _lstat_INODE64(param_2,local_c0), iVar4 == 0 || (piVar9 = ___error(), *piVar9 != 2)))
     ) {
    piVar9 = ___error();
    *piVar9 = 0x11;
    return 0xffffffff;
  }
  if (*(char *)(param_1 + 0xbc) == '5') {
LAB_1006feb38:
    uVar10 = FUN_1006fedc0(param_1,param_2);
    if ((int)uVar10 != 1) goto LAB_1006fec0a;
  }
  else {
    lVar1 = param_1 + 0x84;
    uVar5 = FUN_1006fe320(lVar1);
    if ((uVar5 & 0xf000) == 0x4000) goto LAB_1006feb38;
    cVar2 = *(char *)(param_1 + 0xbc);
    if (cVar2 == '2') {
LAB_1006feb65:
      uVar10 = FUN_1006fef90(param_1,param_2);
    }
    else if (cVar2 == '1') {
      uVar10 = FUN_1006feea0(param_1,param_2);
    }
    else {
      if ((cVar2 == '\0') &&
         (sVar11 = _strlen((char *)(param_1 + 0x20)), *(char *)(sVar11 + 0x1f + param_1) == '/'))
      goto LAB_1006feb38;
      uVar5 = FUN_1006fe320(lVar1);
      if ((uVar5 & 0xf000) == 0xa000) goto LAB_1006feb65;
      if ((*(char *)(param_1 + 0xbc) == '3') ||
         (uVar5 = FUN_1006fe320(lVar1), (uVar5 & 0xf000) == 0x2000)) {
        uVar10 = FUN_1006ff050(param_1,param_2);
      }
      else if ((*(char *)(param_1 + 0xbc) == '4') ||
              (uVar5 = FUN_1006fe320(lVar1), (uVar5 & 0xf000) == 0x6000)) {
        uVar10 = FUN_1006ff130(param_1,param_2);
      }
      else if ((*(char *)(param_1 + 0xbc) == '6') ||
              (uVar5 = FUN_1006fe320(lVar1), (uVar5 & 0xf000) == 0x1000)) {
        uVar10 = FUN_1006ff210(param_1,param_2);
      }
      else {
        uVar10 = FUN_1006ff2b0(param_1,param_2);
      }
    }
LAB_1006fec0a:
    if ((int)uVar10 != 0) {
      return uVar10;
    }
  }
  pcVar12 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar12 = (char *)FUN_1006ffe90(param_1);
  }
  mVar3 = FUN_100700010(param_1);
  uVar6 = FUN_1006fff50(param_1);
  gVar7 = FUN_1006fffb0(param_1);
  iVar4 = FUN_1006fe320(param_1 + 0xa8);
  local_c0[0].actime = (time_t)iVar4;
  local_c0[0].modtime = local_c0[0].actime;
  uVar8 = _geteuid();
  if (uVar8 == 0) {
    if (*(char *)(param_1 + 0xbc) == '2') goto LAB_1006fed34;
    uVar5 = FUN_1006fe320(param_1 + 0x84);
    if (((uVar5 & 0xf000) != 0xa000) && (iVar4 = _chown(pcVar12,uVar6,gVar7), iVar4 == -1)) {
      return 0xffffffff;
    }
  }
  if (*(char *)(param_1 + 0xbc) != '2') {
    uVar5 = FUN_1006fe320(param_1 + 0x84);
    if ((((uVar5 & 0xf000) != 0xa000) && (iVar4 = _utime(pcVar12,local_c0), iVar4 == -1)) ||
       ((*(char *)(param_1 + 0xbc) != '2' &&
        ((uVar5 = FUN_1006fe320(param_1 + 0x84), (uVar5 & 0xf000) != 0xa000 &&
         (iVar4 = _chmod(pcVar12,mVar3), iVar4 == -1)))))) {
      return 0xffffffff;
    }
  }
LAB_1006fed34:
  pvVar13 = _calloc(1,0x800);
  uVar10 = 0xffffffff;
  if (pvVar13 != (void *)0x0) {
    uVar14 = FUN_1006ffe90(param_1);
    ___strlcpy_chk(pvVar13,uVar14,0x400,0x800);
    ___strlcpy_chk((long)pvVar13 + 0x400,param_2,0x400,0x400);
    iVar4 = FUN_1007016b0(*(undefined8 *)(param_1 + 0x230),pvVar13);
    uVar10 = (ulong)-(uint)(iVar4 != 0);
  }
  return uVar10;
}

