
void FUN_10038fb30(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  
  if (param_2 != 0 || param_3 != 0) {
    return;
  }
  bVar3 = 1;
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x140) + 0x28) + 9) & 0x80) == 0) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x158) + 0x28) + 9) & 0x80) == 0)) {
    bVar3 = *(byte *)(*(long *)(*(long *)(param_1 + 0x138) + 0x28) + 9) >> 7;
  }
  (**(code **)(**(long **)(param_1 + 0x108) + 0x68))(*(long **)(param_1 + 0x108),bVar3);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x28);
  iVar4 = (*(int *)(lVar2 + 0x1c) + 1) - *(int *)(lVar2 + 0x14);
  (**(code **)(**(long **)(param_1 + 0x18) + 0xe8))(*(long **)(param_1 + 0x18),iVar4);
  QWidget::setFixedSize((int)lVar1,iVar4);
  return;
}

