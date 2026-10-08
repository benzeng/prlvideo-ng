
long * FUN_1000f8ce0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  undefined1 local_38 [8];
  uint *local_30;
  
  puVar2 = (uint *)*param_2;
  if (1 < *puVar2) {
    FUN_1000f9770(param_2,puVar2[1]);
    puVar2 = (uint *)*param_2;
  }
  puVar3 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar2) {
      FUN_1000f9770(param_2,puVar2[1]);
      puVar2 = (uint *)*param_2;
    }
    if (puVar3 == puVar2 + (long)(int)puVar2[3] * 2 + 4) {
      *param_1 = 0;
      return param_1;
    }
    lVar4 = 0;
    if (**(long **)puVar3 != 0) {
      lVar4 = *(long *)(**(long **)puVar3 + 0x10);
    }
    iVar1 = QString::compare(lVar4 + 0x10,param_3,0);
    if (iVar1 == 0) break;
    puVar3 = puVar3 + 2;
    puVar2 = (uint *)*param_2;
  }
  lVar4 = **(long **)puVar3;
  *param_1 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  local_30 = puVar3;
  FUN_1000f9210(local_38,param_2,&local_30);
  return param_1;
}

