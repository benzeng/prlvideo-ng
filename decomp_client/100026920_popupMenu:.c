
/* Function Stack Size: 0x18 bytes */

QMenu * PDToolsBarButtonItem::popupMenu_(ID param_1,SEL param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QMenu *this;
  
  if (param_3 != (char *)0x0) {
    *param_3 = '\x01';
  }
  lVar2 = PDBarButtonItem::_vm;
  this = (QMenu *)0x0;
  if ((*(uint *)(param_1 + _toolsState) | 2) != 2) {
    this = (QMenu *)0x0;
    if ((*(long *)(param_1 + PDBarButtonItem::_vm) != 0) &&
       (this = (QMenu *)0x0, *(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) != 0)) {
      this = (QMenu *)0x0;
      if (*(long *)(PDBarButtonItem::_vm + 8 + param_1) != 0) {
        this = (QMenu *)0x0;
        cVar3 = FUN_10018dbd0();
        if (cVar3 != '\0') {
          this = operator_new(0x30);
          QMenu::QMenu(this,(QWidget *)0x0);
          uVar4 = FUN_1006915d0();
          lVar1 = *(long *)(param_1 + lVar2);
          uVar5 = 0;
          if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
            uVar5 = *(undefined8 *)(lVar2 + 8 + param_1);
          }
          FUN_100691620(uVar4,0x3b,uVar5);
          QWidget::addAction((QAction *)this);
        }
      }
    }
  }
  return this;
}

