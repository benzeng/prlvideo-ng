
void FUN_1000bfb70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    puVar4 = operator_new(0x18);
    puVar2 = (undefined8 *)*param_4;
    piVar3 = (int *)*puVar2;
    *puVar4 = piVar3;
    if (1 < *piVar3 + 1U) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    piVar3 = (int *)puVar2[1];
    puVar4[1] = piVar3;
    if (*piVar3 != -1) {
      if (*piVar3 == 0) {
        QListData::detach((int)(puVar4 + 1));
        lVar5 = puVar4[1];
        iVar1 = *(int *)(lVar5 + 8);
        if (iVar1 != *(int *)(lVar5 + 0xc)) {
          puVar6 = (undefined8 *)(puVar2[1] + 0x10 + (long)*(int *)(puVar2[1] + 8) * 8);
          puVar7 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
          lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar3 = (int *)*puVar6;
            *puVar7 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              UNLOCK();
            }
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
    }
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar2 + 2);
    *param_2 = puVar4;
    param_4 = param_4 + 1;
  }
  return;
}

