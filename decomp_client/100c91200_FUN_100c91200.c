
long FUN_100c91200(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  lVar3 = FUN_100c9aaf0(param_1,0);
  lVar5 = 0;
  if (lVar3 != 0) {
    if (param_3 == (code *)0x0) {
      iVar2 = FUN_100c8dbd0(local_438,0x400,0,param_4);
    }
    else {
      iVar2 = (*param_3)();
    }
    if (iVar2 < 1) {
      FUN_100c62ee0(9,0x78,0x68,"pem_pk8.c",0xaf);
      FUN_100c7ba90(lVar3);
      lVar5 = 0;
    }
    else {
      lVar4 = FUN_100cb40a0(lVar3,local_438,iVar2);
      FUN_100c7ba90(lVar3);
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar3 = FUN_100c6fd10(lVar4);
        FUN_100c8d1b0(lVar4);
        lVar5 = 0;
        if ((lVar3 != 0) && (lVar5 = lVar3, param_2 != (long *)0x0)) {
          if (*param_2 != 0) {
            FUN_100c6d8c0();
          }
          *param_2 = lVar3;
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

