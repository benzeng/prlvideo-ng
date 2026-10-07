
void FUN_10005fbb0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 - param_3 != 0) {
    lVar8 = 0;
    do {
      puVar5 = operator_new(0x18);
      puVar1 = *(undefined8 **)(param_4 + lVar8);
      piVar2 = (int *)*puVar1;
      *puVar5 = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      puVar5[1] = puVar1[1];
      piVar2 = (int *)puVar1[2];
      puVar5[2] = piVar2;
      if (*piVar2 != -1) {
        if (*piVar2 == 0) {
          QListData::detach((int)(puVar5 + 2));
          lVar3 = puVar5[2];
          lVar6 = (long)*(int *)(lVar3 + 8);
          lVar4 = puVar1[2];
          if ((lVar4 + (long)*(int *)(lVar4 + 8) * 8 != lVar3 + lVar6 * 8) &&
             (lVar7 = *(int *)(lVar3 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(lVar3 + 0xc)))
          {
            _memcpy((void *)(lVar3 + 0x10 + lVar6 * 8),
                    (void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),lVar7 * 8);
          }
        }
        else {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
      }
      puVar5[1] = puVar1[1];
      *(undefined8 **)(param_2 + lVar8) = puVar5;
      lVar8 = lVar8 + 8;
    } while ((param_2 - param_3) + lVar8 != 0);
  }
  return;
}

