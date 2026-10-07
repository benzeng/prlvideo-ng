
bool FUN_1004fc7a0(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = QString::indexOf(param_2,0x2f,0,1);
  iVar3 = iVar2;
  if (((-1 < iVar2) &&
      (((iVar2 == *(int *)(DAT_1011bc278 + 4) &&
        (cVar1 = QString::startsWith(param_2,&DAT_1011bc278,1), cVar1 != '\0')) ||
       (iVar2 = QString::indexOf(param_2,0x2f,iVar2 + 1,1), iVar3 = iVar2, -1 < iVar2)))) &&
     (iVar3 = -1, iVar2 + 1 != *(int *)(*param_2 + 4))) {
    iVar3 = iVar2;
  }
  return -1 < iVar3;
}

