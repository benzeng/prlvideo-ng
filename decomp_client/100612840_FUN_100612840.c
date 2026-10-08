
undefined8 FUN_100612840(long param_1,QString *param_2)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  
  local_38 = 0;
  uStack_30 = 0;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x10);
  lVar8 = 0;
  if (lVar1 != 0) {
    do {
      while (lVar6 = lVar1, cVar4 = operator<((QString *)(lVar6 + 0x18),param_2), cVar4 != '\0') {
        lVar1 = *(long *)(lVar6 + 0x10);
        if (*(long *)(lVar6 + 0x10) == 0) {
          lVar6 = lVar8;
          if (lVar8 == 0) goto LAB_1006128b6;
          goto LAB_1006128a6;
        }
      }
      lVar1 = *(long *)(lVar6 + 8);
      lVar8 = lVar6;
    } while (*(long *)(lVar6 + 8) != 0);
LAB_1006128a6:
    cVar4 = operator<(param_2,(QString *)(lVar6 + 0x18));
    if (cVar4 == '\0') goto LAB_1006128b8;
  }
LAB_1006128b6:
  lVar6 = 0;
LAB_1006128b8:
  puVar5 = &local_38;
  if (lVar6 != 0) {
    puVar5 = (undefined8 *)(lVar6 + 0x20);
  }
  piVar2 = (int *)*puVar5;
  uVar7 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = puVar5[1];
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uVar7 = 0;
    if (piVar2[1] != 0) {
      uVar7 = uVar3;
    }
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar2);
    }
  }
  return uVar7;
}

