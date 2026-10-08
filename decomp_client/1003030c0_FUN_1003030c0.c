
void FUN_1003030c0(long param_1,QString *param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined *local_48;
  int *local_40;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_1021e15e8;
  if (param_3 != 0) {
    return;
  }
  local_48 = PTR_shared_null_1021e15e8;
  lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  lVar8 = 0;
  if (lVar9 == 0) {
LAB_100303146:
    lVar5 = 0;
  }
  else {
    do {
      while (lVar5 = lVar9, cVar4 = operator<((QString *)(lVar5 + 0x18),param_2), cVar4 == '\0') {
        lVar9 = *(long *)(lVar5 + 8);
        lVar8 = lVar5;
        if (*(long *)(lVar5 + 8) == 0) goto LAB_100303136;
      }
      lVar9 = *(long *)(lVar5 + 0x10);
    } while (*(long *)(lVar5 + 0x10) != 0);
    lVar5 = lVar8;
    if (lVar8 == 0) goto LAB_100303146;
LAB_100303136:
    cVar4 = operator<(param_2,(QString *)(lVar5 + 0x18));
    if (cVar4 != '\0') goto LAB_100303146;
  }
  ppuVar7 = &local_48;
  if (lVar5 != 0) {
    ppuVar7 = (undefined **)(lVar5 + 0x20);
  }
  FUN_100303350(&local_40,ppuVar7);
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10030318b;
    }
    FUN_1003034e0(&local_48,PTR_shared_null_1021e15e8);
  }
LAB_10030318b:
  iVar1 = local_40[2];
  if (iVar1 != local_40[3]) {
    plVar6 = (long *)(local_40 + (long)iVar1 * 2 + 4);
    lVar9 = (long)local_40[3] * 8 + (long)iVar1 * -8;
    do {
      lVar8 = *(long *)*plVar6;
      if (((lVar8 != 0) && (*(int *)(lVar8 + 4) != 0)) &&
         (plVar2 = (long *)((long *)*plVar6)[1], plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x20))();
      }
      plVar6 = plVar6 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  FUN_1003032a0(param_1 + 0x28,param_2);
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_1003034e0(&local_40,local_40);
  }
  return;
}

