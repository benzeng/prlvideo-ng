
void FUN_1007da000(long param_1,long *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_3 = param_3 + (int)param_2[2];
  if (param_3 - *(int *)(param_1 + 0x20) < 0) {
    param_3 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_2 + 2) = param_3;
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *param_2 = (long)param_2;
  param_2[1] = (long)param_2;
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  while( true ) {
    if (puVar4 == (undefined8 *)(param_1 + 0x28)) {
      puVar4 = *(undefined8 **)(param_1 + 0x30);
      *(long **)(param_1 + 0x30) = param_2;
      *param_2 = param_1 + 0x28;
      param_2[1] = (long)puVar4;
      *puVar4 = param_2;
      return;
    }
    if (param_3 - *(int *)(puVar4 + 2) < 0) break;
    puVar4 = (undefined8 *)*puVar4;
  }
  puVar3 = (undefined8 *)puVar4[1];
  puVar4[1] = param_2;
  *param_2 = (long)puVar4;
  param_2[1] = (long)puVar3;
  *puVar3 = param_2;
  return;
}

