
void FUN_1006900c0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x18);
  param_2[3] = piVar3;
  if (*piVar3 != -1) {
    if (*piVar3 == 0) {
      QListData::detach((int)(param_2 + 3));
      lVar4 = param_2[3];
      iVar2 = *(int *)(lVar4 + 8);
      if (iVar2 != *(int *)(lVar4 + 0xc)) {
        puVar5 = (undefined8 *)
                 (*(long *)(param_1 + 0x18) + 0x10 +
                 (long)*(int *)(*(long *)(param_1 + 0x18) + 8) * 8);
        puVar6 = (undefined8 *)(lVar4 + 0x10 + (long)iVar2 * 8);
        lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar2 * -8;
        do {
          piVar3 = (int *)*puVar5;
          *puVar6 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
  }
  return;
}

