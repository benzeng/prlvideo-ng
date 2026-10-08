
undefined8 FUN_100339c20(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar2 = *param_2;
  if (*(int *)(lVar4 + 4) == *(int *)(lVar2 + 4)) {
    if (lVar4 != lVar2) {
      if (*(long *)(lVar4 + 0x10) == 0) {
        lVar3 = lVar4 + 8;
      }
      else {
        lVar3 = *(long *)(lVar4 + 0x20);
      }
      if (*(long *)(lVar2 + 0x10) == 0) {
        lVar2 = lVar2 + 8;
      }
      else {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      while (lVar4 = lVar4 + 8, lVar3 != lVar4) {
        if ((int)*(undefined8 *)(lVar3 + 0x24) != (int)*(undefined8 *)(lVar2 + 0x24)) {
          return 0;
        }
        if ((int)*(undefined8 *)(lVar3 + 0x2c) != (int)*(undefined8 *)(lVar2 + 0x2c)) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x34) != *(int *)(lVar2 + 0x34)) {
          return 0;
        }
        if ((int)((ulong)*(undefined8 *)(lVar3 + 0x2c) >> 0x20) !=
            (int)((ulong)*(undefined8 *)(lVar2 + 0x2c) >> 0x20)) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x1c) != *(int *)(lVar2 + 0x1c)) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x20) != *(int *)(lVar2 + 0x20)) {
          return 0;
        }
        if ((int)((ulong)*(undefined8 *)(lVar3 + 0x24) >> 0x20) !=
            (int)((ulong)*(undefined8 *)(lVar2 + 0x24) >> 0x20)) {
          return 0;
        }
        if (*(int *)(lVar2 + 0x18) != *(int *)(lVar3 + 0x18)) {
          return 0;
        }
        lVar2 = QMapNodeBase::nextNode();
        lVar3 = QMapNodeBase::nextNode();
        lVar4 = *param_1;
      }
    }
    uVar1 = CONCAT71((int7)((ulong)lVar4 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

