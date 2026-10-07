
long FUN_1008b5c80(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  lVar3 = FUN_1008bf570(param_1,0);
  lVar5 = 0;
  if (lVar3 != 0) {
    if (param_3 == (code *)0x0) {
      iVar2 = FUN_1008b2650(local_438,0x400,0,param_4);
    }
    else {
      iVar2 = (*param_3)();
    }
    if (iVar2 < 1) {
      FUN_100887ce0(9,0x78,0x68,"pem_pk8.c",0xaf);
      FUN_1008a0510(lVar3);
      lVar5 = 0;
    }
    else {
      lVar4 = FUN_1008d7860(lVar3,local_438,iVar2);
      FUN_1008a0510(lVar3);
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar3 = FUN_100894790(lVar4);
        FUN_1008b1c30(lVar4);
        lVar5 = 0;
        if ((lVar3 != 0) && (lVar5 = lVar3, param_2 != (long *)0x0)) {
          if (*param_2 != 0) {
            FUN_1008924e0();
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

