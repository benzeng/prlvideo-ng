
undefined8 FUN_1008b6700(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_88 [88];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(param_2 + 0x10);
  uVar3 = 0;
  local_30 = lVar1;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x70) != 0)) {
    FUN_1008823b0(local_88,0x50,"%s PARAMETERS",*(undefined8 *)(lVar2 + 0x10));
    uVar3 = FUN_1008b3ae0(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x70),local_88,param_1,param_2
                          ,0,0,0,0,0);
  }
  if (lVar1 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

