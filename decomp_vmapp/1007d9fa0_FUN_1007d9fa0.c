
void FUN_1007d9fa0(long param_1,long *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  iVar3 = 0;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  iVar3 = iVar3 + *(int *)(param_1 + 0x20);
  *(int *)(param_2 + 2) = iVar3;
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *param_2 = (long)param_2;
  param_2[1] = (long)param_2;
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  do {
    if (puVar5 == (undefined8 *)(param_1 + 0x28)) {
      puVar4 = *(undefined8 **)(param_1 + 0x30);
      *(long **)(param_1 + 0x30) = param_2;
      *param_2 = param_1 + 0x28;
LAB_1007d9ff5:
      param_2[1] = (long)puVar4;
      *puVar4 = param_2;
      return;
    }
    if (iVar3 - *(int *)(puVar5 + 2) < 0) {
      puVar4 = (undefined8 *)puVar5[1];
      puVar5[1] = param_2;
      *param_2 = (long)puVar5;
      goto LAB_1007d9ff5;
    }
    puVar5 = (undefined8 *)*puVar5;
  } while( true );
}

