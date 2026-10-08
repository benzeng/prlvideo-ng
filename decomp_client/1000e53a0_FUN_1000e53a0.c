
void FUN_1000e53a0(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  uint *puVar2;
  uint uVar3;
  
  if (-1 < param_2) {
    puVar2 = (uint *)*param_1;
    uVar3 = puVar2[2];
    if (param_2 < (int)(puVar2[3] - uVar3)) {
      if (1 < *puVar2) {
        FUN_1000e6e10(param_1,puVar2[1]);
        puVar2 = (uint *)*param_1;
        uVar3 = puVar2[2];
      }
      pvVar1 = *(void **)(puVar2 + ((long)param_2 + (long)(int)uVar3) * 2 + 4);
      if (pvVar1 != (void *)0x0) {
        FUN_1000be7b0(pvVar1);
        operator_delete(pvVar1);
      }
      QListData::remove((int)param_1);
      return;
    }
  }
  return;
}

