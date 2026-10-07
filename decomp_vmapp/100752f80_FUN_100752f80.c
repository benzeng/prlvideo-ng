
undefined8 FUN_100752f80(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x68);
    *param_2 = uVar1;
    uVar2 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar2;
}

