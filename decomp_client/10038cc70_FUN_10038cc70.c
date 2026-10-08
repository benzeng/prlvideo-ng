
void FUN_10038cc70(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  QFont local_38 [16];
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  iVar3 = (*(int *)(lVar1 + 0x1c) + -0x2f) - *(int *)(lVar1 + 0x14);
  iVar2 = FUN_10038ca90();
  if (iVar3 < iVar2) {
    do {
      QFont::QFont(local_38,(QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x28)
                                     + 0x38));
      QFont::pointSize();
      QFont::setPointSize((int)local_38);
      QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x18) + 0xd8));
      QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x18) + 0xe8));
      iVar2 = FUN_10038ca90(param_1);
      QFont::~QFont(local_38);
    } while (iVar3 < iVar2);
  }
  return;
}

