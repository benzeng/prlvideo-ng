
int FUN_100b137c0(long *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  lVar1 = param_1[4];
  puVar6 = operator_new(0x30,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar6 == (undefined8 *)0x0) {
    param_1[0x3020] = 0;
    iVar5 = -0x7ffffffe;
  }
  else {
    *puVar6 = param_1;
    puVar6[1] = puVar6 + 1;
    puVar6[2] = puVar6 + 1;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    param_1[0x3020] = (long)puVar6;
    iVar5 = 0;
    if ((*(int *)(lVar1 + 0x78) == 0x312e3276) && (*(long *)(lVar1 + 0x84) != 0)) {
      iVar5 = FUN_100b2f290(puVar6);
      if (iVar5 < 0) {
        pvVar3 = (void *)param_1[0x3020];
        if (pvVar3 != (void *)0x0) {
          if (*(long *)((long)pvVar3 + 0x18) != 0) {
            lVar1 = *(long *)((long)pvVar3 + 8);
            plVar7 = *(long **)((long)pvVar3 + 0x10);
            lVar2 = *plVar7;
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
            **(long **)(lVar1 + 8) = lVar2;
            *(undefined8 *)((long)pvVar3 + 0x18) = 0;
            while (plVar7 != (long *)((long)pvVar3 + 8)) {
              plVar4 = (long *)plVar7[1];
              operator_delete(plVar7);
              plVar7 = plVar4;
            }
          }
          operator_delete(pvVar3);
        }
        param_1[0x3020] = 0;
      }
      else {
        lVar1 = *(long *)(lVar1 + 0x84);
        lVar2 = *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
        plVar7 = operator_new(0x18);
        plVar7[2] = lVar2 * lVar1;
        plVar7[1] = (long)(param_1 + 0x301c);
        lVar1 = param_1[0x301c];
        *plVar7 = lVar1;
        *(long **)(lVar1 + 8) = plVar7;
        param_1[0x301c] = (long)plVar7;
        param_1[0x301e] = param_1[0x301e] + 1;
        iVar5 = 0;
      }
    }
  }
  return iVar5;
}

