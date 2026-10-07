
undefined8 FUN_100741c70(long param_1,void *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  ssize_t sVar8;
  int *piVar9;
  char *pcVar10;
  undefined1 local_138 [4];
  ushort local_134;
  sockaddr local_a8 [7];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  if (((param_1 == 0) || (param_2 == (void *)0x0)) || (0x400 < *(uint *)((long)param_2 + 4))) {
    uVar4 = FUN_10071e690(0xfffffffd,0);
  }
  else {
    local_a8[0].sa_family = '\x01';
    lVar5 = _opendir_INODE64("/var/run/lic_events");
    if (lVar5 == 0) {
      uVar4 = FUN_10071e690(0xffffffff,"can\'t open directory %s","/var/run/lic_events");
    }
    else {
      lVar6 = _readdir_INODE64(lVar5);
      if (lVar6 != 0) {
        pcVar1 = local_a8[0].sa_data;
        do {
          pcVar10 = (char *)(lVar6 + 0x15);
          iVar3 = _strcmp(pcVar10,"..");
          if (iVar3 != 0) {
            iVar3 = _strcmp(pcVar10,".");
            if (iVar3 != 0) {
              iVar3 = _strcmp(pcVar10,*(char **)(param_1 + 8));
              if (iVar3 != 0) {
                ___snprintf_chk(pcVar1,0x68,0,0x68,"%s/%s","/var/run/lic_events",pcVar10);
                iVar3 = _stat_INODE64(pcVar1,local_138);
                if ((iVar3 != -1) && ((local_134 & 0xf000) == 0xc000)) {
                  iVar3 = *(int *)(param_1 + 4);
                  uVar2 = *(uint *)((long)param_2 + 4);
                  sVar7 = _strlen(pcVar1);
                  sVar8 = _sendto(iVar3,param_2,(ulong)uVar2 + 9,0,local_a8,(int)sVar7 + 2);
                  if (sVar8 == -1) {
                    piVar9 = ___error();
                    if (*piVar9 == 0x3d) {
                      _unlink(pcVar1);
                    }
                  }
                }
              }
            }
          }
          lVar6 = _readdir_INODE64(lVar5);
        } while (lVar6 != 0);
      }
      _closedir(lVar5);
      uVar4 = 0;
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
  if (lVar6 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

