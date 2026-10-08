
undefined4 FUN_100da91b0(char *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 local_844;
  char *local_840;
  undefined2 local_838 [512];
  char local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  ___bzero(local_838,0x400);
  local_840 = local_438;
  uVar4 = ___strlcpy_chk(local_840,param_1,0x400,0x400);
  if (0x400 < uVar4) {
    piVar5 = ___error();
    *piVar5 = 0x3f;
    uVar3 = 0xffffffff;
LAB_100da9326:
    if (lVar1 == local_38) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  if (*param_1 == '/') {
    local_838[0] = 0x2f;
  }
  pcVar6 = _strsep(&local_840,"/");
  if (pcVar6 == (char *)0x0) {
    uVar3 = 1;
    goto LAB_100da9326;
  }
  local_844 = 1;
LAB_100da9280:
  if (*pcVar6 != '\0') {
    if ((char)local_838[0] != '\0') {
      ___strcat_chk(local_838,"/",0x400);
    }
    ___strcat_chk(local_838,pcVar6,0x400);
    iVar2 = _mkdir((char *)local_838,0x1ff);
    if (iVar2 != -1) {
      pcVar6 = _strsep(&local_840,"/");
      local_844 = 0;
      goto joined_r0x000100da9311;
    }
    piVar5 = ___error();
    if (*piVar5 != 0x11) {
      piVar5 = ___error();
      uVar3 = 0xffffffff;
      if (*piVar5 == 0xd) goto LAB_100da92dc;
      goto LAB_100da9326;
    }
  }
LAB_100da92dc:
  pcVar6 = _strsep(&local_840,"/");
joined_r0x000100da9311:
  uVar3 = local_844;
  if (pcVar6 == (char *)0x0) goto LAB_100da9326;
  goto LAB_100da9280;
}

