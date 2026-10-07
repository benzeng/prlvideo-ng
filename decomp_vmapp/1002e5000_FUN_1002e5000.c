
uint * FUN_1002e5000(undefined8 *param_1,uint *param_2,long *param_3)

{
  QMapNodeBase *pQVar1;
  uint *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  ulong *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar7 = (uint *)*param_1;
  if (1 < *puVar7) {
    FUN_1002e5160(param_1);
    puVar7 = (uint *)*param_1;
  }
  if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
    puVar7 = puVar7 + 2;
    uVar4 = 1;
  }
  else {
    puVar2 = *(uint **)(puVar7 + 4);
    puVar8 = (uint *)0x0;
    do {
      while (puVar7 = puVar2, puVar7[6] < *param_2) {
        puVar2 = *(uint **)(puVar7 + 4);
        if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
          uVar4 = 0;
          uVar3 = 0;
          if (puVar8 == (uint *)0x0) goto LAB_1002e50cf;
          goto LAB_1002e506d;
        }
      }
      puVar2 = *(uint **)(puVar7 + 2);
      puVar8 = puVar7;
      uVar3 = 1;
    } while (*(uint **)(puVar7 + 2) != (uint *)0x0);
LAB_1002e506d:
    uVar4 = uVar3;
    if (puVar8[6] <= *param_2) {
      piVar5 = (int *)*param_3;
      if (*(int **)(puVar8 + 8) != piVar5) {
        if (*piVar5 == 0) {
          piVar5 = (int *)QMapDataBase::createData();
          if (*(long *)(*param_3 + 0x10) != 0) {
            puVar6 = (ulong *)FUN_1002e53a0(*(long *)(*param_3 + 0x10),piVar5);
            *(ulong **)(piVar5 + 4) = puVar6;
            *puVar6 = *puVar6 & 3 | (ulong)(piVar5 + 2);
            QMapDataBase::recalcMostLeftNode();
          }
        }
        else if (*piVar5 != -1) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
          piVar5 = (int *)*param_3;
        }
        pQVar1 = *(QMapNodeBase **)(puVar8 + 8);
        *(int **)(puVar8 + 8) = piVar5;
        if (*(int *)pQVar1 != -1) {
          if (*(int *)pQVar1 != 0) {
            LOCK();
            *(int *)pQVar1 = *(int *)pQVar1 + -1;
            UNLOCK();
            if (*(int *)pQVar1 != 0) {
              return puVar8;
            }
          }
          if (*(long *)(pQVar1 + 0x10) != 0) {
            FUN_1002e54e0();
            QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)pQVar1);
        }
      }
      return puVar8;
    }
  }
LAB_1002e50cf:
  puVar7 = (uint *)FUN_1002e52b0(*param_1,param_2,param_3,puVar7,uVar4);
  return puVar7;
}

