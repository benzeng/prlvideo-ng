
undefined8 * FUN_10022e8ad(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *local_40;
  undefined8 *local_28;
  
  if (param_2 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
  }
  else {
    if ((*(long *)(param_1 + 0x70) == 0) || (**(int **)(param_1 + 0x70) < 1)) {
      local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x38);
      if (local_28 == (undefined8 *)0x0) {
        FUN_10022d41d(param_1,"allocating states\n");
        return (undefined8 *)0x0;
      }
      puVar4 = local_28;
      for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      **(int **)(param_1 + 0x70) = **(int **)(param_1 + 0x70) + -1;
      local_28 = *(undefined8 **)
                  (*(long *)(*(long *)(param_1 + 0x70) + 8) + (long)**(int **)(param_1 + 0x70) * 8);
    }
    uVar1 = local_28[6];
    *local_28 = *param_2;
    local_28[1] = param_2[1];
    local_28[2] = param_2[2];
    local_28[3] = param_2[3];
    local_28[4] = param_2[4];
    local_28[5] = param_2[5];
    local_28[6] = param_2[6];
    local_28[6] = uVar1;
    *(undefined4 *)((long)local_28 + 0x14) = *(undefined4 *)((long)local_28 + 0x14);
    if (0 < *(int *)(param_2 + 2)) {
      if (local_28[6] == 0) {
        *(undefined4 *)((long)local_28 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
        uVar1 = (*(code *)_xmlMalloc)((long)*(int *)((long)local_28 + 0x14) * 8);
        local_28[6] = uVar1;
        if (local_28[6] == 0) {
          FUN_10022d41d(param_1,"allocating states\n");
          *(undefined4 *)(local_28 + 2) = 0;
          return local_28;
        }
      }
      else if (*(int *)((long)local_28 + 0x14) < *(int *)(param_2 + 2)) {
        lVar2 = (*(code *)_xmlRealloc)(local_28[6],(long)*(int *)((long)param_2 + 0x14) * 8);
        if (lVar2 == 0) {
          FUN_10022d41d(param_1,"allocating states\n");
          *(undefined4 *)(local_28 + 2) = 0;
          return local_28;
        }
        *(undefined4 *)((long)local_28 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
        local_28[6] = lVar2;
      }
      puVar3 = (undefined1 *)param_2[6];
      puVar5 = (undefined1 *)local_28[6];
      for (lVar2 = (long)*(int *)(param_2 + 2) * 8; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    local_40 = local_28;
  }
  return local_40;
}

