
void FUN_100a6bdb0(long param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  QDataStream::writeRawData(param_2,iVar4);
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      iVar4 = iVar4 + 0x88;
    }
    else {
      iVar4 = iVar4 + 0x80 + uVar1 * 8;
    }
    QDataStream::writeRawData(param_2,iVar4);
    if (*(int *)(param_1 + 0x4c) != 0) {
      lVar3 = 0;
      do {
        lVar2 = *(long *)(param_1 + 0x80 + lVar3 * 8);
        iVar4 = 0;
        if (lVar2 != 0) {
          iVar4 = (int)*(undefined8 *)(lVar2 + 0x10);
        }
        QDataStream::writeRawData(param_2,iVar4);
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(param_1 + 0x4c));
    }
  }
  return;
}

