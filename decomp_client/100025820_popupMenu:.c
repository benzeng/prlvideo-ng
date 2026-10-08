
/* Function Stack Size: 0x18 bytes */

QMenu * PDKeyboardBarButtonItem::popupMenu_(ID param_1,SEL param_2,char *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QMenu *pQVar5;
  undefined8 uVar6;
  
  if (param_3 != (char *)0x0) {
    *param_3 = '\x01';
  }
  lVar1 = PDBarButtonItem::_vm;
  if (((*(long *)(param_1 + PDBarButtonItem::_vm) != 0) &&
      (*(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) != 0)) &&
     (*(long *)(PDBarButtonItem::_vm + 8 + param_1) != 0)) {
    iVar3 = FUN_10018a9d0();
    if (iVar3 == 0x30000004) {
      uVar6 = 0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        uVar6 = *(undefined8 *)(lVar1 + 8 + param_1);
      }
      cVar2 = FUN_10018dbd0(uVar6,0);
      if (cVar2 != '\0') {
        uVar4 = FUN_1006e1350();
        uVar6 = 0;
        if ((*(long *)(param_1 + lVar1) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
          uVar6 = *(undefined8 *)(lVar1 + 8 + param_1);
        }
        pQVar5 = (QMenu *)FUN_1006e13b0(uVar4,0xb,0,uVar6,4);
        return pQVar5;
      }
    }
  }
  return (QMenu *)0x0;
}

