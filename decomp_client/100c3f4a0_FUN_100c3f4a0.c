
bool FUN_100c3f4a0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) {
    FUN_100c62ee0(0x10,0xb3,0x43,"ec_key.c",0xf3);
    return false;
  }
  lVar2 = FUN_100c26720();
  if (lVar2 == 0) {
    return false;
  }
  lVar3 = FUN_100c27a20();
  bVar7 = false;
  lVar6 = 0;
  if ((lVar3 == 0) ||
     ((lVar4 = *(long *)(param_1 + 0x18), lVar6 = lVar3, lVar4 == 0 &&
      (lVar4 = FUN_100c26720(), lVar4 == 0)))) {
    FUN_100c266b0(lVar2);
    goto LAB_100c3f605;
  }
  iVar1 = FUN_100c36bd0(*(undefined8 *)(param_1 + 8),lVar2,lVar3);
  if (iVar1 == 0) {
LAB_100c3f5da:
    FUN_100c266b0(lVar2);
    bVar7 = false;
  }
  else {
    do {
      iVar1 = FUN_100c2ad60(lVar4,lVar2);
      if (iVar1 == 0) goto LAB_100c3f5da;
    } while (*(int *)(lVar4 + 8) == 0);
    lVar5 = *(long *)(param_1 + 0x10);
    if ((lVar5 == 0) && (lVar5 = FUN_100c368e0(*(undefined8 *)(param_1 + 8)), lVar5 == 0))
    goto LAB_100c3f5da;
    iVar1 = FUN_100c37990(*(undefined8 *)(param_1 + 8),lVar5,lVar4,0,0,lVar3);
    bVar7 = iVar1 != 0;
    if (bVar7) {
      *(long *)(param_1 + 0x18) = lVar4;
      *(long *)(param_1 + 0x10) = lVar5;
    }
    FUN_100c266b0(lVar2);
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_100c36280(lVar5);
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    FUN_100c266b0(lVar4);
  }
LAB_100c3f605:
  if (lVar6 != 0) {
    FUN_100c27ab0(lVar6);
  }
  return bVar7;
}

