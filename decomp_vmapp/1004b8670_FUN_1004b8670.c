
void FUN_1004b8670(long param_1,undefined8 *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_2;
  if (1 < *puVar2) {
    FUN_1004be9d0(param_2);
    puVar2 = (uint *)*param_2;
  }
  if (*(long *)(puVar2 + 4) == 0) {
    puVar1 = puVar2 + 2;
  }
  else {
    puVar1 = *(uint **)(puVar2 + 8);
  }
  while( true ) {
    if (1 < *puVar2) {
      FUN_1004be9d0(param_2);
      puVar2 = (uint *)*param_2;
    }
    if (puVar1 == puVar2 + 2) break;
    if (*(long *)(puVar1 + 8) != 0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                (*(long **)(param_1 + 0x10),*(long *)(puVar1 + 8),param_3);
    }
    puVar1 = (uint *)QMapNodeBase::nextNode();
    puVar2 = (uint *)*param_2;
  }
  FUN_1004ba370(param_2);
  return;
}

