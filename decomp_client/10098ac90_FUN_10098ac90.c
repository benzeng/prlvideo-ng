
void FUN_10098ac90(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = operator_new(0x28);
  *puVar4 = *param_3;
  *(undefined ***)(puVar4 + 8) = &PTR_FUN_10227dad8;
  *(undefined ***)(puVar4 + 0x10) = &PTR_FUN_10227db30;
  piVar1 = *(int **)(param_3 + 0x18);
  *(int **)(puVar4 + 0x18) = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(puVar4 + 0x18));
      lVar2 = *(long *)(puVar4 + 0x18);
      lVar5 = (long)*(int *)(lVar2 + 8);
      lVar3 = *(long *)(param_3 + 0x18);
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar5 * 8) &&
         (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *(undefined2 *)(puVar4 + 0x20) = *(undefined2 *)(param_3 + 0x20);
  *param_2 = puVar4;
  return;
}

