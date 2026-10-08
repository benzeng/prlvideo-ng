
undefined8 FUN_100b738e0(undefined8 param_1,time_t param_2,void *param_3,size_t param_4)

{
  long lVar1;
  undefined8 uVar2;
  FILE *pFVar3;
  size_t sVar4;
  int *piVar5;
  char *pcVar6;
  char local_b8 [136];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_b8[0x70] = '\0';
  local_b8[0x71] = '\0';
  local_b8[0x72] = '\0';
  local_b8[0x73] = '\0';
  local_b8[0x74] = '\0';
  local_b8[0x75] = '\0';
  local_b8[0x76] = '\0';
  local_b8[0x77] = '\0';
  local_b8[0x78] = '\0';
  local_b8[0x79] = '\0';
  local_b8[0x7a] = '\0';
  local_b8[0x7b] = '\0';
  local_b8[0x7c] = '\0';
  local_b8[0x7d] = '\0';
  local_b8[0x7e] = '\0';
  local_b8[0x7f] = '\0';
  local_b8[0x60] = '\0';
  local_b8[0x61] = '\0';
  local_b8[0x62] = '\0';
  local_b8[99] = '\0';
  local_b8[100] = '\0';
  local_b8[0x65] = '\0';
  local_b8[0x66] = '\0';
  local_b8[0x67] = '\0';
  local_b8[0x68] = '\0';
  local_b8[0x69] = '\0';
  local_b8[0x6a] = '\0';
  local_b8[0x6b] = '\0';
  local_b8[0x6c] = '\0';
  local_b8[0x6d] = '\0';
  local_b8[0x6e] = '\0';
  local_b8[0x6f] = '\0';
  local_b8[0x50] = '\0';
  local_b8[0x51] = '\0';
  local_b8[0x52] = '\0';
  local_b8[0x53] = '\0';
  local_b8[0x54] = '\0';
  local_b8[0x55] = '\0';
  local_b8[0x56] = '\0';
  local_b8[0x57] = '\0';
  local_b8[0x58] = '\0';
  local_b8[0x59] = '\0';
  local_b8[0x5a] = '\0';
  local_b8[0x5b] = '\0';
  local_b8[0x5c] = '\0';
  local_b8[0x5d] = '\0';
  local_b8[0x5e] = '\0';
  local_b8[0x5f] = '\0';
  local_b8[0x40] = '\0';
  local_b8[0x41] = '\0';
  local_b8[0x42] = '\0';
  local_b8[0x43] = '\0';
  local_b8[0x44] = '\0';
  local_b8[0x45] = '\0';
  local_b8[0x46] = '\0';
  local_b8[0x47] = '\0';
  local_b8[0x48] = '\0';
  local_b8[0x49] = '\0';
  local_b8[0x4a] = '\0';
  local_b8[0x4b] = '\0';
  local_b8[0x4c] = '\0';
  local_b8[0x4d] = '\0';
  local_b8[0x4e] = '\0';
  local_b8[0x4f] = '\0';
  local_b8[0x30] = '\0';
  local_b8[0x31] = '\0';
  local_b8[0x32] = '\0';
  local_b8[0x33] = '\0';
  local_b8[0x34] = '\0';
  local_b8[0x35] = '\0';
  local_b8[0x36] = '\0';
  local_b8[0x37] = '\0';
  local_b8[0x38] = '\0';
  local_b8[0x39] = '\0';
  local_b8[0x3a] = '\0';
  local_b8[0x3b] = '\0';
  local_b8[0x3c] = '\0';
  local_b8[0x3d] = '\0';
  local_b8[0x3e] = '\0';
  local_b8[0x3f] = '\0';
  local_b8[0x20] = '\0';
  local_b8[0x21] = '\0';
  local_b8[0x22] = '\0';
  local_b8[0x23] = '\0';
  local_b8[0x24] = '\0';
  local_b8[0x25] = '\0';
  local_b8[0x26] = '\0';
  local_b8[0x27] = '\0';
  local_b8[0x28] = '\0';
  local_b8[0x29] = '\0';
  local_b8[0x2a] = '\0';
  local_b8[0x2b] = '\0';
  local_b8[0x2c] = '\0';
  local_b8[0x2d] = '\0';
  local_b8[0x2e] = '\0';
  local_b8[0x2f] = '\0';
  local_b8[0x10] = '\0';
  local_b8[0x11] = '\0';
  local_b8[0x12] = '\0';
  local_b8[0x13] = '\0';
  local_b8[0x14] = '\0';
  local_b8[0x15] = '\0';
  local_b8[0x16] = '\0';
  local_b8[0x17] = '\0';
  local_b8[0x18] = '\0';
  local_b8[0x19] = '\0';
  local_b8[0x1a] = '\0';
  local_b8[0x1b] = '\0';
  local_b8[0x1c] = '\0';
  local_b8[0x1d] = '\0';
  local_b8[0x1e] = '\0';
  local_b8[0x1f] = '\0';
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  local_b8[8] = '\0';
  local_b8[9] = '\0';
  local_b8[10] = '\0';
  local_b8[0xb] = '\0';
  local_b8[0xc] = '\0';
  local_b8[0xd] = '\0';
  local_b8[0xe] = '\0';
  local_b8[0xf] = '\0';
  local_30 = lVar1;
  if (param_2 == 0) {
    param_2 = _time((time_t *)0x0);
    uVar2 = FUN_100b9e740();
    pcVar6 = "%s/vzlicense.invalid.%lu";
  }
  else {
    uVar2 = FUN_100b9e740();
    pcVar6 = "%s/vzlicense.%s";
  }
  _snprintf(local_b8,0x80,pcVar6,uVar2,param_2);
  pFVar3 = _fopen(local_b8,"w");
  if (pFVar3 == (FILE *)0x0) {
    uVar2 = 0xfffffff3;
    if (2 < DAT_10230ffd0) {
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      FUN_100df99c0("","License",3,"Can not open/create file %s with error %s",local_b8,pcVar6);
    }
    goto LAB_100b73a67;
  }
  sVar4 = _fwrite(param_3,param_4,1,pFVar3);
  if (sVar4 == 1) {
    uVar2 = 0;
    if (2 < DAT_10230ffd0) {
      pcVar6 = "License was saved to file %s. You can try load it later by vzlicload tool.";
      uVar2 = 0;
LAB_100b73a4c:
      FUN_100df99c0("","License",3,pcVar6,local_b8);
    }
  }
  else {
    uVar2 = 0xfffffffc;
    if (2 < DAT_10230ffd0) {
      pcVar6 = "Can not write to file %s";
      goto LAB_100b73a4c;
    }
  }
  _fclose(pFVar3);
LAB_100b73a67:
  if (lVar1 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

