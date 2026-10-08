
long FUN_100cbc750(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_88 [48];
  undefined1 local_58 [32];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar5 = 0;
  local_38 = lVar1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    iVar2 = FUN_100c27100(param_1,param_3);
    lVar5 = 0;
    if (iVar2 < 0) {
      iVar2 = FUN_100c27100(param_2,param_3);
      lVar5 = 0;
      if (iVar2 < 0) {
        iVar2 = FUN_100c26610(param_3);
        iVar2 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
        lVar3 = FUN_100bf3540(iVar2 * 2,"srp_lib.c",0x84);
        lVar5 = 0;
        if (lVar3 != 0) {
          lVar5 = (long)iVar2;
          ___bzero();
          FUN_100c65850(local_88);
          uVar4 = FUN_100c6ca00();
          FUN_100c65920(local_88,uVar4,0);
          iVar2 = FUN_100c26ff0(param_1);
          FUN_100c65b10(local_88,iVar2 + lVar3,lVar5);
          iVar2 = FUN_100c26ff0(param_2,lVar3 + lVar5);
          FUN_100c65b10(local_88,iVar2 + lVar3,lVar5);
          FUN_100bf3910(lVar3);
          FUN_100c65bc0(local_88,local_58,0);
          FUN_100c65c50(local_88);
          lVar3 = FUN_100c26e20(local_58,0x14,0);
          lVar5 = 0;
          if ((lVar3 != 0) && (lVar5 = lVar3, *(int *)(lVar3 + 8) == 0)) {
            FUN_100c266b0(lVar3);
            lVar5 = 0;
          }
        }
      }
    }
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}

