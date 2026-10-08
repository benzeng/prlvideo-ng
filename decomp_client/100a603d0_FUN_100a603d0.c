
long FUN_100a603d0(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  size_t *psVar3;
  long lVar4;
  undefined1 local_50 [16];
  char *local_40;
  size_t local_38;
  
  lVar4 = 0;
  if (param_3 != 0) {
    psVar3 = (size_t *)(param_2 + 0x18);
    lVar4 = 0;
    do {
      cVar1 = FUN_100a602a0(param_1,psVar3[-3],psVar3[-2],local_50);
      if ((cVar1 != '\0') && (*psVar3 == local_38)) {
        iVar2 = _strncasecmp((char *)psVar3[-1],local_40,*psVar3);
        lVar4 = lVar4 + (ulong)(iVar2 == 0);
      }
      psVar3 = psVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return lVar4;
}

