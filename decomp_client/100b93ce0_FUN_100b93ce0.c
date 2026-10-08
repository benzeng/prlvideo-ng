
char * FUN_100b93ce0(char *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = DAT_1022cf518;
  if (*(int *)(DAT_1022cf518 + 0x6c) != 0) {
    pcVar1 = (char *)(DAT_1022cf518 + 0x18);
    iVar3 = _strcmp(pcVar1,param_1);
    if (iVar3 == 0) {
      return pcVar1;
    }
  }
  if (*(int *)(lVar2 + 0x15d) != 0) {
    iVar3 = _strcmp((char *)(lVar2 + 0x109),param_1);
    if (iVar3 == 0) {
      return (char *)(lVar2 + 0x109);
    }
  }
  if (*(int *)(lVar2 + 0x24e) != 0) {
    iVar3 = _strcmp((char *)(lVar2 + 0x1fa),param_1);
    if (iVar3 == 0) {
      return (char *)(lVar2 + 0x1fa);
    }
  }
  if (*(int *)(lVar2 + 0x33f) != 0) {
    iVar3 = _strcmp((char *)(lVar2 + 0x2eb),param_1);
    if (iVar3 == 0) {
      return (char *)(lVar2 + 0x2eb);
    }
  }
  if (*(int *)(lVar2 + 0x430) != 0) {
    iVar3 = _strcmp((char *)(lVar2 + 0x3dc),param_1);
    if (iVar3 == 0) {
      return (char *)(lVar2 + 0x3dc);
    }
  }
  if (*(int *)(lVar2 + 0x521) != 0) {
    iVar3 = _strcmp((char *)(lVar2 + 0x4cd),param_1);
    if (iVar3 == 0) {
      return (char *)(lVar2 + 0x4cd);
    }
  }
  if (*(int *)(lVar2 + 0x612) != 0) {
    iVar3 = _strcmp((char *)(lVar2 + 0x5be),param_1);
    if (iVar3 == 0) {
      return (char *)(lVar2 + 0x5be);
    }
  }
  return (char *)0x0;
}

