
QDataStream * FUN_1006b2ab0(QDataStream *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  QDataStream::operator<<(param_1,*(int *)(*param_2 + 0xc) - *(int *)(*param_2 + 8));
  lVar1 = *param_2;
  uVar2 = (ulong)*(uint *)(lVar1 + 8);
  lVar3 = 0;
  if ((int)*(uint *)(lVar1 + 8) < *(int *)(lVar1 + 0xc)) {
    do {
      lVar1 = *(long *)(lVar1 + 0x10 + ((int)uVar2 + lVar3) * 8);
      QDataStream::operator<<(param_1,*(bool *)lVar1);
      operator<<(param_1,(QKeySequence *)(lVar1 + 8));
      lVar3 = lVar3 + 1;
      lVar1 = *param_2;
      uVar2 = (ulong)*(int *)(lVar1 + 8);
    } while (lVar3 < (long)((long)*(int *)(lVar1 + 0xc) - uVar2));
  }
  return param_1;
}

