
undefined8 FUN_100d609d0(char **param_1)

{
  int iVar1;
  pid_t pVar2;
  pid_t pVar3;
  int *piVar4;
  char *pcVar5;
  FILE *pFVar6;
  size_t sVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  undefined4 local_44c;
  char local_448 [1032];
  int local_40;
  int local_3c;
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar11;
  iVar1 = _pipe((int)&local_40);
  if (iVar1 == 0) {
    pVar2 = _fork();
    if (pVar2 < 0) {
      _close(local_40);
      _close(local_3c);
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      pcVar9 = "pipe() : %s";
    }
    else {
      if (pVar2 == 0) {
        iVar1 = _open("/dev/null",1);
        if (iVar1 == -1) {
          piVar4 = ___error();
          pcVar5 = _strerror(*piVar4);
          FUN_100df99c0("DetectOS","DetectOS",0,"get_distro_type - open(/dev/null) : %s",pcVar5);
                    /* WARNING: Subroutine does not return */
          _exit(-1);
        }
        _dup2(iVar1,1);
        _dup2(iVar1,0);
        _close(iVar1);
        _close(local_40);
        _dup2(local_3c,2);
        _close(local_3c);
        _signal(2);
        _execvp(*param_1,param_1);
        pcVar5 = *param_1;
        piVar4 = ___error();
        pcVar9 = _strerror(*piVar4);
        FUN_100df99c0("DetectOS","DetectOS",0,"get_distro_type - execvp(%s) : %s",pcVar5,pcVar9);
                    /* WARNING: Subroutine does not return */
        _exit(-1);
      }
      _close(local_3c);
      pFVar6 = _fdopen(local_40,"r");
      if (pFVar6 != (FILE *)0x0) {
        pcVar5 = _fgets(local_448,0x400,pFVar6);
        while (pcVar5 != (char *)0x0) {
          sVar7 = _strlen(local_448);
          if (local_448[sVar7 - 1] == '\n') {
            local_448[sVar7 - 1] = '\0';
          }
          FUN_100df99c0("DetectOS","DetectOS",0,"get_distro_type - %s : %s",*param_1,local_448);
          pcVar5 = _fgets(local_448,0x400,pFVar6);
        }
        _fclose(pFVar6);
        lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
      }
      _close(local_40);
      do {
        pVar3 = _waitpid(pVar2,&local_44c,0);
        if (pVar3 != -1) {
          uVar10 = local_44c & 0x7f;
          if (uVar10 == 0x7f) {
            pcVar5 = *param_1;
            pcVar9 = "get_distro_type - %s exited with status %d";
          }
          else if (uVar10 == 0) {
            uVar8 = 0;
            local_44c = local_44c >> 8 & 0xff;
            if (local_44c == 0) goto LAB_100d60b8f;
            pcVar5 = *param_1;
            pcVar9 = "get_distro_type - %s failed, exitcode=%d";
          }
          else {
            pcVar5 = *param_1;
            pcVar9 = "get_distro_type - %s got signal %d";
            local_44c = uVar10;
          }
          FUN_100df99c0("DetectOS","DetectOS",0,pcVar9,pcVar5,local_44c);
          goto LAB_100d60b8a;
        }
        piVar4 = ___error();
      } while (*piVar4 == 4);
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      pcVar9 = "get_distro_type - waitpid() : %s";
    }
  }
  else {
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    pcVar9 = "get_distro_type - pipe() : %s";
  }
  FUN_100df99c0("DetectOS","DetectOS",0,pcVar9,pcVar5);
LAB_100d60b8a:
  uVar8 = 0xffffffff;
LAB_100d60b8f:
  if (lVar11 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

