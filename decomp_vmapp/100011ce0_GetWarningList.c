
/* CBaseNode::GetWarningList() const */

void CBaseNode::GetWarningList(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_RSI;
  long *in_RDI;
  
  piVar2 = *(int **)(in_RSI + 0x38);
  *in_RDI = (long)piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)in_RDI);
      lVar3 = *in_RDI;
      iVar1 = *(int *)(lVar3 + 8);
      if (iVar1 != *(int *)(lVar3 + 0xc)) {
        puVar4 = (undefined8 *)
                 (*(long *)(in_RSI + 0x38) + 0x10 + (long)*(int *)(*(long *)(in_RSI + 0x38) + 8) * 8
                 );
        puVar5 = (undefined8 *)(lVar3 + 0x10 + (long)iVar1 * 8);
        lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar4;
          *puVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  return;
}

