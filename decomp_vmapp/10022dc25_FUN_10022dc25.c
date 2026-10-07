
void * FUN_10022dc25(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  void *local_30;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    *(undefined4 *)(param_1 + 0x94) = 0x10;
    *(undefined4 *)(param_1 + 0x90) = 0;
    uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x94) * 8);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    if (*(long *)(param_1 + 0x98) == 0) {
      FUN_10022d294(param_1,"allocating define\n");
      return (void *)0x0;
    }
  }
  else if (*(int *)(param_1 + 0x94) <= *(int *)(param_1 + 0x90)) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) * 2;
    lVar3 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x98),(long)*(int *)(param_1 + 0x94) * 8);
    if (lVar3 == 0) {
      FUN_10022d294(param_1,"allocating define\n");
      return (void *)0x0;
    }
    *(long *)(param_1 + 0x98) = lVar3;
  }
  local_30 = (void *)(*(code *)_xmlMalloc)(0x70);
  if (local_30 == (void *)0x0) {
    FUN_10022d294(param_1,"allocating define\n");
    local_30 = (void *)0x0;
  }
  else {
    _memset(local_30,0,0x70);
    iVar1 = *(int *)(param_1 + 0x90);
    *(void **)(*(long *)(param_1 + 0x98) + (long)iVar1 * 8) = local_30;
    *(int *)(param_1 + 0x90) = iVar1 + 1;
    *(undefined8 *)((long)local_30 + 8) = param_2;
    *(undefined2 *)((long)local_30 + 0x60) = 0xffff;
  }
  return local_30;
}

