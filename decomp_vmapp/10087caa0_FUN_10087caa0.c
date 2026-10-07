
long FUN_10087caa0(long param_1,char *param_2,int param_3)

{
  code *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  int local_48;
  long local_40;
  long local_38;
  
  pcVar1 = *(code **)(param_1 + 0x60);
  if (pcVar1 != (code *)0x0) {
    local_48 = param_3;
    if (param_3 == -1) {
      sVar6 = _strlen(param_2);
      local_48 = (int)sVar6;
    }
    iVar4 = (*pcVar1)(param_1,0,&local_38,0);
    if (0 < iVar4) {
      lVar7 = 0;
      do {
        (**(code **)(param_1 + 0x60))(param_1,&local_40,0,*(undefined4 *)(local_38 + lVar7 * 4));
        lVar3 = local_40;
        pcVar2 = *(char **)(local_40 + 0x10);
        sVar6 = _strlen(pcVar2);
        if (((int)sVar6 == local_48) &&
           (iVar5 = _strncasecmp(pcVar2,param_2,(long)local_48), iVar5 == 0)) {
          return lVar3;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar4);
    }
  }
  return 0;
}

