
void FUN_10037db50(QWidget *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  QMenu *this;
  undefined8 uVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  uVar3 = 0;
  if ((lVar1 != 0) && (uVar3 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
  }
  uVar3 = FUN_100323e00(uVar3);
  uVar3 = FUN_100319390(uVar3);
  this = operator_new(0x30);
  QMenu::QMenu(this,(QWidget *)0x0);
  uVar4 = FUN_1006e1350();
  cVar2 = FUN_1006e5990(uVar4,this,uVar3,1);
  if (cVar2 != '\0') {
    MacUtils::showNativeContextMenu(this,param_1,(QPoint *)(param_2 + 0x20));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010037dbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this->field0_0x0[4])(this);
  return;
}

