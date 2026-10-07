
uint FUN_100359060(undefined8 param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint local_58 [8];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_3 = 0;
  *param_4 = 0;
  local_38 = lVar2;
  FUN_100358ac0(local_58,param_1,param_2);
  uVar3 = 0;
  if (param_2 != 0) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      uVar1 = local_58[lVar4];
      if ((uVar1 & 1) != 0) {
        uVar5 = 1 << ((byte)lVar4 & 0x1f);
        if ((uVar1 & 2) != 0) {
          *param_3 = *param_3 | uVar5;
        }
        uVar3 = uVar3 | uVar5;
        if ((uVar1 & 4) != 0) {
          *param_4 = *param_4 | uVar5;
        }
      }
      if ((uVar1 & 8) != 0) {
        *param_5 = *param_5 | 1 << ((byte)lVar4 & 0x1f);
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  if (lVar2 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

