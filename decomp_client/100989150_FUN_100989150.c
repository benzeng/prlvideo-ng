
void FUN_100989150(long param_1,QDataStream *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(long *)(param_1 + 8) + 0xc) - *(int *)(*(long *)(param_1 + 8) + 8);
  QDataStream::operator<<(param_2,iVar4);
  if (0 < iVar4) {
    iVar3 = 0;
    do {
      pbVar2 = (byte *)FUN_1009891f0(param_1 + 8,iVar3);
      bVar1 = *pbVar2;
      QDataStream::operator<<(param_2,(uint)bVar1);
      *pbVar2 = bVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

