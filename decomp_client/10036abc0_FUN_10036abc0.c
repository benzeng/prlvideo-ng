
void FUN_10036abc0(QWidget *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 != (QWidget *)0x0) {
    if ((param_2 & 1) != 0) {
      QWidget::setWindowOpacity(DAT_100e11050);
    }
    if ((param_2 & 2) != 0) {
      WidgetUtils::setStaysOnTop(param_1,false);
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) && ((param_2 & 4) != 0)) &&
       (*(long *)(*(long *)(param_1 + 0x40) + 0x20) != 0)) {
      uVar1 = FUN_10018c280();
      lVar2 = FUN_1003192a0(uVar1,*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x38));
      if (lVar2 != 0) {
        lVar3 = FUN_100323e30(lVar2,0);
        if (lVar3 != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
          uVar1 = 0;
          if ((lVar3 != 0) && (uVar1 = 0, *(int *)(lVar3 + 4) != 0)) {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
          }
          uVar1 = FUN_10018c280(uVar1);
          uVar1 = FUN_100319d40(uVar1);
          uVar4 = FUN_100323e30(lVar2,0);
          uVar4 = FUN_100379860(uVar4);
          FUN_10035b410(uVar1,uVar4);
        }
      }
      FUN_10006bb60(*(undefined8 *)(param_1 + 0x40),0);
      return;
    }
  }
  return;
}

