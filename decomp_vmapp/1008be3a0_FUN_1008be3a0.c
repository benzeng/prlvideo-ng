
int FUN_1008be3a0(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *local_240;
  undefined8 local_238;
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined1 local_1e0 [40];
  undefined8 local_1b8;
  int local_178 [2];
  undefined1 **local_170;
  undefined1 *local_168 [15];
  undefined1 *local_f0 [23];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_178[0] = param_2;
  local_38 = lVar4;
  if (param_2 == 2) {
    local_170 = local_168;
    local_168[0] = local_230;
    local_220 = param_3;
  }
  else {
    iVar1 = -1;
    if (param_2 != 1) goto LAB_1008be4b0;
    local_170 = local_f0;
    local_f0[0] = local_1e0;
    local_1b8 = param_3;
  }
  iVar1 = FUN_100885160(param_1,local_178);
  if ((param_4 != (int *)0x0) && (-1 < iVar1)) {
    *param_4 = 1;
    iVar3 = iVar1 + 1;
    local_240 = local_178;
    iVar2 = FUN_100885600(param_1);
    if (iVar3 < iVar2) {
      do {
        local_238 = FUN_100885620(param_1,iVar3);
        iVar2 = FUN_1008bd8d0(&local_238,&local_240);
        if (iVar2 != 0) break;
        *param_4 = *param_4 + 1;
        iVar3 = iVar3 + 1;
        iVar2 = FUN_100885600(param_1);
      } while (iVar3 < iVar2);
      lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
LAB_1008be4b0:
  if (lVar4 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

