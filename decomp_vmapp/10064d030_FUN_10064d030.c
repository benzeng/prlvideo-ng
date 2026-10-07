
undefined8 * FUN_10064d030(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  size_t sVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  
  if (PTR_s_Allied_Telesis__Inc_AT_2500TX_V3_10113d658 != (undefined *)0x0) {
    piVar1 = &DAT_10113d650;
    pcVar5 = PTR_s_Allied_Telesis__Inc_AT_2500TX_V3_10113d658;
    do {
      if ((*piVar1 == param_3) && (piVar1[1] == param_4)) {
        sVar2 = _strlen(pcVar5);
        iVar4 = (int)sVar2;
        goto LAB_10064d07e;
      }
      pcVar5 = *(char **)(piVar1 + 6);
      piVar1 = piVar1 + 4;
    } while (pcVar5 != (char *)0x0);
  }
  pcVar5 = "";
  iVar4 = 0;
LAB_10064d07e:
  uVar3 = QString::fromAscii_helper(pcVar5,iVar4);
  *param_1 = uVar3;
  return param_1;
}

