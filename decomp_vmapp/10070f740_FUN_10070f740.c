
int FUN_10070f740(char *param_1,uint param_2)

{
  long lVar1;
  mode_t mVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_c28;
  undefined4 local_c20;
  undefined2 local_c1c;
  char local_c1a [1010];
  char local_828 [2032];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (param_2 != 0) {
    builtin_strncpy(local_828,"4C6364ACXT.pd/",0xf);
    _strcpy(local_828 + 0xe,param_1);
    _shm_unlink(local_828);
  }
  mVar2 = _umask(9);
  local_c28 = 0x4341343633364334;
  local_c1a[0] = '\0';
  local_c1c = 0x2f64;
  local_c20 = 0x702e5458;
  _strcpy(local_c1a,param_1);
  uVar5 = 2;
  if (param_2 != 0) {
    uVar5 = 0xa02;
  }
  iVar3 = _shm_open(&local_c28,uVar5,0x1ff);
  iVar6 = -1;
  if ((-1 < iVar3) && (iVar6 = iVar3, param_2 != 0)) {
    uVar4 = _ftruncate(iVar3,(ulong)param_2);
    _sprintf(local_828,"%d",(ulong)uVar4);
    if ((int)uVar4 < 0) {
      ___error();
      _close(iVar3);
      ___error();
      iVar6 = -1;
    }
  }
  _umask(mVar2);
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

