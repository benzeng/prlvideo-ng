
void FUN_1008bd910(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    iVar3 = FUN_100885600(uVar1);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        lVar5 = FUN_100885620(uVar1,iVar3);
        if ((*(long *)(lVar5 + 8) != 0) &&
           (pcVar2 = *(code **)(*(long *)(lVar5 + 8) + 0x20), pcVar2 != (code *)0x0)) {
          (*pcVar2)(lVar5);
        }
        if (lVar5 != 0) {
          if ((*(long *)(lVar5 + 8) != 0) &&
             (pcVar2 = *(code **)(*(long *)(lVar5 + 8) + 0x10), pcVar2 != (code *)0x0)) {
            (*pcVar2)(lVar5);
          }
          FUN_10081e1a0(lVar5);
        }
        iVar3 = iVar3 + 1;
        iVar4 = FUN_100885600(uVar1);
      } while (iVar3 < iVar4);
    }
    FUN_100884dd0(uVar1);
    FUN_100885590(*(undefined8 *)(param_1 + 8),FUN_1008bd9f0);
    FUN_10081fa50(4,param_1,param_1 + 0x78);
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_1008c0f90();
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

