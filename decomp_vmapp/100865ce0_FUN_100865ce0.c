
undefined8 FUN_100865ce0(long *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = (**(code **)(*param_1 + 0xd8))(param_1,*(undefined8 *)(param_3 + uVar2 * 8),param_4);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}

