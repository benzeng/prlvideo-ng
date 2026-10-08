
ulong FUN_100bc05e0(undefined8 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  mode_t mVar3;
  int iVar4;
  int iVar5;
  uid_t uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  time_t tVar10;
  size_t sVar11;
  ulong uVar12;
  int *piVar13;
  char *pcVar14;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar15;
  sockaddr local_a8 [7];
  long local_38;
  
  uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 0x20);
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  piVar8 = _malloc(0x10);
  if (piVar8 != (int *)0x0) {
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8[0] = 0;
    piVar8[1] = 0;
    pcVar9 = _malloc(0x40);
    if (pcVar9 != (char *)0x0) {
      _gettimeofday((timeval *)local_a8,(void *)0x0);
      if (DAT_102315d10 == '\0') {
        tVar10 = _time((time_t *)0x0);
        DAT_102315d10 = '\x01';
        _srand((uint)tVar10);
      }
      uVar2 = local_a8[0]._0_4_;
      iVar4 = _rand();
      ___snprintf_chk(pcVar9,0x40,0,0x40,"%x-%x-%d",uVar2,CONCAT44(uVar15,local_a8[0].sa_data._6_4_)
                      ,iVar4);
      *(char **)(piVar8 + 2) = pcVar9;
      sVar11 = _strlen(pcVar9);
      if (sVar11 + 0x14 < 0x68) {
        iVar5 = _socket(1,2,0);
        if (iVar5 == -1) {
          piVar13 = ___error();
          pcVar9 = _strerror(*piVar13);
          FUN_100b9d470(0xffffffff,"can\'t create socket, error %s",pcVar9);
          *piVar8 = -1;
          goto LAB_100bc08b1;
        }
        local_a8[0].sa_family = '\x01';
        pcVar14 = local_a8[0].sa_data;
        ___snprintf_chk(pcVar14,0x68,0,0x68,"%s/%s","/var/run/lic_events",pcVar9,iVar4);
        sVar11 = _strlen(pcVar14);
        iVar4 = _bind(iVar5,local_a8,(int)sVar11 + 2);
        if (iVar4 == -1) {
          piVar13 = ___error();
          if (*piVar13 == 0x30) {
            _unlink(pcVar9);
LAB_100bc07a5:
            sVar11 = _strlen(pcVar14);
            iVar4 = _bind(iVar5,local_a8,(int)sVar11 + 2);
            goto LAB_100bc07be;
          }
          piVar13 = ___error();
          if (*piVar13 != 2) goto LAB_100bc087d;
          uVar6 = _geteuid();
          if (uVar6 != 0) goto LAB_100bc087d;
          mVar3 = _umask(0x1ff);
          iVar4 = FUN_100b9e520("/var/run/lic_events");
          _umask(mVar3);
          if (iVar4 == 0) goto LAB_100bc07a5;
          piVar13 = ___error();
          pcVar9 = _strerror(*piVar13);
          FUN_100b9d470(0xffffffff,"Can\'t create directory %s - %s","/var/run/lic_events",pcVar9);
LAB_100bc08a2:
          _close(iVar5);
          *piVar8 = -1;
          goto LAB_100bc08b1;
        }
LAB_100bc07be:
        if (iVar4 != 0) {
LAB_100bc087d:
          piVar13 = ___error();
          pcVar9 = _strerror(*piVar13);
          pcVar14 = "Can\'t create/open socket to read events, %s";
LAB_100bc0893:
          FUN_100b9d470(0xffffffff,pcVar14,pcVar9);
          goto LAB_100bc08a2;
        }
        iVar4 = _fcntl(iVar5,4,4);
        if (iVar4 == -1) {
          piVar13 = ___error();
          pcVar9 = _strerror(*piVar13);
          pcVar14 = "Can\'t set socket to non-blocked mode %s";
          goto LAB_100bc0893;
        }
        *piVar8 = iVar5;
        iVar4 = _socket(1,2,0);
        piVar8[1] = iVar4;
        if (iVar4 == -1) {
LAB_100bc090d:
          FUN_100bc0980(piVar8);
          goto LAB_100bc08b1;
        }
        uVar7 = 0;
        iVar5 = _fcntl(iVar4,4,4);
        if (iVar5 == -1) {
          _close(iVar4);
          goto LAB_100bc090d;
        }
        *param_1 = piVar8;
      }
      else {
        FUN_100b9d470(0xfffffffd,0);
        *piVar8 = -1;
LAB_100bc08b1:
        if (*(void **)(piVar8 + 2) != (void *)0x0) {
          _free(*(void **)(piVar8 + 2));
        }
        _free(piVar8);
        uVar7 = FUN_100b9d560();
      }
      if (lVar1 == local_38) {
        return (ulong)uVar7;
      }
      goto LAB_100bc097a;
    }
    _free(piVar8);
  }
  if (lVar1 == local_38) {
    uVar12 = FUN_100b9d470(0xfffffffe,0);
    return uVar12;
  }
LAB_100bc097a:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

