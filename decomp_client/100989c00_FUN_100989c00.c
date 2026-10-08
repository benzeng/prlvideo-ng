
void FUN_100989c00(long param_1,QDataStream *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(long *)(param_1 + 0x10) + 0xc) - *(int *)(*(long *)(param_1 + 0x10) + 8);
  QDataStream::operator<<(param_2,iVar4);
  if (0 < iVar4) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_100989eb0(param_1 + 0x10,iVar3);
      iVar1 = *piVar2;
      QDataStream::operator<<(param_2,iVar1);
      *piVar2 = iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

