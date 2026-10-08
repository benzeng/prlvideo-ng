
byte * FUN_100b5d710(byte *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  size_t *local_30;
  
  uVar1 = FUN_100c6de40();
  uVar1 = FUN_100c58530(uVar1);
  uVar2 = FUN_100c59860();
  uVar2 = FUN_100c58530(uVar2);
  uVar1 = FUN_100c591b0(uVar1,uVar2);
  if ((*param_2 & 1) == 0) {
    pbVar8 = param_2 + 1;
    uVar6 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
  FUN_100c58980(uVar1,pbVar8,uVar6);
  FUN_100c58d60(uVar1,0xb,0,0);
  FUN_100c58d60(uVar1,0x73,0,&local_30);
  pcVar3 = _malloc(*local_30);
  _memcpy(pcVar3,(void *)local_30[1],*local_30 - 1);
  pcVar3[*local_30 - 1] = '\0';
  FUN_100c59480(uVar1);
  _strlen(pcVar3);
  std::string::__init((char *)param_1,(ulong)pcVar3);
  _free(pcVar3);
  bVar5 = *param_1;
  if ((bVar5 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  else {
    pbVar8 = *(byte **)(param_1 + 0x10);
  }
  while( true ) {
    pbVar4 = param_1 + 1;
    if ((bVar5 & 1) == 0) {
      uVar6 = (ulong)(bVar5 >> 1);
      pbVar7 = pbVar4;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar8 == pbVar7 + uVar6) break;
    if (*pbVar8 == 10) {
      if ((bVar5 & 1) != 0) {
        pbVar4 = *(byte **)(param_1 + 0x10);
      }
      std::string::erase((ulong)param_1,(long)pbVar8 - (long)pbVar4);
      bVar5 = *param_1;
    }
    else {
      pbVar8 = pbVar8 + 1;
    }
  }
  return param_1;
}

