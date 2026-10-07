
char * FUN_1000e1170(long param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)((ulong)*(byte *)(param_1 + 5) + param_1);
  if (pcVar4 != (char *)0x0) {
    pcVar2 = (char *)(param_1 + 0x100000);
    while ((*pcVar4 != '\x7f' && (uVar3 = (ulong)(byte)pcVar4[1], 3 < uVar3))) {
      if (*pcVar4 == param_2) {
        if (DAT_1011b55f8 < 3) {
          return pcVar4;
        }
        FUN_1008e3970("","vm",3,"[LookupDMIString] Found table of type 0x%hhu, offset %u",param_2,
                      (int)pcVar4 - (int)param_1);
        return pcVar4;
      }
      if (pcVar2 <= pcVar4 + uVar3 + 2) break;
      pcVar4 = pcVar4 + uVar3;
      while ((*pcVar4 != '\0' || (pcVar4[1] != '\0'))) {
        pcVar1 = pcVar4 + 3;
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar1) goto LAB_1000e11e2;
      }
      pcVar4 = pcVar4 + 2;
      if (pcVar2 <= pcVar4) break;
    }
  }
LAB_1000e11e2:
  FUN_1008e3970("","vm",0,"[LookupDMIString] Table type %hhu was not found",param_2);
  return (char *)0x0;
}

