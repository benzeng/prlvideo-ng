
bool FUN_10060b3d0(long param_1,QString *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  
  local_38 = 0;
  uStack_30 = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  lVar6 = 0;
  if (lVar5 != 0) {
    do {
      while (lVar4 = lVar5, cVar2 = operator<((QString *)(lVar4 + 0x18),param_2), cVar2 != '\0') {
        lVar5 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          lVar4 = lVar6;
          if (lVar6 == 0) goto LAB_10060b446;
          goto LAB_10060b436;
        }
      }
      lVar5 = *(long *)(lVar4 + 8);
      lVar6 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_10060b436:
    cVar2 = operator<(param_2,(QString *)(lVar4 + 0x18));
    if (cVar2 == '\0') goto LAB_10060b448;
  }
LAB_10060b446:
  lVar4 = 0;
LAB_10060b448:
  puVar3 = &local_38;
  if (lVar4 != 0) {
    puVar3 = (undefined8 *)(lVar4 + 0x20);
  }
  piVar1 = (int *)*puVar3;
  lVar5 = 0;
  if (piVar1 != (int *)0x0) {
    lVar6 = puVar3[1];
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    lVar5 = 0;
    if (piVar1[1] != 0) {
      lVar5 = lVar6;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar1);
    }
  }
  return lVar5 != 0;
}

