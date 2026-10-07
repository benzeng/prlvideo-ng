
long FUN_1004efda0(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = QString::indexOf(param_1,&DAT_1011cc840,0,0);
  if (0 < iVar2) {
    lVar3 = (long)iVar2 + (long)*(int *)(DAT_1011cc840 + 4);
    lVar1 = *param_1;
    if ((int)lVar3 == *(int *)(lVar1 + 4)) {
      return lVar3;
    }
    if (*(short *)(lVar1 + *(long *)(lVar1 + 0x10) + lVar3 * 2) == 0x2f) {
      return lVar3;
    }
  }
  return 0;
}

