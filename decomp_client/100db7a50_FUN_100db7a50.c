
undefined8 FUN_100db7a50(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  int *piVar3;
  
  iVar1 = _mkdir(param_1,0x1ff);
  uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
  if (iVar1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0x80000001;
      piVar3 = ___error();
      if (*piVar3 == 0xd) {
        *param_2 = 0x80000005;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

