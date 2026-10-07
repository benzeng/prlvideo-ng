
void FUN_10070c530(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  
  if (*param_2 != 0) {
    _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(param_1 + 0x10) + 0xb8));
    lVar2 = *(long *)(param_1 + 0x10);
    bVar3 = *(long *)(lVar2 + 0x130) == 0;
    if (bVar3) {
      lVar1 = *param_2;
      *(long *)(lVar2 + 0x138) = param_2[1];
      *(long *)(lVar2 + 0x130) = lVar1;
      lVar2 = *(long *)(param_1 + 0x10);
      bVar4 = *(int *)(lVar2 + 0x128) != 0;
    }
    else {
      *(long *)(*(long *)(lVar2 + 0x138) + 0x20) = *param_2;
      *(long *)(lVar2 + 0x138) = param_2[1];
      bVar4 = false;
    }
    lVar1 = *param_2;
    if (lVar1 == param_2[1]) {
      if ((*(byte *)(lVar1 + 9) & 0x40) == 0) {
        do {
        } while (*(long *)(lVar1 + 0x20) == lVar1);
      }
      else if (DAT_1011ccc18 != (code *)0x0) {
        (*DAT_1011ccc18)(1,0x32,lVar1 << 8 | 3);
        lVar2 = *(long *)(param_1 + 0x10);
      }
    }
    _pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0xb8));
    if (bVar3) {
      if (bVar4) {
        _pthread_cond_signal((pthread_cond_t *)(*(long *)(param_1 + 0x10) + 0xf8));
      }
      FUN_1007d8b20(*(long *)(param_1 + 0x10) + 0x148);
      return;
    }
  }
  return;
}

