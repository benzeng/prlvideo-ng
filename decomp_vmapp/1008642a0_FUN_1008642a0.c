
bool FUN_1008642a0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) {
    FUN_100887ce0(0x10,0xb3,0x43,"ec_key.c",0xf3);
    return false;
  }
  lVar2 = FUN_10084b520();
  if (lVar2 == 0) {
    return false;
  }
  lVar3 = FUN_10084c820();
  bVar7 = false;
  lVar6 = 0;
  if ((lVar3 == 0) ||
     ((lVar4 = *(long *)(param_1 + 0x18), lVar6 = lVar3, lVar4 == 0 &&
      (lVar4 = FUN_10084b520(), lVar4 == 0)))) {
    FUN_10084b4b0(lVar2);
    goto LAB_100864405;
  }
  iVar1 = FUN_10085b9d0(*(undefined8 *)(param_1 + 8),lVar2,lVar3);
  if (iVar1 == 0) {
LAB_1008643da:
    FUN_10084b4b0(lVar2);
    bVar7 = false;
  }
  else {
    do {
      iVar1 = FUN_10084fb60(lVar4,lVar2);
      if (iVar1 == 0) goto LAB_1008643da;
    } while (*(int *)(lVar4 + 8) == 0);
    lVar5 = *(long *)(param_1 + 0x10);
    if ((lVar5 == 0) && (lVar5 = FUN_10085b6e0(*(undefined8 *)(param_1 + 8)), lVar5 == 0))
    goto LAB_1008643da;
    iVar1 = FUN_10085c790(*(undefined8 *)(param_1 + 8),lVar5,lVar4,0,0,lVar3);
    bVar7 = iVar1 != 0;
    if (bVar7) {
      *(long *)(param_1 + 0x18) = lVar4;
      *(long *)(param_1 + 0x10) = lVar5;
    }
    FUN_10084b4b0(lVar2);
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_10085b080(lVar5);
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    FUN_10084b4b0(lVar4);
  }
LAB_100864405:
  if (lVar6 != 0) {
    FUN_10084c8b0(lVar6);
  }
  return bVar7;
}

