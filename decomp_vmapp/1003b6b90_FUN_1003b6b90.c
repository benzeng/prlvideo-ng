
void FUN_1003b6b90(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar1 = *(long **)(param_3 + 0x48);
  if (*(long **)(param_3 + 0x40) != plVar1) {
    plVar2 = *(long **)(param_2 + 0x60);
    if (*(long **)(param_2 + 0x58) != plVar2) {
      lVar7 = 0;
      lVar8 = 0;
      plVar5 = *(long **)(param_3 + 0x40);
      plVar6 = *(long **)(param_2 + 0x58);
      do {
        plVar9 = plVar6 + 1;
        lVar3 = *plVar6;
        if (((((lVar3 != lVar8) && (lVar4 = *plVar5, lVar4 != lVar7)) && (lVar4 != 0)) &&
            ((lVar3 != 0 && ((*(byte *)(lVar4 + 0x2d) & 6) == 0)))) &&
           ((*(byte *)(lVar3 + 0x2d) & 6) == 0)) {
          FUN_1003b6c50(param_1,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar3 + 8));
          lVar7 = lVar4;
          lVar8 = lVar3;
        }
      } while ((plVar1 != plVar5 + 1) && (plVar5 = plVar5 + 1, plVar6 = plVar9, plVar2 != plVar9));
    }
  }
  return;
}

