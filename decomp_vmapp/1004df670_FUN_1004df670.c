
bool FUN_1004df670(long param_1,QString *param_2)

{
  long lVar1;
  ulong uVar2;
  QString *pQVar3;
  bool bVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  bVar4 = uVar2 < (ulong)((long)*(int *)(lVar1 + 0xc) - (long)*(int *)(lVar1 + 8));
  if (bVar4) {
    pQVar3 = *(QString **)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + (long)(int)uVar2) * 8);
    QString::operator=(param_2,pQVar3);
    QString::operator=(param_2 + 1,pQVar3 + 1);
  }
  return bVar4;
}

