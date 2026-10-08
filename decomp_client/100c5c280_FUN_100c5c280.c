
/* WARNING: Removing unreachable block (ram,0x000100c5d4b0) */
/* WARNING: Removing unreachable block (ram,0x000100c5d4cd) */

ulong FUN_100c5c280(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined4 *param_5,
                   char *param_6)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long local_80 [9];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_80[0] = 0;
  cVar1 = *param_6;
  if ((cVar1 != '\0') && ((param_6 = param_6 + 1, param_2 != 0 || (*param_3 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000100c5c51a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)((long)&switchD_100c5c51a::switchdataD_100c5d534 +
                      (long)(int)switchD_100c5c51a::switchdataD_100c5d534))
                      (0xffffffff,param_2,param_3,
                       (code *)((long)&switchD_100c5c51a::switchdataD_100c5d534 +
                               (long)(int)switchD_100c5c51a::switchdataD_100c5d534),(int)cVar1);
    return uVar3;
  }
  *param_5 = 0;
  local_80[0] = 0;
  iVar2 = FUN_100c5d720(param_1,param_2,local_80,param_3,0,param_6);
  if (iVar2 != 0) {
    *param_4 = local_80[0] + -1;
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return (ulong)(iVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

