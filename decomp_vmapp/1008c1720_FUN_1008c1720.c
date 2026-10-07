
undefined8 FUN_1008c1720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 local_28;
  
  puVar3 = *(undefined4 **)(param_1 + 0x60);
  if (*(long *)(puVar3 + 2) != 0) {
    local_28 = param_3;
    do {
      iVar2 = FUN_100899d80(param_2,*puVar3);
      if (iVar2 != 0) {
        FUN_1008c39e0(*(undefined8 *)(puVar3 + 2),0,&local_28);
      }
      plVar1 = (long *)(puVar3 + 8);
      puVar3 = puVar3 + 6;
      param_3 = local_28;
    } while (*plVar1 != 0);
  }
  return param_3;
}

