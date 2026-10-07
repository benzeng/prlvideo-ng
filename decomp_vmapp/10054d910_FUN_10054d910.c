
undefined1 FUN_10054d910(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    pcVar8 = "Uncompress video memory: not processed";
  }
  else {
    plVar6 = (long *)FUN_10054c8a0(param_1,0,0);
    plVar7 = *(long **)(param_1 + 0x80);
    if ((plVar7 != plVar6) && (plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 8))();
    }
    *(long **)(param_1 + 0x80) = plVar6;
    if (plVar6 == (long *)0x0) {
      FUN_1008e3970("","TransMem",0,"Uncompress video memory: file object allocation failed");
      *(undefined1 *)(param_1 + 0x20) = 0;
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (*(char *)(lVar4 + 3) == '\x01') {
      plVar7 = operator_new(0x58);
      uVar1 = *(undefined4 *)(lVar4 + 4);
      uVar2 = *(uint *)(param_1 + 0x34);
      uVar3 = *(uint *)(param_1 + 0x50);
      uVar5 = FUN_100751d60(uVar1);
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      *plVar7 = (long)&PTR_FUN_100bceab8;
      *(undefined4 *)(plVar7 + 1) = uVar1;
      *(undefined4 *)((long)plVar7 + 0xc) = uVar5;
      *(uint *)(plVar7 + 2) = uVar3;
      *(undefined4 *)((long)plVar7 + 0x14) = 0;
      QSemaphore::QSemaphore((QSemaphore *)(plVar7 + 3),0);
      plVar7[4] = (long)(plVar7 + 4);
      plVar7[5] = (long)(plVar7 + 4);
      plVar7[10] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      *plVar7 = (long)&PTR_FUN_100bceb30;
      plVar6 = *(long **)(param_1 + 0x88);
      if ((plVar6 != plVar7) && (plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    else {
      plVar7 = operator_new(0x70);
      iVar9 = 5;
      if (*(char *)(lVar4 + 3) != '\x04') {
        iVar9 = (uint)(*(char *)(lVar4 + 3) == '\x03') * 3 + 1;
      }
      uVar1 = *(undefined4 *)(lVar4 + 4);
      uVar2 = *(uint *)(param_1 + 0x34);
      uVar3 = *(uint *)(param_1 + 0x50);
      lVar4 = *(long *)(param_2 + 0x48);
      uVar5 = FUN_100752170(iVar9);
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      *plVar7 = (long)&PTR_FUN_100bceab8;
      *(undefined4 *)(plVar7 + 1) = uVar1;
      *(undefined4 *)((long)plVar7 + 0xc) = uVar5;
      *(uint *)(plVar7 + 2) = uVar3;
      *(undefined4 *)((long)plVar7 + 0x14) = 0;
      QSemaphore::QSemaphore((QSemaphore *)(plVar7 + 3),0);
      plVar7[4] = (long)(plVar7 + 4);
      plVar7[5] = (long)(plVar7 + 4);
      plVar7[10] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      *plVar7 = (long)&PTR_FUN_100bcebb0;
      *(int *)(plVar7 + 0xb) = iVar9;
      plVar7[0xc] = lVar4;
      *(undefined4 *)(plVar7 + 0xd) = 0;
      plVar6 = *(long **)(param_1 + 0x88);
      if ((plVar6 != plVar7) && (plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    *(long **)(param_1 + 0x88) = plVar7;
    plVar6 = (long *)FUN_100546980(param_2);
    plVar7 = *(long **)(param_1 + 0x90);
    if ((plVar7 != plVar6) && (plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 8))();
    }
    *(long **)(param_1 + 0x90) = plVar6;
    pcVar8 = "Uncompress video memory...";
  }
  FUN_1008e3970("","TransMem",0,pcVar8);
  return 1;
}

