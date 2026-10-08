
uint FUN_100cb6a00(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  FILE *pFVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  sigaction *psVar8;
  uint uVar9;
  byte bVar10;
  sigaction local_448;
  char local_438 [1024];
  long local_38;
  
  bVar10 = 0;
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  DAT_1023184e4 = 0;
  DAT_1023184e0 = 0;
  local_448.sa_mask = 0;
  local_448.sa_flags = 0;
  local_448.__sigaction_u.__sa_handler = FUN_100cb6d10;
  psVar8 = (sigaction *)&DAT_102318500;
  lVar4 = -0x1f;
  do {
    uVar6 = (int)lVar4 + 0x20;
    if ((0x1f < uVar6) || ((0xc0000200U >> (uVar6 & 0x1f) & 1) == 0)) {
      _sigaction(uVar6,&local_448,psVar8);
    }
    psVar8 = psVar8 + 1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0);
  uVar6 = 0;
  _signal(0x1c);
  DAT_1023184e0 = 1;
  if (param_3 == 0) {
    puVar5 = &DAT_102318498;
    puVar7 = &DAT_1023186f0;
    for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (ulong)bVar10 * -2 + 1;
      puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
    }
    DAT_102318708 = DAT_102318708 & 0xf7;
    if (DAT_102318480 != '\x01') goto LAB_100cb6b13;
    iVar2 = _fileno(DAT_102318488);
    iVar2 = _tcsetattr(iVar2,0,(termios *)&DAT_1023186f0);
    if (iVar2 != -1) goto LAB_100cb6b13;
    uVar6 = 0;
    if (DAT_1023184e4 == 2) {
      uVar6 = 0xffffffff;
    }
  }
  else {
LAB_100cb6b13:
    DAT_1023184e0 = 2;
    local_438[0] = '\0';
    pcVar3 = _fgets(local_438,0x3ff,DAT_102318488);
    uVar9 = 0;
    if (((pcVar3 != (char *)0x0) &&
        (iVar2 = _feof(DAT_102318488), pFVar1 = DAT_102318488, uVar9 = uVar6, iVar2 == 0)) &&
       (iVar2 = _ferror(DAT_102318488), iVar2 == 0)) {
      pcVar3 = _strchr(local_438,10);
      if (pcVar3 == (char *)0x0) {
        do {
          pcVar3 = _fgets((char *)&local_448,4,pFVar1);
          if (pcVar3 == (char *)0x0) goto LAB_100cb6bfc;
          pcVar3 = _strchr((char *)&local_448,10);
        } while (pcVar3 == (char *)0x0);
      }
      else if (param_4 != 0) {
        *pcVar3 = '\0';
      }
      uVar6 = FUN_100cb64a0(param_1,param_2,local_438);
      uVar9 = uVar6 >> 0x1f ^ 1;
    }
LAB_100cb6bfc:
    uVar6 = 0xffffffff;
    if (DAT_1023184e4 != 2) {
      uVar6 = uVar9;
    }
    uVar9 = uVar6;
    if (param_3 != 0) goto LAB_100cb6c91;
  }
  _fputc(10,DAT_102318490);
  uVar9 = uVar6;
  if ((param_3 == 0) && (1 < DAT_1023184e0)) {
    puVar5 = &DAT_102318498;
    puVar7 = &DAT_1023186f0;
    for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (ulong)bVar10 * -2 + 1;
      puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
    }
    DAT_102318708 = DAT_102318708 | 8;
    if (DAT_102318480 == '\x01') {
      iVar2 = _fileno(DAT_102318488);
      iVar2 = _tcsetattr(iVar2,0,(termios *)&DAT_1023186f0);
      uVar9 = 0;
      if (iVar2 == -1) goto LAB_100cb6c91;
    }
    uVar9 = uVar6;
  }
LAB_100cb6c91:
  if (0 < DAT_1023184e0) {
    lVar4 = -0x1f;
    psVar8 = (sigaction *)&DAT_102318500;
    do {
      uVar6 = (int)lVar4 + 0x20;
      if ((uVar6 & 0xfffffffe) != 0x1e) {
        _sigaction(uVar6,psVar8,(sigaction *)0x0);
      }
      psVar8 = psVar8 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
  }
  _OPENSSL_cleanse(local_438,0x400);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

