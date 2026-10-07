
bool FUN_1004f1a80(long *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  cVar2 = QString::endsWith(param_1,&DAT_1011cc838,0);
  if (cVar2 == '\0') {
    return false;
  }
  iVar3 = QString::indexOf(param_1,&DAT_1011cc840,0,0);
  if (iVar3 < 1) {
LAB_1004f1ae9:
    lVar4 = FUN_1004efcd0(param_1);
  }
  else {
    lVar4 = (long)iVar3 + (long)*(int *)(DAT_1011cc840 + 4);
    lVar1 = *param_1;
    iVar3 = (int)lVar4;
    if (iVar3 == *(int *)(lVar1 + 4)) {
      if (iVar3 != 0) goto LAB_1004f1afb;
      goto LAB_1004f1ae9;
    }
    if ((iVar3 == 0) || (*(short *)(lVar1 + *(long *)(lVar1 + 0x10) + lVar4 * 2) != 0x2f))
    goto LAB_1004f1ae9;
  }
  if ((int)lVar4 == 0) {
    return false;
  }
  iVar3 = *(int *)(*param_1 + 4);
LAB_1004f1afb:
  return (int)lVar4 + *(int *)(DAT_1011cc838 + 4) == iVar3;
}

