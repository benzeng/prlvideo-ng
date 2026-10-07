
undefined8 FUN_1004aa510(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(uint *)(param_2 + 4) < 4) {
    uVar2 = 0;
  }
  else {
    uVar1 = *param_3;
    **(undefined4 **)(param_1 + 0x10) = uVar1;
    uVar2 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar2;
}

