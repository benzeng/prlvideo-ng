
long FUN_1006139b0(undefined8 *param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1006154d0(param_1);
    puVar3 = (uint *)*param_1;
  }
  lVar1 = *(long *)(puVar3 + 4);
  lVar5 = 0;
  if (*(long *)(puVar3 + 4) != 0) {
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),param_2), cVar2 != '\0') {
        lVar1 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          lVar4 = lVar5;
          if (lVar5 == 0) goto LAB_100613a36;
          goto LAB_100613a26;
        }
      }
      lVar1 = *(long *)(lVar4 + 8);
      lVar5 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_100613a26:
    cVar2 = operator<(param_2,(QString *)(lVar4 + 0x18));
    if (cVar2 == '\0') goto LAB_100613a4f;
  }
LAB_100613a36:
  local_38 = 0;
  uStack_30 = 0;
  lVar4 = FUN_100615370(param_1,param_2,&local_38);
LAB_100613a4f:
  return lVar4 + 0x20;
}

