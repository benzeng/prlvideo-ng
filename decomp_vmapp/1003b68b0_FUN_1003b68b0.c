
void FUN_1003b68b0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  lVar7 = *(long *)(param_1 + 0x1450);
  if ((lVar7 != 0) && (lVar1 = *(long *)(param_1 + 0x1458), lVar1 != 0)) {
    plVar8 = *(long **)(lVar1 + 0x48);
    if (*(long **)(lVar1 + 0x40) != plVar8) {
      plVar2 = *(long **)(lVar7 + 0x60);
      if (*(long **)(lVar7 + 0x58) != plVar2) {
        lVar6 = 0;
        lVar9 = 0;
        plVar3 = *(long **)(lVar7 + 0x58);
        plVar4 = *(long **)(lVar1 + 0x40);
        do {
          plVar10 = plVar4 + 1;
          lVar7 = *plVar3;
          if (((((lVar7 != lVar9) && (lVar1 = *plVar4, lVar1 != lVar6)) && (lVar1 != 0)) &&
              ((lVar7 != 0 && ((*(byte *)(lVar1 + 0x2d) & 6) == 0)))) &&
             ((*(byte *)(lVar7 + 0x2d) & 6) == 0)) {
            FUN_1003b6c50(param_1,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar7 + 8));
            lVar6 = lVar1;
            lVar9 = lVar7;
          }
        } while ((plVar2 != plVar3 + 1) &&
                (plVar3 = plVar3 + 1, plVar4 = plVar10, plVar8 != plVar10));
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x1458);
  if ((lVar7 != 0) && (lVar1 = *(long *)(param_1 + 0x1460), lVar1 != 0)) {
    plVar8 = *(long **)(lVar1 + 0x48);
    if (*(long **)(lVar1 + 0x40) != plVar8) {
      plVar2 = *(long **)(lVar7 + 0x60);
      if (*(long **)(lVar7 + 0x58) != plVar2) {
        lVar6 = 0;
        lVar9 = 0;
        plVar3 = *(long **)(lVar7 + 0x58);
        plVar4 = *(long **)(lVar1 + 0x40);
        do {
          plVar10 = plVar4 + 1;
          lVar7 = *plVar3;
          if ((((lVar7 != lVar9) && (lVar1 = *plVar4, lVar1 != lVar6)) && (lVar1 != 0)) &&
             (((lVar7 != 0 && ((*(byte *)(lVar1 + 0x2d) & 6) == 0)) &&
              ((*(byte *)(lVar7 + 0x2d) & 6) == 0)))) {
            FUN_1003b6c50(param_1,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar7 + 8));
            lVar6 = lVar1;
            lVar9 = lVar7;
          }
        } while ((plVar2 != plVar3 + 1) &&
                (plVar3 = plVar3 + 1, plVar4 = plVar10, plVar8 != plVar10));
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x1450);
  if (lVar7 != 0) {
    if ((*(long *)(param_1 + 0x1458) == 0) && (lVar1 = *(long *)(param_1 + 0x1460), lVar1 != 0)) {
      plVar8 = *(long **)(lVar1 + 0x48);
      if (*(long **)(lVar1 + 0x40) != plVar8) {
        plVar2 = *(long **)(lVar7 + 0x60);
        if (*(long **)(lVar7 + 0x58) != plVar2) {
          lVar6 = 0;
          lVar9 = 0;
          plVar3 = *(long **)(lVar7 + 0x58);
          plVar4 = *(long **)(lVar1 + 0x40);
          do {
            plVar10 = plVar4 + 1;
            lVar7 = *plVar3;
            if ((((lVar7 != lVar9) && (lVar1 = *plVar4, lVar1 != lVar6)) && (lVar1 != 0)) &&
               (((lVar7 != 0 && ((*(byte *)(lVar1 + 0x2d) & 6) == 0)) &&
                ((*(byte *)(lVar7 + 0x2d) & 6) == 0)))) {
              FUN_1003b6c50(param_1,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar7 + 8));
              lVar6 = lVar1;
              lVar9 = lVar7;
            }
          } while ((plVar2 != plVar3 + 1) &&
                  (plVar3 = plVar3 + 1, plVar4 = plVar10, plVar8 != plVar10));
          lVar7 = *(long *)(param_1 + 0x1450);
          if (lVar7 == 0) goto LAB_1003b6b14;
        }
      }
    }
    FUN_1003c5360(param_1,**(undefined8 **)(lVar7 + 0x138));
  }
LAB_1003b6b14:
  if (*(long *)(param_1 + 0x1458) != 0) {
    FUN_1003c5360(param_1,**(undefined8 **)(*(long *)(param_1 + 0x1458) + 0x138));
  }
  if (*(long *)(param_1 + 0x1460) != 0) {
    FUN_1003c5360(param_1,**(undefined8 **)(*(long *)(param_1 + 0x1460) + 0x138));
  }
  plVar8 = *(long **)(param_1 + 0x1410);
  while (lVar7 = *plVar8, lVar7 != 0) {
    uVar5 = FUN_1003abbe0(lVar7);
    *(undefined1 *)(lVar7 + 0x48) = uVar5;
    plVar8 = *(long **)(lVar7 + 0x20);
  }
  return;
}

