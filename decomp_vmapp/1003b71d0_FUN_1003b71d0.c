
char * FUN_1003b71d0(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 0xb & 1;
  pcVar2 = "indexed?";
  if (uVar3 == 0) {
    pcVar2 = "immediateIndexed";
  }
  pcVar1 = "dynamicIndexed";
  if (uVar3 == 0) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}

