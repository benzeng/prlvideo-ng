
undefined8 FUN_1008c4fb0(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 in_RAX;
  long lVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  uVar8 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_100885600(param_2);
    if (0 < iVar2) {
      iVar2 = 0;
LAB_1008c4ff0:
      uVar9 = (undefined4)((ulong)in_RAX >> 0x20);
      lVar4 = FUN_100885620(param_2,iVar2);
      pcVar7 = *(char **)(lVar4 + 8);
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        if (cVar1 < '.') {
          if (cVar1 == '\0') goto LAB_1008c504c;
          if (cVar1 == ',') goto LAB_1008c5040;
        }
        else if ((cVar1 == '.') || (cVar1 == ':')) goto LAB_1008c5040;
        pcVar6 = pcVar6 + 1;
      } while( true );
    }
    uVar8 = 1;
  }
  return uVar8;
LAB_1008c5040:
  if (pcVar6[1] != '\0') {
    pcVar7 = pcVar6 + 1;
  }
LAB_1008c504c:
  uVar5 = 0;
  if (*pcVar7 == '+') {
    uVar5 = 0xffffffff;
    pcVar7 = pcVar7 + 1;
  }
  in_RAX = CONCAT44(uVar9,uVar5);
  iVar3 = FUN_1008bbd60(param_1,pcVar7,param_3,*(undefined8 *)(lVar4 + 0x10),0xffffffff,0xffffffff,
                        in_RAX);
  if (iVar3 == 0) {
    return 0;
  }
  iVar2 = iVar2 + 1;
  iVar3 = FUN_100885600(param_2);
  if (iVar3 <= iVar2) {
    return 1;
  }
  goto LAB_1008c4ff0;
}

