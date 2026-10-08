
uint FUN_100caadb0(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  if (((char *)*param_1 == (char *)*param_2) ||
     (uVar3 = _strcmp((char *)*param_1,(char *)*param_2), uVar3 == 0)) {
    pcVar1 = (char *)param_1[1];
    pcVar2 = (char *)param_2[1];
    pcVar4 = pcVar2;
    if ((pcVar1 != (char *)0x0) && (pcVar4 = (char *)0x0, pcVar2 != (char *)0x0)) {
      uVar3 = _strcmp(pcVar1,pcVar2);
      return uVar3;
    }
    uVar3 = 0;
    if (pcVar1 != pcVar4) {
      uVar3 = -(uint)(pcVar1 == (char *)0x0) | 1;
    }
  }
  return uVar3;
}

