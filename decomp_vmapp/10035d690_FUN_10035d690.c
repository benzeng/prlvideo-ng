
void FUN_10035d690(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int local_40;
  int local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int **)param_1[9] != (int *)0x0) {
    piVar4 = *(int **)param_1[9];
    do {
      piVar1 = (int *)**(undefined8 **)(piVar4 + 0x10);
      iVar3 = FUN_10035d3e0();
      if (iVar3 != 2) {
        local_40 = piVar4[1];
        local_3c = piVar4[2];
        iVar3 = 4;
        if (*piVar4 != 0x12) {
          iVar3 = 8;
        }
        if (*(uint *)(*(long *)(piVar4 + 0xc) + 8) <= (uint)(*(int *)(param_2 + 0xc) - iVar3)) {
          FUN_1002fcd60(*param_1,&local_40,
                        *(uint *)(*(long *)(piVar4 + 0xc) + 8) + **(int **)(param_2 + 0x28));
          lVar2 = *(long *)(piVar4 + 0x12);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(piVar4 + 0x10);
          *(long *)(*(long *)(piVar4 + 0x10) + 0x10) = lVar2;
          *(int **)(piVar4 + 0x10) = piVar4 + 0xe;
          *(int **)(piVar4 + 0x12) = piVar4 + 0xe;
        }
      }
      piVar4 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

