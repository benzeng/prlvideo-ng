
void FUN_100ba3850(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  iVar2 = _strcmp(param_2,*(char **)(lVar1 + 0x18));
  if (iVar2 == 0) {
    pvVar3 = _realloc(*(void **)(lVar1 + 0x20),*(long *)(lVar1 + 0x28) + 1);
    if (pvVar3 != (void *)0x0) {
      *(undefined1 *)((long)pvVar3 + *(long *)(lVar1 + 0x28)) = 0;
      *(void **)(lVar1 + 0x20) = pvVar3;
      *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x28) + 1;
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  }
  return;
}

