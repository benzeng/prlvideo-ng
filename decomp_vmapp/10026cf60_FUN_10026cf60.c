
undefined8 FUN_10026cf60(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar3 = *(long **)(param_1 + 0x28);
  local_28 = lVar1;
  if ((plVar3 != (long *)0x0) &&
     ((*(undefined4 *)(param_1 + 0x158) = 1, *(char *)(param_1 + 0x20) == '\0' ||
      ((iVar2 = FUN_10026cc10(param_1), iVar2 == 0 &&
       (plVar3 = *(long **)(param_1 + 0x28), plVar3 != (long *)0x0)))))) {
    local_30 = 0;
    local_38 = 0;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38,0xc,0,0,0,0,0,0,3,0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
              (*(long **)(param_1 + 0x28),&local_38,0xc,0,0,0,0,0,0,3,0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
              (*(long **)(param_1 + 0x28),&local_38,0xc,0,0,0,0,0,0,3,0);
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

