
void FUN_10035d2c0(long param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  
  lVar7 = *(long *)(param_2 + 0x20);
  if (lVar7 != 0) {
    do {
      plVar4 = *(long **)(lVar7 + 8);
      lVar1 = *plVar4;
      iVar5 = *(int *)(lVar7 + 0x20) + -1;
      *(int *)(lVar7 + 0x20) = iVar5;
      if (iVar5 == 0) {
        plVar6 = *(long **)(lVar7 + 0x18);
        pvVar2 = (void *)*plVar6;
        if (pvVar2 != (void *)0x0) {
          (*DAT_1011c5b50)(1,(long)pvVar2 + 0x28);
          (*DAT_1011c5b50)(1,(long)pvVar2 + 0x30);
          operator_delete(pvVar2);
          plVar4 = *(long **)(lVar7 + 8);
          plVar6 = *(long **)(lVar7 + 0x18);
        }
        lVar3 = *(long *)(lVar7 + 0x10);
        *(long **)(lVar3 + 8) = plVar4;
        *(long *)(*(long *)(lVar7 + 8) + 0x10) = lVar3;
        *(long *)(lVar7 + 8) = lVar7;
        *(long *)(lVar7 + 0x10) = lVar7;
        *plVar6 = lVar7;
      }
    } while ((lVar1 != 0) && (bVar8 = lVar7 != *(long *)(param_2 + 0x28), lVar7 = lVar1, bVar8));
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  lVar7 = param_2 + 0x38;
  lVar1 = *(long *)(param_2 + 0x48);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x40);
  *(long *)(*(long *)(param_2 + 0x40) + 0x10) = lVar1;
  *(long *)(param_2 + 0x40) = lVar7;
  *(long *)(param_2 + 0x48) = param_1 + 0x70;
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x78);
  *(long *)(*(long *)(param_1 + 0x78) + 0x10) = lVar7;
  *(long *)(param_1 + 0x78) = lVar7;
  return;
}

