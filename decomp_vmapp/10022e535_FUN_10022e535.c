
long * FUN_10022e535(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  long local_d8 [21];
  long *local_30;
  long local_28;
  int local_1c;
  xmlNodePtr local_18;
  long local_10;
  
  local_1c = 0;
  local_18 = (xmlNodePtr)0x0;
  if (param_2 == 0) {
    local_18 = _xmlDocGetRootElement(*(xmlDocPtr *)(param_1 + 0x30));
    if (local_18 == (xmlNodePtr)0x0) {
      return (long *)0x0;
    }
  }
  else {
    for (local_28 = *(long *)(param_2 + 0x58); local_28 != 0; local_28 = *(long *)(local_28 + 0x30))
    {
      if (local_1c < 0x14) {
        local_d8[local_1c] = local_28;
        local_1c = local_1c + 1;
      }
      else {
        local_1c = local_1c + 1;
      }
    }
  }
  if ((*(long *)(param_1 + 0x70) == 0) || (**(int **)(param_1 + 0x70) < 1)) {
    local_30 = (long *)(*(code *)_xmlMalloc)(0x38);
    if (local_30 == (long *)0x0) {
      FUN_10022d41d(param_1,"allocating states\n");
      return (long *)0x0;
    }
    plVar2 = local_30;
    for (lVar1 = 7; lVar1 != 0; lVar1 = lVar1 + -1) {
      *plVar2 = 0;
      plVar2 = plVar2 + 1;
    }
  }
  else {
    **(int **)(param_1 + 0x70) = **(int **)(param_1 + 0x70) + -1;
    local_30 = *(long **)(*(long *)(*(long *)(param_1 + 0x70) + 8) +
                         (long)**(int **)(param_1 + 0x70) * 8);
  }
  local_30[4] = 0;
  local_30[5] = 0;
  if (param_2 == 0) {
    *local_30 = *(long *)(param_1 + 0x30);
    local_30[1] = (long)local_18;
  }
  else {
    *local_30 = param_2;
    local_30[1] = *(long *)(param_2 + 0x18);
  }
  *(undefined4 *)(local_30 + 2) = 0;
  if (0 < local_1c) {
    if (local_30[6] == 0) {
      if (local_1c < 4) {
        *(undefined4 *)((long)local_30 + 0x14) = 4;
      }
      else {
        *(int *)((long)local_30 + 0x14) = local_1c;
      }
      lVar1 = (*(code *)_xmlMalloc)((long)*(int *)((long)local_30 + 0x14) * 8);
      local_30[6] = lVar1;
      if (local_30[6] == 0) {
        FUN_10022d41d(param_1,"allocating states\n");
        return local_30;
      }
    }
    else if (*(int *)((long)local_30 + 0x14) < local_1c) {
      local_10 = (*(code *)_xmlRealloc)(local_30[6],(long)local_1c * 8);
      if (local_10 == 0) {
        FUN_10022d41d(param_1,"allocating states\n");
        return local_30;
      }
      local_30[6] = local_10;
      *(int *)((long)local_30 + 0x14) = local_1c;
    }
    *(int *)(local_30 + 2) = local_1c;
    if (local_1c < 0x14) {
      plVar2 = local_d8;
      puVar3 = (undefined1 *)local_30[6];
      for (lVar1 = (long)local_1c * 8; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = (char)*plVar2;
        plVar2 = (long *)((long)plVar2 + 1);
        puVar3 = puVar3 + 1;
      }
    }
    else {
      local_28 = *(long *)(param_2 + 0x58);
      local_1c = 0;
      for (; local_28 != 0; local_28 = *(long *)(local_28 + 0x30)) {
        *(long *)(local_30[6] + (long)local_1c * 8) = local_28;
        local_1c = local_1c + 1;
      }
    }
  }
  *(int *)(local_30 + 3) = (int)local_30[2];
  return local_30;
}

