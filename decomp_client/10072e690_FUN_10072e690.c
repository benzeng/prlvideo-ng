
undefined8 FUN_10072e690(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_1;
  lVar4 = *param_2;
  if (*(int *)(lVar1 + 4) == *(int *)(lVar4 + 4)) {
    uVar3 = 1;
    if (lVar1 != lVar4) {
      if (*(long *)(lVar1 + 0x10) == 0) {
        lVar5 = lVar1 + 8;
      }
      else {
        lVar5 = *(long *)(lVar1 + 0x20);
      }
      if (*(long *)(lVar4 + 0x10) == 0) {
        lVar4 = lVar4 + 8;
      }
      else {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      if (lVar5 != lVar1 + 8) {
        do {
          cVar2 = QVariant::cmp((QVariant *)(lVar5 + 0x20));
          if (cVar2 == '\0') {
            return 0;
          }
          cVar2 = operator<((QString *)(lVar5 + 0x18),(QString *)(lVar4 + 0x18));
          if (cVar2 != '\0') {
            return 0;
          }
          cVar2 = operator<((QString *)(lVar4 + 0x18),(QString *)(lVar5 + 0x18));
          if (cVar2 != '\0') {
            return 0;
          }
          lVar4 = QMapNodeBase::nextNode();
          lVar5 = QMapNodeBase::nextNode();
        } while (lVar5 != *param_1 + 8);
        uVar3 = 1;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

