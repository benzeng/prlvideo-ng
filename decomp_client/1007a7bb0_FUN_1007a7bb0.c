
undefined8 FUN_1007a7bb0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar4 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x40) + 4) == 0) {
    uVar4 = 0;
  }
  else if (*(long **)(param_1 + 0x48) == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(**(long **)(param_1 + 0x48) + 0x1a0))();
    *param_2 = *puVar2;
    lVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x1a0))();
    uVar1 = *(undefined4 *)(lVar3 + 4);
    *param_3 = uVar1;
    uVar4 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar4;
}

