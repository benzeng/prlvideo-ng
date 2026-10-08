
int FUN_100190bd0(long *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_1001917b0(param_1);
    puVar2 = (uint *)*param_1;
  }
  lVar3 = *(long *)(puVar2 + 4);
  if (lVar3 == 0) {
    return 0;
  }
  iVar7 = 0;
  do {
    uVar1 = *param_2;
    lVar4 = 0;
    do {
      while ((lVar5 = lVar3, uVar6 = *(uint *)(lVar5 + 0x18), uVar1 <= uVar6 &&
             ((uVar1 < uVar6 || (param_2[1] <= *(uint *)(lVar5 + 0x1c)))))) {
        lVar3 = *(long *)(lVar5 + 8);
        lVar4 = lVar5;
        if (*(long *)(lVar5 + 8) == 0) goto LAB_100190c5b;
      }
      lVar3 = *(long *)(lVar5 + 0x10);
    } while (*(long *)(lVar5 + 0x10) != 0);
    if (lVar4 == 0) {
      return iVar7;
    }
    uVar6 = *(uint *)(lVar4 + 0x18);
    lVar5 = lVar4;
LAB_100190c5b:
    if (uVar1 < uVar6) {
      return iVar7;
    }
    if ((uVar1 <= uVar6) && (param_2[1] < *(uint *)(lVar5 + 0x1c))) {
      return iVar7;
    }
    QMapDataBase::freeNodeAndRebalance((QMapNodeBase *)*param_1);
    iVar7 = iVar7 + 1;
    lVar3 = *(long *)(*param_1 + 0x10);
    if (lVar3 == 0) {
      return iVar7;
    }
  } while( true );
}

