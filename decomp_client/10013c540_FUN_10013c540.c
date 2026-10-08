
uint * FUN_10013c540(undefined8 *param_1,QString *param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  long lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  uint *puVar10;
  int *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  puVar6 = (uint *)*param_1;
  if (1 < *puVar6) {
    FUN_10013c940(param_1);
    puVar6 = (uint *)*param_1;
  }
  puVar10 = (uint *)0x0;
  puVar3 = *(uint **)(puVar6 + 4);
  if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
    puVar6 = puVar6 + 2;
    uVar9 = 1;
  }
  else {
    do {
      while (puVar6 = puVar3, cVar4 = operator<((QString *)(puVar6 + 6),param_2), cVar4 != '\0') {
        puVar3 = *(uint **)(puVar6 + 4);
        if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
          uVar9 = 0;
          if (puVar10 == (uint *)0x0) goto LAB_10013c682;
          goto LAB_10013c5ce;
        }
      }
      uVar9 = 1;
      puVar3 = *(uint **)(puVar6 + 2);
      puVar10 = puVar6;
    } while (*(uint **)(puVar6 + 2) != (uint *)0x0);
LAB_10013c5ce:
    cVar4 = operator<(param_2,(QString *)(puVar10 + 6));
    if (cVar4 == '\0') {
      local_40 = (int *)*param_3;
      if (*(int **)(puVar10 + 8) != local_40) {
        if (*local_40 != -1) {
          if (*local_40 == 0) {
            QListData::detach((int)&local_40);
            iVar1 = local_40[2];
            if (iVar1 != local_40[3]) {
              puVar7 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
              piVar8 = local_40 + (long)iVar1 * 2 + 4;
              lVar5 = (long)local_40[3] * 8 + (long)iVar1 * -8;
              do {
                piVar2 = (int *)*puVar7;
                *(int **)piVar8 = piVar2;
                if (1 < *piVar2 + 1U) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  local_31 = *piVar2 != 0;
                  UNLOCK();
                }
                piVar8 = piVar8 + 2;
                puVar7 = puVar7 + 1;
                lVar5 = lVar5 + -8;
              } while (lVar5 != 0);
            }
          }
          else {
            LOCK();
            *local_40 = *local_40 + 1;
            local_32 = *local_40 != 0;
            UNLOCK();
          }
        }
        piVar8 = *(int **)(puVar10 + 8);
        *(int **)(puVar10 + 8) = local_40;
        local_40 = piVar8;
        FUN_100039a80(&local_40);
      }
      return puVar10;
    }
  }
LAB_10013c682:
  puVar6 = (uint *)FUN_10013c7e0(*param_1,param_2,param_3,puVar6,uVar9);
  return puVar6;
}

