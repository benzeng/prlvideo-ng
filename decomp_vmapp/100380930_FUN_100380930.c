
void FUN_100380930(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  char cVar3;
  
  *param_1 = &PTR_FUN_100bbcf70;
  cVar3 = (*DAT_1011c63b8)(*(undefined4 *)((long)param_1 + 0xc));
  if (cVar3 == '\x01') {
    (*DAT_1011c5b80)(1,(long)param_1 + 0xc);
  }
  pvVar1 = (void *)param_1[0x11];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x12];
    if (pvVar2 != pvVar1) {
      param_1[0x12] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

