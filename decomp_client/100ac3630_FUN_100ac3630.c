
void FUN_100ac3630(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  QMapNodeBase *pQVar6;
  
  pQVar6 = *(QMapNodeBase **)(param_1 + 0xaf0);
  if (*(long *)(pQVar6 + 0x10) != 0) {
    lVar2 = 0;
    lVar3 = *(long *)(pQVar6 + 0x10);
    do {
      while (uVar4 = *(uint *)(lVar3 + 0x18), uVar4 < param_2) {
        plVar1 = (long *)(lVar3 + 0x10);
        lVar3 = *plVar1;
        if (*plVar1 == 0) {
          if (lVar2 == 0) goto LAB_100ac36f4;
          uVar4 = *(uint *)(lVar2 + 0x18);
          goto LAB_100ac3688;
        }
      }
      plVar1 = (long *)(lVar3 + 8);
      lVar2 = lVar3;
      lVar3 = *plVar1;
    } while (*plVar1 != 0);
LAB_100ac3688:
    if (uVar4 <= param_2) {
      if (*(uint *)pQVar6 < 2) goto LAB_100ac369c;
      FUN_100ac86d0((undefined8 *)(param_1 + 0xaf0));
      while( true ) {
        pQVar6 = *(QMapNodeBase **)(param_1 + 0xaf0);
LAB_100ac369c:
        if (*(long *)(pQVar6 + 0x10) == 0) break;
        lVar2 = *(long *)(pQVar6 + 0x10);
        lVar3 = 0;
        do {
          while (lVar5 = lVar2, uVar4 = *(uint *)(lVar5 + 0x18), uVar4 < param_2) {
            lVar2 = *(long *)(lVar5 + 0x10);
            if (*(long *)(lVar5 + 0x10) == 0) {
              if (lVar3 == 0) goto LAB_100ac36f4;
              uVar4 = *(uint *)(lVar3 + 0x18);
              goto LAB_100ac36e9;
            }
          }
          lVar2 = *(long *)(lVar5 + 8);
          lVar3 = lVar5;
        } while (*(long *)(lVar5 + 8) != 0);
LAB_100ac36e9:
        if (param_2 < uVar4) break;
        QMapDataBase::freeNodeAndRebalance(pQVar6);
      }
    }
  }
LAB_100ac36f4:
  pQVar6 = *(QMapNodeBase **)(param_1 + 0xb00);
  if (*(uint *)pQVar6 < 2) goto LAB_100ac3712;
  FUN_100ac8770((undefined8 *)(param_1 + 0xb00));
  do {
    pQVar6 = *(QMapNodeBase **)(param_1 + 0xb00);
LAB_100ac3712:
    if (*(long *)(pQVar6 + 0x10) == 0) {
      return;
    }
    lVar2 = *(long *)(pQVar6 + 0x10);
    lVar3 = 0;
    do {
      while (lVar5 = lVar2, uVar4 = *(uint *)(lVar5 + 0x18), uVar4 < param_2) {
        lVar2 = *(long *)(lVar5 + 0x10);
        if (*(long *)(lVar5 + 0x10) == 0) {
          if (lVar3 == 0) {
            return;
          }
          uVar4 = *(uint *)(lVar3 + 0x18);
          goto LAB_100ac3759;
        }
      }
      lVar2 = *(long *)(lVar5 + 8);
      lVar3 = lVar5;
    } while (*(long *)(lVar5 + 8) != 0);
LAB_100ac3759:
    if (param_2 < uVar4) {
      return;
    }
    QMapDataBase::freeNodeAndRebalance(pQVar6);
  } while( true );
}

