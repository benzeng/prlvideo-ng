
undefined8 FUN_100c952d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100ca5d90(param_3);
  uVar2 = 1;
  if (iVar1 != 0) {
    uVar2 = 0;
    if ((*(byte *)(*(long *)(param_1 + 0x28) + 0x18) & 1) != 0) {
      *(int *)(param_1 + 0xb8) = iVar1;
      *(undefined8 *)(param_1 + 0xc0) = param_2;
      *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000100c95334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x40))(0,param_1);
      return uVar2;
    }
  }
  return uVar2;
}

