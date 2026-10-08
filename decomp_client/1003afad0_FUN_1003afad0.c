
void FUN_1003afad0(long *param_1,QString *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(*param_1 + 0x10);
  lVar5 = 0;
  if (*(long *)(*param_1 + 0x10) != 0) {
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),param_2), cVar2 != '\0') {
        lVar1 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          lVar4 = lVar5;
          if (lVar5 == 0) goto LAB_1003afb46;
          goto LAB_1003afb36;
        }
      }
      lVar1 = *(long *)(lVar4 + 8);
      lVar5 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_1003afb36:
    cVar2 = operator<(param_2,(QString *)(lVar4 + 0x18));
    if (cVar2 == '\0') goto LAB_1003afb4d;
  }
LAB_1003afb46:
  lVar4 = *param_1 + 8;
LAB_1003afb4d:
  plVar3 = operator_new(8);
  *plVar3 = lVar4;
  *param_3 = plVar3;
  return;
}

