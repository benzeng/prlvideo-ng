
void FUN_1005d2460(long param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  cVar1 = FUN_1005b7970(uVar2);
  if (cVar1 != '\0') {
    lVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    if (*(int *)(lVar3 + 0x38) == 0x80f) {
      lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      lVar3 = *(long *)(param_1 + 0x18);
      if (*(int *)(lVar4 + 0x50) != 4) {
        QStackedWidget::setCurrentIndex((int)*(undefined8 *)(lVar3 + 0x50));
        return;
      }
      goto LAB_1005d24cb;
    }
  }
  lVar3 = *(long *)(param_1 + 0x18);
LAB_1005d24cb:
                    /* WARNING: Could not recover jumptable at 0x0001005d24de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar3 + 0x68) + 0x68))(*(long **)(lVar3 + 0x68),param_2);
  return;
}

