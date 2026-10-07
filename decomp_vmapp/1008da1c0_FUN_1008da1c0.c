
uint FUN_1008da1c0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

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
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  DAT_1011c2aa4 = 0;
  DAT_1011c2aa0 = 0;
  local_448.sa_mask = 0;
  local_448.sa_flags = 0;
  local_448.__sigaction_u.__sa_handler = FUN_1008da4d0;
  psVar8 = (sigaction *)&DAT_1011c2ac0;
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
  DAT_1011c2aa0 = 1;
  if (param_3 == 0) {
    puVar5 = &DAT_1011c2a58;
    puVar7 = &DAT_1011c2cb0;
    for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (ulong)bVar10 * -2 + 1;
      puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
    }
    DAT_1011c2cc8 = DAT_1011c2cc8 & 0xf7;
    if (DAT_1011c2a40 != '\x01') goto LAB_1008da2d3;
    iVar2 = _fileno(DAT_1011c2a48);
    iVar2 = _tcsetattr(iVar2,0,(termios *)&DAT_1011c2cb0);
    if (iVar2 != -1) goto LAB_1008da2d3;
    uVar6 = 0;
    if (DAT_1011c2aa4 == 2) {
      uVar6 = 0xffffffff;
    }
  }
  else {
LAB_1008da2d3:
    DAT_1011c2aa0 = 2;
    local_438[0] = '\0';
    pcVar3 = _fgets(local_438,0x3ff,DAT_1011c2a48);
    uVar9 = 0;
    if (((pcVar3 != (char *)0x0) &&
        (iVar2 = _feof(DAT_1011c2a48), pFVar1 = DAT_1011c2a48, uVar9 = uVar6, iVar2 == 0)) &&
       (iVar2 = _ferror(DAT_1011c2a48), iVar2 == 0)) {
      pcVar3 = _strchr(local_438,10);
      if (pcVar3 == (char *)0x0) {
        do {
          pcVar3 = _fgets((char *)&local_448,4,pFVar1);
          if (pcVar3 == (char *)0x0) goto LAB_1008da3bc;
          pcVar3 = _strchr((char *)&local_448,10);
        } while (pcVar3 == (char *)0x0);
      }
      else if (param_4 != 0) {
        *pcVar3 = '\0';
      }
      uVar6 = FUN_1008d9c60(param_1,param_2,local_438);
      uVar9 = uVar6 >> 0x1f ^ 1;
    }
LAB_1008da3bc:
    uVar6 = 0xffffffff;
    if (DAT_1011c2aa4 != 2) {
      uVar6 = uVar9;
    }
    uVar9 = uVar6;
    if (param_3 != 0) goto LAB_1008da451;
  }
  _fputc(10,DAT_1011c2a50);
  uVar9 = uVar6;
  if ((param_3 == 0) && (1 < DAT_1011c2aa0)) {
    puVar5 = &DAT_1011c2a58;
    puVar7 = &DAT_1011c2cb0;
    for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (ulong)bVar10 * -2 + 1;
      puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
    }
    DAT_1011c2cc8 = DAT_1011c2cc8 | 8;
    if (DAT_1011c2a40 == '\x01') {
      iVar2 = _fileno(DAT_1011c2a48);
      iVar2 = _tcsetattr(iVar2,0,(termios *)&DAT_1011c2cb0);
      uVar9 = 0;
      if (iVar2 == -1) goto LAB_1008da451;
    }
    uVar9 = uVar6;
  }
LAB_1008da451:
  if (0 < DAT_1011c2aa0) {
    lVar4 = -0x1f;
    psVar8 = (sigaction *)&DAT_1011c2ac0;
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
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

