
undefined8 FUN_100724f40(int *param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0xfffffffd;
  if (*param_1 == 6) {
    lVar3 = *(long *)(param_1 + 2);
    if (*(long *)(param_1 + 4) == lVar3) {
      pvVar1 = _realloc(*(void **)(param_1 + 8),*(long *)(param_1 + 4) * 8 + 0x200);
      if (pvVar1 == (void *)0x0) {
        return 0xfffffffe;
      }
      *(void **)(param_1 + 8) = pvVar1;
      *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 0x40;
      lVar3 = *(long *)(param_1 + 2);
    }
    else {
      pvVar1 = *(void **)(param_1 + 8);
    }
    *(long *)(param_1 + 2) = lVar3 + 1;
    *(undefined8 *)((long)pvVar1 + lVar3 * 8) = param_2;
    uVar2 = 0;
  }
  return uVar2;
}

