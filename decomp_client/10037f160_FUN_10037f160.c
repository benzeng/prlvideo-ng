
undefined8 * FUN_10037f160(undefined8 *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  undefined *puVar3;
  uint *puVar4;
  int iVar5;
  
  puVar3 = PTR_shared_null_1021e1288;
  lVar1 = *(long *)(param_2 + 0x10);
  if ((*(char *)(lVar1 + 0x30) == '\0') && (puVar4 = *(uint **)(lVar1 + 0x28), puVar4[1] != 0)) {
    if (1 < *puVar4) {
      FUN_1003807b0((undefined8 *)(lVar1 + 0x28));
      puVar4 = *(uint **)(lVar1 + 0x28);
    }
    if (*(long *)(puVar4 + 4) == 0) {
      puVar4 = puVar4 + 2;
    }
    else {
      puVar4 = *(uint **)(puVar4 + 8);
    }
    piVar2 = *(int **)(puVar4 + 8);
    *param_1 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    *(char *)(param_1 + 1) = (char)puVar4[10];
  }
  else {
    *param_1 = PTR_shared_null_1021e1288;
    iVar5 = *(int *)puVar3;
    if (1 < iVar5 + 1U) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + 1;
      UNLOCK();
      iVar5 = *(int *)puVar3;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    if (iVar5 != -1) {
      if (iVar5 != 0) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + -1;
        UNLOCK();
        if (*(int *)puVar3 != 0) {
          return param_1;
        }
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
  return param_1;
}

