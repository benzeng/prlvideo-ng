
void FUN_100ca3c00(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  
  puVar1 = (uint *)*param_2;
  FUN_100c5c0c0(param_1,"%*sPolicy: ",param_3,"");
  FUN_100c74930(param_1,*(undefined8 *)(puVar1 + 2));
  FUN_100c58a70(param_1,"\n");
  iVar3 = (int)param_3 + 2;
  pcVar2 = "Non Critical";
  if ((*puVar1 & 0x10) != 0) {
    pcVar2 = "Critical";
  }
  FUN_100c5c0c0(param_1,"%*s%s\n",iVar3,"",pcVar2);
  if (*(long *)(puVar1 + 4) != 0) {
    FUN_100ca3cc0(param_1,*(long *)(puVar1 + 4),iVar3);
    return;
  }
  FUN_100c5c0c0(param_1,"%*sNo Qualifiers\n",iVar3,"");
  return;
}

