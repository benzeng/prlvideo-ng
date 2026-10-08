
void FUN_100ca5060(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  FUN_100c5c0c0(param_1,"%*s%s:\n%*s",param_4,"",param_2,param_4 + 2,"");
  bVar2 = true;
  puVar4 = &DAT_102254f60;
  do {
    iVar3 = FUN_100c75300(param_3,*puVar4);
    if (iVar3 != 0) {
      if (!bVar2) {
        FUN_100c58a70(param_1,", ");
      }
      FUN_100c58a70(param_1,*(undefined8 *)(puVar4 + 2));
      bVar2 = false;
    }
    plVar1 = (long *)(puVar4 + 8);
    puVar4 = puVar4 + 6;
  } while (*plVar1 != 0);
  if (bVar2) {
    pcVar5 = "<EMPTY>\n";
  }
  else {
    pcVar5 = "\n";
  }
  FUN_100c58a70(param_1,pcVar5);
  return;
}

