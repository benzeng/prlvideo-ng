
long FUN_100506390(long param_1,uint param_2,QString *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar2 = 0;
  if (lVar1 != 0) {
    do {
      while (lVar3 = lVar1, uVar4 = *(uint *)(lVar3 + 0x18), param_2 <= uVar4) {
        lVar1 = *(long *)(lVar3 + 8);
        lVar2 = lVar3;
        if (*(long *)(lVar3 + 8) == 0) goto LAB_1005063e9;
      }
      lVar1 = *(long *)(lVar3 + 0x10);
    } while (*(long *)(lVar3 + 0x10) != 0);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar2 + 0x18);
      lVar3 = lVar2;
LAB_1005063e9:
      if (param_2 < uVar4) {
        lVar2 = 0;
      }
      else if (lVar3 == *(long *)(param_1 + 0x10) + 8) {
        lVar2 = 0;
      }
      else {
        QString::operator=(param_3,(QString *)(lVar3 + 0x20));
        lVar2 = 1;
      }
    }
  }
  return lVar2;
}

