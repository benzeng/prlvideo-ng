
void FUN_100404330(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)&DAT_1011cc6a0;
  do {
    plVar1 = plVar5 + -0xb;
    if (plVar5[-9] != 0) {
      lVar2 = plVar5[-0xb];
      plVar3 = (long *)plVar5[-10];
      lVar4 = *plVar3;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar2 + 8);
      **(long **)(lVar2 + 8) = lVar4;
      plVar5[-9] = 0;
      while (plVar3 != plVar1) {
        plVar5 = (long *)plVar3[1];
        operator_delete(plVar3);
        plVar3 = plVar5;
      }
    }
    plVar5 = plVar1;
  } while (plVar1 != &DAT_1011c84a0);
  return;
}

