
undefined8 * FUN_100d2b0c0(undefined8 *param_1,long param_2,QString *param_3,uint param_4)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  if (lVar3 != 0) {
    lVar7 = 0;
    do {
      while (lVar6 = lVar3, cVar2 = operator<((QString *)(lVar6 + 0x18),param_3), cVar2 == '\0') {
        lVar3 = *(long *)(lVar6 + 8);
        lVar7 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_100d2b136;
      }
      lVar3 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar7;
    if (lVar7 != 0) {
LAB_100d2b136:
      cVar2 = operator<(param_3,(QString *)(lVar6 + 0x18));
      if ((cVar2 == '\0') &&
         (lVar3 = FUN_100d2bcb0(param_2 + 0x10), (*(uint *)(lVar3 + 8) & param_4) != 0)) {
        puVar4 = (undefined8 *)FUN_100d2bcb0(param_2 + 0x10,param_3);
        piVar1 = (int *)*puVar4;
        *param_1 = piVar1;
        if (*piVar1 + 1U < 2) {
          return param_1;
        }
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        return param_1;
      }
    }
  }
  uVar5 = QString::fromAscii_helper("",0);
  *param_1 = uVar5;
  return param_1;
}

