
void FUN_100b13950(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  void *pvVar6;
  undefined8 local_30;
  
  pvVar6 = (void *)param_1[0x3020];
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if ((*(byte *)(*(long *)(*param_1 + -0x18) + 0x18 + (long)param_1) & 2) != 0) {
    lVar1 = param_1[4];
    local_30 = *(undefined8 *)(lVar1 + 0x84);
    iVar5 = FUN_100b2f760(pvVar6,&local_30);
    if (iVar5 < 0) {
      FUN_100df99c0("","dimg",0,"Failed to save Format Extension: 0x%x",iVar5);
    }
    *(undefined8 *)(lVar1 + 0x84) = local_30;
    pvVar6 = (void *)param_1[0x3020];
    if (pvVar6 == (void *)0x0) goto LAB_100b13a39;
  }
  if (*(long *)((long)pvVar6 + 0x18) != 0) {
    lVar1 = *(long *)((long)pvVar6 + 8);
    plVar2 = *(long **)((long)pvVar6 + 0x10);
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    *(undefined8 *)((long)pvVar6 + 0x18) = 0;
    while (plVar2 != (long *)((long)pvVar6 + 8)) {
      plVar4 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  operator_delete(pvVar6);
LAB_100b13a39:
  param_1[0x3020] = 0;
  return;
}

