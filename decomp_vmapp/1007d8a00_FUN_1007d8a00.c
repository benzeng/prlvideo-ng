
undefined1 FUN_1007d8a00(int *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int local_28;
  int local_24;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_1[0] = -1;
  param_1[1] = -1;
  local_20 = lVar1;
  iVar2 = _socketpair(1,1,0,&local_28);
  if (-1 < iVar2) {
    uVar3 = _fcntl(local_28,3,0);
    if (-1 < (int)uVar3) {
      iVar2 = _fcntl(local_28,4,(ulong)(uVar3 | 4));
      if (-1 < iVar2) {
        uVar3 = _fcntl(local_24,3,0);
        if (-1 < (int)uVar3) {
          iVar2 = _fcntl(local_24,4,(ulong)(uVar3 | 4));
          if (-1 < iVar2) {
            *param_1 = local_28;
            param_1[1] = local_24;
            uVar4 = 1;
            goto LAB_1007d8ad9;
          }
        }
      }
    }
    _close(local_28);
    _close(local_24);
  }
  uVar4 = 0;
  FUN_1008e3970("","Std",0,"pollev_init: failed to create a pipe");
LAB_1007d8ad9:
  if (lVar1 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

