
void FUN_10009ed90(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  QMapNodeBase *pQVar5;
  
  pQVar5 = *(QMapNodeBase **)(param_1 + 0x90);
  if (*(uint *)pQVar5 < 2) goto LAB_10009edbe;
  FUN_1000a04e0((undefined8 *)(param_1 + 0x90));
  while( true ) {
    pQVar5 = *(QMapNodeBase **)(param_1 + 0x90);
LAB_10009edbe:
    if (*(long *)(pQVar5 + 0x10) == 0) break;
    lVar1 = *(long *)(pQVar5 + 0x10);
    lVar2 = 0;
    do {
      while (lVar4 = lVar1, uVar3 = *(ulong *)(lVar4 + 0x18), param_2 <= uVar3) {
        lVar1 = *(long *)(lVar4 + 8);
        lVar2 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_10009ee0a;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    if (lVar2 == 0) break;
    uVar3 = *(ulong *)(lVar2 + 0x18);
LAB_10009ee0a:
    if (param_2 < uVar3) break;
    QMapDataBase::freeNodeAndRebalance(pQVar5);
  }
  FUN_10009e010(param_1);
  return;
}

