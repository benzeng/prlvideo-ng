
undefined8 FUN_100887450(void)

{
  pid_t pVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uid_t uVar6;
  ssize_t sVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  undefined **ppuVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 local_2a8;
  int local_2a0;
  uint local_298 [34];
  ulong local_210;
  int local_208 [2];
  long local_200 [53];
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  pVar1 = _getpid();
  ___bzero(local_208,0x1b0);
  uVar15 = 0;
  iVar14 = 0;
  do {
    uVar2 = _open((&PTR_s__dev_urandom_100bde160)[uVar15],0x20004);
    if (-1 < (int)uVar2) {
      iVar3 = _fstat_INODE64(uVar2,local_208 + uVar15 * 0x24);
      if (iVar3 == 0) {
        if (uVar15 != 0) {
          plVar9 = local_200;
          uVar10 = 0;
          do {
            if ((*plVar9 == local_200[uVar15 * 0x12]) &&
               ((int)plVar9[-1] == local_208[uVar15 * 0x24])) goto LAB_1008875a0;
            uVar10 = uVar10 + 1;
            plVar9 = plVar9 + 0x12;
          } while (uVar10 < uVar15);
        }
        uVar13 = 1 << ((byte)uVar2 & 0x1f);
        if (uVar2 < 0x400) {
          iVar3 = 10000;
LAB_1008875d0:
          do {
            local_2a8 = 0;
            local_298[0x1c] = 0;
            local_298[0x1d] = 0;
            local_298[0x1e] = 0;
            local_298[0x1f] = 0;
            local_298[0x18] = 0;
            local_298[0x19] = 0;
            local_298[0x1a] = 0;
            local_298[0x1b] = 0;
            local_298[0x14] = 0;
            local_298[0x15] = 0;
            local_298[0x16] = 0;
            local_298[0x17] = 0;
            local_298[0x10] = 0;
            local_298[0x11] = 0;
            local_298[0x12] = 0;
            local_298[0x13] = 0;
            local_298[0xc] = 0;
            local_298[0xd] = 0;
            local_298[0xe] = 0;
            local_298[0xf] = 0;
            local_298[8] = 0;
            local_298[9] = 0;
            local_298[10] = 0;
            local_298[0xb] = 0;
            local_298[4] = 0;
            local_298[5] = 0;
            local_298[6] = 0;
            local_298[7] = 0;
            local_298[0] = 0;
            local_298[1] = 0;
            local_298[2] = 0;
            local_298[3] = 0;
            local_298[(ulong)(long)(int)uVar2 >> 5] =
                 local_298[(ulong)(long)(int)uVar2 >> 5] | uVar13;
            local_2a0 = iVar3;
            iVar5 = _select_1050(uVar2 + 1,local_298,0,0,&local_2a8);
            iVar3 = local_2a0;
            iVar4 = 0;
            if ((iVar5 < 0) ||
               (iVar4 = local_2a0, (local_298[(ulong)(long)(int)uVar2 >> 5] & uVar13) == 0)) {
              iVar3 = iVar4;
              if (iVar3 == 10000) {
                iVar3 = 0;
              }
LAB_1008876ae:
              piVar8 = ___error();
              if (*piVar8 != 4) {
                piVar8 = ___error();
                if ((0x1f < iVar14) || ((iVar3 == 0 || (*piVar8 != 0x23)))) goto LAB_1008876e8;
                goto LAB_1008875d0;
              }
            }
            else {
              sVar7 = _read(uVar2,local_58 + iVar14,(long)(0x20 - iVar14));
              iVar5 = (int)sVar7;
              iVar4 = 0;
              if (-1 < iVar5) {
                iVar4 = iVar5;
              }
              iVar14 = iVar14 + iVar4;
              if (iVar3 == 10000) {
                iVar3 = 0;
              }
              if (iVar5 < 1) goto LAB_1008876ae;
            }
            if ((iVar3 == 0) || (0x1f < iVar14)) goto LAB_1008876e8;
          } while( true );
        }
        local_2a8 = 0;
        local_2a0 = 10000;
        sVar7 = _read(uVar2,local_58 + iVar14,(long)(0x20 - iVar14));
        iVar4 = (int)sVar7;
        iVar3 = 0;
        if (-1 < iVar4) {
          iVar3 = iVar4;
        }
        iVar14 = iVar14 + iVar3;
        if ((iVar4 < 1) && (piVar8 = ___error(), *piVar8 != 4)) {
          ___error();
        }
LAB_1008876e8:
        _close(uVar2);
      }
      else {
LAB_1008875a0:
        _close(uVar2);
      }
    }
    uVar15 = uVar15 + 1;
  } while ((uVar15 < 3) && (iVar14 < 0x20));
  if (iVar14 < 0x20) {
    pcVar12 = "/var/run/egd-pool";
    ppuVar11 = &PTR_s__dev_egd_pool_100bde188;
    do {
      iVar3 = FUN_1008870d0(pcVar12,local_58 + iVar14,0x20 - iVar14);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar14 = iVar14 + iVar3;
      if (0x1f < iVar14) break;
      pcVar12 = *ppuVar11;
      ppuVar11 = ppuVar11 + 1;
    } while (pcVar12 != (char *)0x0);
    if (iVar14 < 1) goto LAB_100887786;
  }
  FUN_100886e60(SUB84((double)iVar14,0),local_58,0x20);
  _OPENSSL_cleanse(local_58,(long)iVar14);
LAB_100887786:
  local_210 = (ulong)pVar1;
  FUN_100886e60(0,&local_210,8);
  uVar6 = _getuid();
  local_210 = (ulong)uVar6;
  FUN_100886e60(0,&local_210,8);
  local_210 = _time((time_t *)0x0);
  FUN_100886e60(0,&local_210,8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 1;
}

