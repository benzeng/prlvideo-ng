
long FUN_1008d7570(char *param_1,int param_2,long *param_3,int *param_4)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if (param_2 == -1) {
    sVar2 = _strlen(param_1);
    param_2 = (int)sVar2;
  }
  lVar1 = (long)param_2 * 2;
  iVar5 = (uint)lVar1 + 2;
  lVar3 = FUN_10081ddd0(iVar5,"p12_utl.c",0x4a);
  lVar4 = 0;
  if (lVar3 != 0) {
    if (0 < param_2) {
      lVar4 = 0;
      do {
        *(undefined1 *)(lVar3 + lVar4) = 0;
        *(char *)(lVar3 + 1 + lVar4) = param_1[(int)lVar4 >> 1];
        lVar4 = lVar4 + 2;
      } while (lVar4 < lVar1);
    }
    *(undefined1 *)(lVar3 + lVar1) = 0;
    *(undefined1 *)(lVar3 + (int)((uint)lVar1 | 1)) = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar5;
    }
    lVar4 = lVar3;
    if (param_3 != (long *)0x0) {
      *param_3 = lVar3;
    }
  }
  return lVar4;
}

