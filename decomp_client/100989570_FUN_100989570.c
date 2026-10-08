
void FUN_100989570(long param_1,QDataStream *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(long *)(param_1 + 0x10) + 0xc) - *(int *)(*(long *)(param_1 + 0x10) + 8);
  QDataStream::operator<<(param_2,iVar4);
  if (0 < iVar4) {
    iVar3 = 0;
    do {
      puVar2 = (ushort *)FUN_100989830(param_1 + 0x10,iVar3);
      uVar1 = *puVar2;
      QDataStream::operator<<(param_2,(uint)uVar1);
      *puVar2 = uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

