
undefined8 * FUN_1000f8fa0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  
  *param_1 = PTR_shared_null_1021e15e8;
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
    if (puVar3 == puVar2 + (long)(int)puVar2[3] * 2 + 4) break;
    lVar4 = 0;
    if (**(long **)puVar3 != 0) {
      lVar4 = *(long *)(**(long **)puVar3 + 0x10);
    }
    iVar1 = QString::compare(lVar4 + 0x20,param_3,1);
    if (iVar1 != 0) {
      lVar4 = 0;
      if (**(long **)puVar3 != 0) {
        lVar4 = *(long *)(**(long **)puVar3 + 0x10);
      }
      FUN_1000341d0(param_1,lVar4 + 0x10);
    }
    puVar3 = puVar3 + 2;
    puVar2 = (uint *)*param_2;
  }
  return param_1;
}

