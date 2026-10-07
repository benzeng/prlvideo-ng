
void FUN_10046b8e0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  uint *puVar4;
  uint uVar5;
  
  if (-1 < param_2) {
    puVar4 = (uint *)*param_1;
    uVar5 = puVar4[2];
    if (param_2 < (int)(puVar4[3] - uVar5)) {
      if (1 < *puVar4) {
        FUN_100479940(param_1,puVar4[1]);
        puVar4 = (uint *)*param_1;
        uVar5 = puVar4[2];
      }
      puVar1 = *(undefined8 **)(puVar4 + ((long)param_2 + (long)(int)uVar5) * 2 + 4);
      if (puVar1 != (undefined8 *)0x0) {
        piVar2 = (int *)*puVar1;
        if (piVar2 != (int *)0x0) {
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((*piVar2 == 0) && (pvVar3 = (void *)*puVar1, pvVar3 != (void *)0x0)) {
            FUN_100031ed0(pvVar3);
            operator_delete(pvVar3);
          }
        }
        operator_delete(puVar1);
      }
      QListData::remove((int)param_1);
    }
  }
  return;
}

