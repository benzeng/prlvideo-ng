
void * FUN_100b9e750(uint param_1)

{
  key_t kVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  bool bVar9;
  __shmid_ds_new local_78;
  
  kVar1 = _ftok("/Library",0x4d);
  uVar8 = (ulong)param_1;
  iVar2 = _shmget(kVar1,uVar8,0x7b0);
  if (iVar2 != -1) {
    bVar9 = true;
LAB_100b9e797:
    pvVar4 = _shmat(iVar2,(void *)0x0,0x2000);
    if (pvVar4 == (void *)0xffffffffffffffff) {
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      FUN_100b9d470(0xffffffff,"Can\'t attach to region %d - %s",iVar2,pcVar6);
      return (void *)0x0;
    }
    if (!bVar9) {
      return pvVar4;
    }
    if (pvVar4 == (void *)0x0) {
      return (void *)0x0;
    }
    ___bzero(pvVar4,uVar8);
    return pvVar4;
  }
  piVar5 = ___error();
  if ((*piVar5 == 0x11) && (iVar2 = _shmget(kVar1,uVar8,0x1b0), iVar2 != -1)) {
    local_78._48_8_ = 0;
    local_78._56_8_ = 0;
    local_78.shm_lpid = 0;
    local_78.shm_cpid = 0;
    local_78._40_8_ = 0;
    local_78.shm_perm.mode = 0;
    local_78.shm_perm._seq = 0;
    local_78.shm_perm._key = 0;
    local_78.shm_segsz = 0;
    local_78.shm_perm.uid = 0;
    local_78.shm_perm.gid = 0;
    local_78.shm_perm.cuid = 0;
    local_78.shm_perm.cgid = 0;
    local_78.shm_internal._4_4_ = 0;
    local_78._64_8_ = 0;
    iVar3 = _shmctl(iVar2,2,&local_78);
    if (iVar3 != -1) {
      bVar9 = local_78.shm_nattch == 0;
      goto LAB_100b9e797;
    }
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    pcVar7 = "Can\'t get info about shared memory region - %s";
  }
  else {
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    pcVar7 = "Can\'t get shared memory region - %s";
  }
  FUN_100b9d470(0xffffffff,pcVar7,pcVar6);
  return (void *)0x0;
}

