
undefined8 FUN_1003d55c0(uint *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (((&DAT_100b3f714)[(ulong)*param_1 * 8] & 4) != 0) {
    uVar1 = *param_3;
    if ((*(uint *)(&DAT_100b3f714 + (ulong)uVar1 * 8) & 4) == 0) {
      if ((uVar1 == 0) || (uVar1 == 7)) {
        FUN_1003cf860();
      }
      else if ((*(uint *)(&DAT_100b3f714 + (ulong)uVar1 * 8) & 0x40) == 0) {
        FUN_1003d10b0();
      }
      else {
        FUN_1003d12d0();
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

