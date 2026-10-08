
void FUN_1004cda80(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_10044e660();
  cVar2 = FUN_1003c06b0(uVar3);
  if (cVar2 == '\0') {
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x28);
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x88);
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
    QLayout::removeItem(*(QLayoutItem **)(*(long *)(param_1 + 0x38) + 8));
    QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x38) + 8));
    QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x38) + 8));
    QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x38) + 8));
  }
  uVar3 = FUN_10044e660(param_1);
  cVar2 = FUN_1003c0650(uVar3);
  if (cVar2 != '\0') {
    return;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
  (**(code **)(*plVar1 + 0x68))(plVar1,0);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 200);
  (**(code **)(*plVar1 + 0x68))(plVar1,0);
  QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x38) + 8));
  QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x38) + 8));
  QLayout::removeItem(*(QLayoutItem **)(*(long *)(param_1 + 0x38) + 8));
  QLayout::removeItem(*(QLayoutItem **)(*(long *)(param_1 + 0x38) + 8));
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x18);
  (**(code **)(*plVar1 + 0x68))(plVar1,0);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xb8);
  (**(code **)(*plVar1 + 0x68))(plVar1,0);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x38);
  (**(code **)(*plVar1 + 0x68))(plVar1,0);
  QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x38) + 8));
  QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x38) + 8));
  QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x38) + 8));
  QLayout::removeItem(*(QLayoutItem **)(*(long *)(param_1 + 0x38) + 8));
  QLayout::removeItem(*(QLayoutItem **)(*(long *)(param_1 + 0x38) + 8));
  QLayout::removeItem(*(QLayoutItem **)(*(long *)(param_1 + 0x38) + 8));
  return;
}

