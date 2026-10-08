
undefined4 FUN_100da9b10(long *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))(param_1[2]);
  if (param_1[0x46] != 0) {
    pcVar2 = FUN_100dab900;
    if ((*(uint *)(param_1 + 3) & 3) == 0) {
      pcVar2 = (code *)PTR__free_1021e18a0;
    }
    FUN_100dac6b0(param_1[0x46],pcVar2);
  }
  _free(param_1);
  return uVar1;
}

