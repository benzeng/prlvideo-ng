
void FUN_1004efdf0(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = QString::indexOf(param_1,&DAT_1011cc840,0,0);
  if (0 < iVar2) {
    lVar3 = (long)iVar2 + (long)*(int *)(DAT_1011cc840 + 4);
    lVar1 = *param_1;
    iVar2 = (int)lVar3;
    if (iVar2 == *(int *)(lVar1 + 4)) {
      if (iVar2 != 0) {
        return;
      }
    }
    else if ((iVar2 != 0) && (*(short *)(lVar1 + *(long *)(lVar1 + 0x10) + lVar3 * 2) == 0x2f)) {
      return;
    }
  }
  FUN_1004efcd0(param_1);
  return;
}

