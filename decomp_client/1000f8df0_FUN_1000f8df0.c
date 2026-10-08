
undefined8 * FUN_1000f8df0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  uint *local_48;
  uint *local_40 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  puVar2 = (uint *)*param_2;
  if (1 < *puVar2) {
    FUN_1000f9770(param_2,puVar2[1]);
    puVar2 = (uint *)*param_2;
  }
  puVar5 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar2) {
      FUN_1000f9770(param_2,puVar2[1]);
      puVar2 = (uint *)*param_2;
    }
    if (puVar5 == puVar2 + (long)(int)puVar2[3] * 2 + 4) break;
    lVar4 = 0;
    if (**(long **)puVar5 != 0) {
      lVar4 = *(long *)(**(long **)puVar5 + 0x10);
    }
    cVar1 = QString::startsWith(lVar4 + 0x10,param_3,0);
    if (cVar1 == '\0') {
      puVar5 = puVar5 + 2;
      puVar2 = (uint *)*param_2;
    }
    else {
      uVar3 = 0;
      if (**(long **)puVar5 != 0) {
        uVar3 = *(undefined8 *)(**(long **)puVar5 + 0x10);
      }
      FUN_1000341d0(param_1,uVar3);
      local_48 = puVar5;
      FUN_1000f9210(local_40,param_2,&local_48);
      puVar2 = (uint *)*param_2;
      puVar5 = local_40[0];
    }
  }
  return param_1;
}

