
void FUN_10070cbd0(long param_1)

{
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_1008e3bc0();
  FUN_1008e3970("","AbstractFile",0,"[%p] AIO thread started with id 0x%X",param_1,uVar3);
  _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(param_1 + 0x10) + 0x20));
  while( true ) {
    while (lVar2 = *(long *)(param_1 + 0x10), *(long *)(lVar2 + 0x90) != 0) {
      FUN_10070c9f0(param_1);
    }
    if (*(int *)(lVar2 + 4) == 0) break;
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    _pthread_cond_wait((pthread_cond_t *)(lVar2 + 0x60),(pthread_mutex_t *)(lVar2 + 0x20));
    piVar1 = (int *)(*(long *)(param_1 + 0x10) + 8);
    *piVar1 = *piVar1 + -1;
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x20));
  return;
}

