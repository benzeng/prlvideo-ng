
undefined8 FUN_100714c30(char *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 == (char *)0x0) {
    FUN_100714d70(DAT_10116db50);
    return 0;
  }
  uVar1 = (param_2 != (char *)0x0) + 1;
  if (uVar1 - (param_3 == (char *)0x0) == 1) {
    uVar3 = 0xfffffffd;
    goto LAB_100714d4e;
  }
  FUN_100714d70(DAT_10116db50);
  DAT_10116db50 = (undefined8 *)0x0;
  DAT_10116db50 = _malloc(0x18);
  if (DAT_10116db50 != (undefined8 *)0x0) {
    DAT_10116db50[2] = 0;
    DAT_10116db50[1] = 0;
    *DAT_10116db50 = 0;
    pcVar2 = _strdup(param_1);
    puVar4 = DAT_10116db50;
    *DAT_10116db50 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      if (uVar1 == (param_3 == (char *)0x0)) {
        return 0;
      }
      if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
        puVar4[1] = "";
      }
      else {
        pcVar2 = _strdup(param_2);
        puVar4 = DAT_10116db50;
        DAT_10116db50[1] = pcVar2;
        if (pcVar2 == (char *)0x0) goto LAB_100714d39;
      }
      if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
        puVar4[2] = "";
        return 0;
      }
      pcVar2 = _strdup(param_3);
      DAT_10116db50[2] = pcVar2;
      if (pcVar2 != (char *)0x0) {
        return 0;
      }
    }
LAB_100714d39:
    FUN_100714d70();
  }
  DAT_10116db50 = (undefined8 *)0x0;
  uVar3 = 0xfffffffe;
LAB_100714d4e:
  uVar3 = FUN_10071e690(uVar3,0);
  return uVar3;
}

