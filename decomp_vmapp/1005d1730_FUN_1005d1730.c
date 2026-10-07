
long * FUN_1005d1730(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  long local_58;
  long local_50;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  param_1[2] = 0;
  if (*(long **)(param_2 + 0x70) != (long *)(param_2 + 0x78)) {
    plVar4 = *(long **)(param_2 + 0x70);
    do {
      FUN_1007d6920(local_48,plVar4 + 5);
      iVar2 = FUN_1007ea6f0(param_3,local_48);
      if (iVar2 == 0) {
        FUN_1007d6920(&local_58,plVar4 + 4);
        plVar3 = operator_new(0x20);
        plVar3[3] = local_50;
        plVar3[2] = local_58;
        plVar3[1] = (long)param_1;
        lVar1 = *param_1;
        *plVar3 = lVar1;
        *(long **)(lVar1 + 8) = plVar3;
        *param_1 = (long)plVar3;
        param_1[2] = param_1[2] + 1;
      }
      plVar3 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar4[2];
          bVar6 = (long *)*plVar5 != plVar4;
          plVar4 = plVar5;
        } while (bVar6);
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar4 = plVar5;
    } while (plVar5 != (long *)(param_2 + 0x78));
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

