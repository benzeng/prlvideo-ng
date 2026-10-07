
ulong FUN_100742520(long param_1)

{
  mode_t mVar1;
  undefined4 in_EAX;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uStack_28;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    FUN_10071e690(0xfffffffd,0);
    return 0;
  }
  uStack_28 = CONCAT44(1,in_EAX);
  iVar2 = _open("/var/run/vzlic_locks/keynumber.lock",1,0x1b0);
  if (iVar2 == -1) {
    piVar3 = ___error();
    if (*piVar3 == 2) {
      mVar1 = _umask(0x1ff);
      piVar3 = ___error();
      *piVar3 = 0;
      _mkdir("/var/run/vzlic_locks",0x1fd);
      _umask(mVar1);
      piVar3 = ___error();
      if ((*piVar3 != 0) && (piVar3 = ___error(), *piVar3 != 0x11)) {
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        FUN_10071e690(0xfffffffc,"Can\'t create directory %s - %s","/var/run/vzlic_locks",pcVar4);
        return 0;
      }
      uStack_28 = uStack_28 | 0x20000000000;
      piVar3 = ___error();
      *piVar3 = 0;
    }
    piVar3 = ___error();
    uVar5 = uStack_28;
    if (*piVar3 == 0) {
      iVar2 = _open("/var/run/vzlic_locks/keynumber.lock",uStack_28._4_4_,0x1b0);
      if (iVar2 != -1) {
        if ((uVar5 & 0x20000000000) != 0) {
          _lseek(iVar2,0x1ffff,0);
          _write(iVar2,(void *)((long)&uStack_28 + 4),4);
        }
        goto LAB_100742625;
      }
    }
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    uVar5 = 0;
    FUN_10071e690(0xfffffffc,"Can\'t create/open file /var/run/vzlic_locks/keynumber.lock - %s",
                  pcVar4);
  }
  else {
LAB_100742625:
    uVar5 = (long)iVar2 | (*(ulong *)(param_1 + 0x18) & 0x1ffff) << 0x20;
  }
  return uVar5;
}

