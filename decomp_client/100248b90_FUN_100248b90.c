
int FUN_100248b90(long *param_1,int *param_2)

{
  int iVar1;
  QMapNodeBase *pQVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_100249120(param_1);
    puVar3 = (uint *)*param_1;
  }
  lVar4 = *(long *)(puVar3 + 4);
  iVar8 = 0;
  if (lVar4 != 0) {
    iVar8 = 0;
    do {
      lVar5 = 0;
      do {
        while( true ) {
          lVar6 = lVar4;
          iVar1 = *(int *)(lVar6 + 0x18);
          iVar7 = *(int *)(lVar6 + 0x1c);
          if (param_2[1] + *param_2 <= iVar7 + iVar1) break;
          lVar4 = *(long *)(lVar6 + 0x10);
          if (*(long *)(lVar6 + 0x10) == 0) {
            if (lVar5 == 0) {
              return iVar8;
            }
            iVar1 = *(int *)(lVar5 + 0x18);
            iVar7 = *(int *)(lVar5 + 0x1c);
            lVar6 = lVar5;
            goto LAB_100248c1e;
          }
        }
        lVar4 = *(long *)(lVar6 + 8);
        lVar5 = lVar6;
      } while (*(long *)(lVar6 + 8) != 0);
LAB_100248c1e:
      if (param_2[1] + *param_2 < iVar7 + iVar1) {
        return iVar8;
      }
      pQVar2 = (QMapNodeBase *)*param_1;
      if (*(long *)(lVar6 + 0x20) != 0) {
        _PrlHandle_Free();
      }
      QMapDataBase::freeNodeAndRebalance(pQVar2);
      iVar8 = iVar8 + 1;
      lVar4 = *(long *)(*param_1 + 0x10);
    } while (lVar4 != 0);
  }
  return iVar8;
}

