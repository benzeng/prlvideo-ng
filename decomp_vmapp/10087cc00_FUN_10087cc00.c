
void FUN_10087cc00(undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  long local_38;
  
  if ((param_4[1] == 0) && (iVar3 = FUN_100885600(param_2), 0 < iVar3)) {
    iVar3 = 0;
    do {
      lVar5 = FUN_100885620(param_2,iVar3);
      (**(code **)(lVar5 + 0x60))(lVar5,&local_38,0,param_1);
      lVar2 = local_38;
      pcVar1 = *(char **)(local_38 + 0x10);
      sVar6 = _strlen(pcVar1);
      if (((int)sVar6 == (int)param_4[3]) &&
         (iVar4 = _strncasecmp(pcVar1,(char *)param_4[2],(long)(int)sVar6), iVar4 == 0)) {
        *param_4 = lVar5;
        param_4[1] = lVar2;
        return;
      }
      iVar3 = iVar3 + 1;
      iVar4 = FUN_100885600(param_2);
    } while (iVar3 < iVar4);
  }
  return;
}

