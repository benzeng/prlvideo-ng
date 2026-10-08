
void FUN_1009d8450(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  bool bVar6;
  undefined1 local_1038 [4096];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar3;
  if ((param_4 != 0) && (*(long *)(param_1 + 0x470) != 0)) {
    do {
      uVar5 = param_4;
      if (0x1000 < param_4) {
        uVar5 = 0x1000;
      }
      cVar1 = FUN_1009d96a0(param_2,local_1038,uVar5,param_3);
      if (cVar1 == '\0') break;
      pcVar2 = *(code **)(param_1 + 0x470);
      plVar4 = (long *)(*(long *)(param_1 + 0x478) + param_1);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = *(code **)(pcVar2 + *plVar4 + -1);
      }
      (*pcVar2)(plVar4,local_1038,uVar5);
      bVar6 = 0x1000 < param_4;
      if (param_4 == 0x1000) break;
      param_4 = param_4 - 0x1000;
      param_3 = param_3 + uVar5;
    } while (bVar6);
    lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  if (lVar3 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

