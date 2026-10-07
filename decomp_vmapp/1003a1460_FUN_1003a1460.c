
undefined4 FUN_1003a1460(long param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"// ");
  }
  switch(param_2 & 0xffff) {
  case 0x1b:
  case 0x1e:
  case 0x26:
  case 0x28:
  case 0x29:
    goto switchD_1003a14ad_caseD_1b;
  case 0x1c:
    if ((*(long *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 8) != 0)) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
    break;
  case 0x1d:
  case 0x27:
  case 0x2b:
    if (*(long *)(param_1 + 0x20) == 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
    break;
  case 0x2a:
    if (*(long *)(param_1 + 0x20) == 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
switchD_1003a14ad_caseD_1b:
    FUN_1003a0cf0(param_1,param_2,param_3,param_4);
    plVar4 = *(long **)(param_1 + 0x20);
    if (plVar4 == (long *)0x0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      goto LAB_1003a14e6;
    }
    goto LAB_1003a151c;
  }
  FUN_1003a0cf0(param_1,param_2,param_3,param_4);
LAB_1003a14e6:
  plVar4 = *(long **)(param_1 + 0x20);
  uVar3 = 0;
  if (plVar4 != (long *)0x0) {
LAB_1003a151c:
    puVar2 = *(uint **)(param_1 + 0x10);
    uVar1 = *puVar2;
    uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_3,param_4);
    if (uVar1 < *puVar2) {
      FUN_10038e8e0(puVar2,"\n");
    }
  }
  return uVar3;
}

