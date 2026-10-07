
void FUN_10070bf30(long param_1)

{
  pthread_mutex_t *ppVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  ppVar1 = (pthread_mutex_t *)(param_1 + 0x20);
  _pthread_mutex_lock(ppVar1);
  *(undefined4 *)(param_1 + 4) = 0;
  _pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x60));
  _pthread_mutex_unlock(ppVar1);
  uVar3 = *(uint *)(param_1 + 0x168);
  if (uVar3 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(param_1 + 0x170 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
        uVar3 = *(uint *)(param_1 + 0x168);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < uVar3);
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_1007dcca0(*(long *)(param_1 + 0x140),param_1 + 0x150);
  }
  FUN_1007d8af0(param_1 + 0x148);
  _pthread_cond_destroy((pthread_cond_t *)(param_1 + 0xf8));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xb8));
  _pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x60));
  _pthread_mutex_destroy(ppVar1);
  return;
}

