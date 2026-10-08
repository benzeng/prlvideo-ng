
uint * FUN_10012c0a0(undefined8 *param_1,int *param_2,long *param_3)

{
  int iVar1;
  Data *pDVar2;
  uint *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint *puVar6;
  Data *pDVar7;
  uint *puVar8;
  long lVar9;
  Data *local_38;
  undefined1 local_29;
  
  puVar6 = (uint *)*param_1;
  if (1 < *puVar6) {
    FUN_10012c1f0(param_1);
    puVar6 = (uint *)*param_1;
  }
  if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
    puVar6 = puVar6 + 2;
    uVar5 = 1;
  }
  else {
    puVar3 = *(uint **)(puVar6 + 4);
    puVar8 = (uint *)0x0;
    do {
      while (puVar6 = puVar3, (int)puVar6[6] < *param_2) {
        puVar3 = *(uint **)(puVar6 + 4);
        if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
          uVar5 = 0;
          uVar4 = 0;
          if (puVar8 == (uint *)0x0) goto LAB_10012c1c9;
          goto LAB_10012c111;
        }
      }
      puVar3 = *(uint **)(puVar6 + 2);
      puVar8 = puVar6;
      uVar4 = 1;
    } while (*(uint **)(puVar6 + 2) != (uint *)0x0);
LAB_10012c111:
    uVar5 = uVar4;
    if ((int)puVar8[6] <= *param_2) {
      if (*(long *)(puVar8 + 8) != *param_3) {
        FUN_10012c3d0(&local_38,param_3);
        pDVar2 = *(Data **)(puVar8 + 8);
        *(Data **)(puVar8 + 8) = local_38;
        if (*(int *)pDVar2 != -1) {
          if (*(int *)pDVar2 != 0) {
            LOCK();
            *(int *)pDVar2 = *(int *)pDVar2 + -1;
            UNLOCK();
            if (*(int *)pDVar2 != 0) {
              return puVar8;
            }
            local_29 = 0;
          }
          iVar1 = *(int *)(pDVar2 + 0xc);
          local_38 = pDVar2;
          if (iVar1 != *(int *)(pDVar2 + 8)) {
            lVar9 = (long)*(int *)(pDVar2 + 8) * 8 + (long)iVar1 * -8;
            pDVar7 = pDVar2 + (long)iVar1 * 8 + 8;
            do {
              if (*(long **)pDVar7 != (long *)0x0) {
                (**(code **)(**(long **)pDVar7 + 0x88))();
              }
              pDVar7 = pDVar7 + -8;
              lVar9 = lVar9 + 8;
            } while (lVar9 != 0);
          }
          QListData::dispose(pDVar2);
        }
      }
      return puVar8;
    }
  }
LAB_10012c1c9:
  puVar6 = (uint *)FUN_10012c340(*param_1,param_2,param_3,puVar6,uVar5);
  return puVar6;
}

