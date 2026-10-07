
undefined1 FUN_10054d6f0(long param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 uVar8;
  int iVar9;
  
  plVar5 = (long *)FUN_10054c8a0(param_1,1,0);
  plVar6 = *(long **)(param_1 + 0x80);
  if ((plVar6 != plVar5) && (plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 8))();
  }
  *(long **)(param_1 + 0x80) = plVar5;
  if (plVar5 == (long *)0x0) {
    uVar8 = 0;
    FUN_1008e3970("","TransMem",0,"Uncompress main memory: file object allocation failed");
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    plVar6 = operator_new(0x70);
    cVar1 = *(char *)(*(long *)(param_1 + 0x28) + 2);
    iVar9 = 5;
    if (cVar1 != '\x04') {
      iVar9 = (uint)(cVar1 == '\x03') * 3 + 1;
    }
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 4);
    uVar3 = *(uint *)(param_1 + 0x50);
    if (*(uint *)(param_1 + 0x30) < *(uint *)(param_1 + 0x50)) {
      uVar3 = *(uint *)(param_1 + 0x30);
    }
    lVar7 = 0;
    if ((*(long *)(param_2 + 0x30) != 0) &&
       (lVar7 = 0, *(char *)(*(long *)(param_2 + 0x30) + 0x18) != '\0')) {
      lVar7 = *(long *)(param_2 + 0x40);
    }
    uVar4 = FUN_100752170(iVar9);
    *plVar6 = (long)&PTR_FUN_100bceab8;
    *(undefined4 *)(plVar6 + 1) = uVar2;
    *(undefined4 *)((long)plVar6 + 0xc) = uVar4;
    *(uint *)(plVar6 + 2) = uVar3;
    *(undefined4 *)((long)plVar6 + 0x14) = 0;
    QSemaphore::QSemaphore((QSemaphore *)(plVar6 + 3),0);
    plVar6[4] = (long)(plVar6 + 4);
    plVar6[5] = (long)(plVar6 + 4);
    plVar6[10] = 0;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[7] = 0;
    plVar6[6] = 0;
    *plVar6 = (long)&PTR_FUN_100bcebb0;
    *(int *)(plVar6 + 0xb) = iVar9;
    plVar6[0xc] = lVar7;
    *(undefined4 *)(plVar6 + 0xd) = 0;
    plVar5 = *(long **)(param_1 + 0x88);
    if ((plVar5 != plVar6) && (plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 8))();
    }
    *(long **)(param_1 + 0x88) = plVar6;
    plVar5 = (long *)FUN_100546920(param_2);
    plVar6 = *(long **)(param_1 + 0x90);
    if ((plVar6 != plVar5) && (plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 8))();
    }
    *(long **)(param_1 + 0x90) = plVar5;
    FUN_1008e3970("","TransMem",0,"Uncompress main memory...");
    uVar8 = 1;
  }
  return uVar8;
}

