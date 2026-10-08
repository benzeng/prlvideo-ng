
/* Function Stack Size: 0x10 bytes */

char CVmConsoleWindowToolbarController::isDevicesHidden(ID param_1,SEL param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = _vm;
  bVar3 = 1;
  if (((*(long *)(param_1 + _vm) != 0) && (*(int *)(*(long *)(param_1 + _vm) + 4) != 0)) &&
     (*(long *)(_vm + 8 + param_1) != 0)) {
    uVar5 = FUN_10018c280();
    lVar6 = FUN_100319960(uVar5);
    if (lVar6 != 0) {
      uVar5 = 0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        uVar5 = *(undefined8 *)(lVar1 + 8 + param_1);
      }
      uVar5 = FUN_10018c280(uVar5);
      uVar5 = FUN_100319960(uVar5);
      iVar4 = FUN_100325aa0(uVar5);
      if (iVar4 != 4) {
        uVar5 = 0;
        if ((*(long *)(param_1 + lVar1) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
          uVar5 = *(undefined8 *)(lVar1 + 8 + param_1);
        }
        cVar2 = FUN_10018ffc0(uVar5);
        if (cVar2 == '\0') {
          uVar5 = 0;
          if ((*(long *)(param_1 + lVar1) != 0) &&
             (uVar5 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
            uVar5 = *(undefined8 *)(lVar1 + 8 + param_1);
          }
          cVar2 = FUN_10018ff50(uVar5);
          if (cVar2 == '\0') {
            uVar5 = 0;
            if ((*(long *)(param_1 + lVar1) != 0) &&
               (uVar5 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
              uVar5 = *(undefined8 *)(lVar1 + 8 + param_1);
            }
            bVar3 = FUN_10011a720(uVar5);
            bVar3 = bVar3 ^ 1;
          }
        }
      }
    }
  }
  return bVar3;
}

