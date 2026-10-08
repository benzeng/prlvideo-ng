
void FUN_100988790(long param_1,QDataStream *param_2)

{
  ushort uVar1;
  char *pcVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  
  lVar9 = (long)*(int *)(*(long *)(param_1 + 8) + 0xc) - (long)*(int *)(*(long *)(param_1 + 8) + 8);
  iVar5 = (int)lVar9;
  QDataStream::operator<<(param_2,iVar5);
  if (0 < iVar5) {
    puVar7 = (undefined8 *)(param_1 + 8);
    lVar6 = 0;
    do {
      puVar3 = (uint *)*puVar7;
      if (1 < *puVar3) {
        FUN_10098ad70(puVar7,puVar3[1]);
        puVar3 = (uint *)*puVar7;
      }
      pcVar2 = *(char **)(puVar3 + ((int)puVar3[2] + lVar6) * 2 + 4);
      QDataStream::operator<<(param_2,(int)*pcVar2);
      iVar5 = *(int *)(*(long *)(pcVar2 + 0x18) + 0xc) - *(int *)(*(long *)(pcVar2 + 0x18) + 8);
      QDataStream::operator<<(param_2,iVar5);
      if (0 < iVar5) {
        iVar8 = 0;
        do {
          puVar4 = (ushort *)FUN_100989830(pcVar2 + 0x18,iVar8);
          uVar1 = *puVar4;
          QDataStream::operator<<(param_2,(uint)uVar1);
          *puVar4 = uVar1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar5);
      }
      QDataStream::operator<<(param_2,*(short *)(pcVar2 + 0x20));
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar9);
  }
  return;
}

