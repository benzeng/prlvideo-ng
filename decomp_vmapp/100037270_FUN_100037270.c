
int FUN_100037270(long *param_1,QString *param_2)

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_100037e60(param_1);
    puVar2 = (uint *)*param_1;
  }
  lVar3 = *(long *)(puVar2 + 4);
  iVar6 = 0;
  do {
    if (lVar3 == 0) {
      return iVar6;
    }
    lVar5 = 0;
    do {
      while (lVar4 = lVar3, cVar1 = operator<((QString *)(lVar4 + 0x18),param_2), cVar1 == '\0') {
        lVar3 = *(long *)(lVar4 + 8);
        lVar5 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_1000372f8;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar5;
    if (lVar5 == 0) {
      return iVar6;
    }
LAB_1000372f8:
    cVar1 = operator<(param_2,(QString *)(lVar4 + 0x18));
    if (cVar1 != '\0') {
      return iVar6;
    }
    FUN_100037f00(*param_1,lVar4);
    iVar6 = iVar6 + 1;
    lVar3 = *(long *)(*param_1 + 0x10);
  } while( true );
}

