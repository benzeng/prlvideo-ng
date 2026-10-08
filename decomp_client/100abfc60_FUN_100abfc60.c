
uint * FUN_100abfc60(undefined8 *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  
  puVar1 = (uint *)*param_1;
  puVar2 = puVar1 + 2;
  if (puVar2 != param_2) {
    if (1 < *puVar1) {
      if (*(long *)(puVar1 + 4) != 0) {
        puVar2 = *(uint **)(puVar1 + 8);
      }
      iVar4 = 0;
      puVar1 = param_2;
      while (puVar2 != puVar1) {
        puVar1 = (uint *)QMapNodeBase::previousNode();
        bVar5 = *(ulong *)(puVar1 + 6) < *(ulong *)(param_2 + 6);
        if (*(ulong *)(puVar1 + 6) == *(ulong *)(param_2 + 6)) {
          bVar5 = puVar1[8] < param_2[8];
        }
        if (bVar5) break;
        iVar4 = iVar4 + 1;
      }
      puVar2 = (uint *)*param_1;
      if (1 < *puVar2) {
        FUN_100abfda0(param_1);
        puVar2 = (uint *)*param_1;
      }
      lVar3 = *(long *)(puVar2 + 4);
      if (lVar3 != 0) {
        do {
          while (*(ulong *)(lVar3 + 0x18) == *(ulong *)(puVar1 + 6)) {
            if (*(uint *)(lVar3 + 0x20) < puVar1[8]) goto LAB_100abfd22;
LAB_100abfd30:
            lVar3 = *(long *)(lVar3 + 8);
            if (lVar3 == 0) goto LAB_100abfd58;
          }
          if (*(ulong *)(puVar1 + 6) <= *(ulong *)(lVar3 + 0x18)) goto LAB_100abfd30;
LAB_100abfd22:
          lVar3 = *(long *)(lVar3 + 0x10);
        } while (lVar3 != 0);
      }
LAB_100abfd58:
      if (0 < iVar4) {
        iVar4 = iVar4 + 1;
        do {
          QMapNodeBase::nextNode();
          iVar4 = iVar4 + -1;
        } while (1 < iVar4);
      }
    }
    param_2 = (uint *)QMapNodeBase::nextNode();
    QMapDataBase::freeNodeAndRebalance((QMapNodeBase *)*param_1);
  }
  return param_2;
}

