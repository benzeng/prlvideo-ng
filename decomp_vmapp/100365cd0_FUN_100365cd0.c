
void FUN_100365cd0(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != param_2) {
    if (lVar2 != 0) {
      piVar1 = (int *)(lVar2 + 0x20);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        plVar5 = *(long **)(lVar2 + 0x18);
        pvVar3 = (void *)*plVar5;
        if (pvVar3 != (void *)0x0) {
          (*DAT_1011c5b50)(1,(long)pvVar3 + 0x28);
          (*DAT_1011c5b50)(1,(long)pvVar3 + 0x30);
          operator_delete(pvVar3);
          plVar5 = *(long **)(lVar2 + 0x18);
        }
        lVar4 = *(long *)(lVar2 + 0x10);
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar2 + 8);
        *(long *)(*(long *)(lVar2 + 8) + 0x10) = lVar4;
        *(long *)(lVar2 + 8) = lVar2;
        *(long *)(lVar2 + 0x10) = lVar2;
        *plVar5 = lVar2;
      }
    }
    *(long *)(param_1 + 0x20) = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
    }
  }
  return;
}

