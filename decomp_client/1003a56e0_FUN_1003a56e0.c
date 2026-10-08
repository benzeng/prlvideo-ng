
bool FUN_1003a56e0(long param_1,QString *param_2)

{
  long lVar1;
  int *piVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  lVar7 = 0;
  if (lVar1 == 0) {
    return false;
  }
  do {
    while (lVar5 = lVar1, cVar3 = operator<((QString *)(lVar5 + 0x18),param_2), cVar3 == '\0') {
      lVar1 = *(long *)(lVar5 + 8);
      lVar7 = lVar5;
      if (*(long *)(lVar5 + 8) == 0) goto LAB_1003a5746;
    }
    lVar1 = *(long *)(lVar5 + 0x10);
  } while (*(long *)(lVar5 + 0x10) != 0);
  lVar5 = lVar7;
  if (lVar7 == 0) {
    return false;
  }
LAB_1003a5746:
  cVar3 = operator<(param_2,(QString *)(lVar5 + 0x18));
  if (cVar3 != '\0') {
    return false;
  }
  local_48 = 0;
  uStack_40 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  lVar7 = 0;
  if (lVar1 != 0) {
    do {
      while (lVar5 = lVar1, cVar3 = operator<((QString *)(lVar5 + 0x18),param_2), cVar3 == '\0') {
        lVar1 = *(long *)(lVar5 + 8);
        lVar7 = lVar5;
        if (*(long *)(lVar5 + 8) == 0) goto LAB_1003a57c1;
      }
      lVar1 = *(long *)(lVar5 + 0x10);
    } while (*(long *)(lVar5 + 0x10) != 0);
    lVar5 = lVar7;
    if (lVar7 != 0) {
LAB_1003a57c1:
      cVar3 = operator<(param_2,(QString *)(lVar5 + 0x18));
      if (cVar3 == '\0') goto LAB_1003a57d3;
    }
  }
  lVar5 = 0;
LAB_1003a57d3:
  puVar4 = &local_48;
  if (lVar5 != 0) {
    puVar4 = (undefined8 *)(lVar5 + 0x20);
  }
  piVar2 = (int *)*puVar4;
  if (piVar2 == (int *)0x0) {
    bVar6 = false;
  }
  else {
    lVar1 = puVar4[1];
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    bVar6 = piVar2[1] != 0 && lVar1 != 0;
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar2);
    }
  }
  return bVar6;
}

