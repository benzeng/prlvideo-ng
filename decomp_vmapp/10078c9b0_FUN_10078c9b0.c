
bool FUN_10078c9b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  cVar2 = FUN_10078ca30(param_1,param_2,0x10);
  if (cVar2 != '\0') {
    uVar3 = FUN_10078d0a0(param_1 + 8);
    FUN_1007d6c60(&local_38,uVar3);
    param_3[1] = local_30;
    *param_3 = local_38;
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar2 != '\0';
}

