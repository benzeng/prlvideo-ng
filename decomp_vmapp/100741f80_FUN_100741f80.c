
int FUN_100741f80(int *param_1,undefined8 *param_2)

{
  int iVar1;
  ssize_t sVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  socklen_t local_5c;
  undefined1 local_58 [4];
  int local_54;
  sockaddr local_48;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_5c = 0;
  local_38 = lVar6;
  if ((param_1 == (int *)0x0) || (param_2 == (undefined8 *)0x0)) {
    FUN_10071e690(0xfffffffd,0);
    iVar1 = -1;
    goto LAB_100742092;
  }
  sVar2 = _recvfrom(*param_1,local_58,9,2,&local_48,&local_5c);
  iVar5 = (int)sVar2;
  if (iVar5 == 9) {
    iVar1 = local_54 + 9;
    pvVar3 = _malloc((long)iVar1);
    if (pvVar3 == (void *)0x0) {
      FUN_10071e690(0xfffffffe,0);
      iVar1 = -1;
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_100742092;
    }
    sVar2 = _recvfrom(*param_1,pvVar3,(long)iVar1,0,&local_48,&local_5c);
    iVar5 = (int)sVar2;
    if (iVar5 == iVar1) {
      *param_2 = pvVar3;
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      iVar1 = 1;
      goto LAB_100742092;
    }
    _free(pvVar3);
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    iVar1 = 0;
    if (0 < iVar5) goto LAB_100742092;
  }
  iVar1 = iVar5;
  if (iVar5 == -1) {
    piVar4 = ___error();
    iVar1 = -1;
    if (*piVar4 == 0x23) {
      iVar1 = 0;
    }
  }
LAB_100742092:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

