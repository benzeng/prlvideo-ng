
int _xmlAddEncodingAlias(char *name,char *alias)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int local_9c;
  char local_88 [108];
  int local_1c;
  
  if ((name == (char *)0x0) || (alias == (char *)0x0)) {
    local_9c = -1;
  }
  else {
    for (local_1c = 0; iVar4 = local_1c, local_1c < 99; local_1c = local_1c + 1) {
      cVar3 = FUN_10086daa9((int)alias[local_1c]);
      local_88[iVar4] = cVar3;
      if (local_88[local_1c] == '\0') break;
    }
    local_88[local_1c] = '\0';
    if (DAT_102312450 == 0) {
      DAT_102312458 = 0;
      DAT_10231245c = 0x14;
      DAT_102312450 = (*(code *)_xmlMalloc)(0x140);
      if (DAT_102312450 == 0) {
        return -1;
      }
    }
    else if (DAT_10231245c <= DAT_102312458) {
      DAT_10231245c = DAT_10231245c * 2;
      DAT_102312450 = (*(code *)_xmlRealloc)(DAT_102312450,(long)DAT_10231245c << 4);
    }
    for (local_1c = 0; local_1c < DAT_102312458; local_1c = local_1c + 1) {
      iVar4 = _strcmp(*(char **)((long)local_1c * 0x10 + DAT_102312450 + 8),local_88);
      if (iVar4 == 0) {
        (*(code *)_xmlFree)(*(undefined8 *)((long)local_1c * 0x10 + DAT_102312450));
        puVar1 = (undefined8 *)((long)local_1c * 0x10 + DAT_102312450);
        uVar5 = (*(code *)_xmlMemStrdup)(name);
        *puVar1 = uVar5;
        return 0;
      }
    }
    puVar1 = (undefined8 *)((long)DAT_102312458 * 0x10 + DAT_102312450);
    uVar5 = (*(code *)_xmlMemStrdup)(name);
    *puVar1 = uVar5;
    lVar2 = (long)DAT_102312458 * 0x10 + DAT_102312450;
    uVar5 = (*(code *)_xmlMemStrdup)(local_88);
    *(undefined8 *)(lVar2 + 8) = uVar5;
    DAT_102312458 = DAT_102312458 + 1;
    local_9c = 0;
  }
  return local_9c;
}

