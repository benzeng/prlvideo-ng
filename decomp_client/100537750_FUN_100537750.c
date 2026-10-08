
void FUN_100537750(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_1001b55c0(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78));
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  FUN_1001b5630(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78));
  QTreeWidget::clear();
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  FUN_1001b4530(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78));
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
    uVar2 = 0;
    if ((lVar1 != 0) && (uVar2 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    }
    FUN_100534ab0(*(long *)(param_1 + 0x50),uVar2,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78))
    ;
    return;
  }
  return;
}

