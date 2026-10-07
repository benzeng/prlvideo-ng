
undefined8 FUN_1004f0c40(char *param_1,long *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  ssize_t sVar3;
  undefined4 extraout_var_00;
  bool bVar4;
  undefined8 uVar2;
  
  bVar4 = false;
  iVar1 = _open(param_1,0x110);
  uVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != -1) {
    sVar3 = _read(iVar1,param_2,0x220);
    iVar1 = _close(iVar1);
    uVar2 = CONCAT44(extraout_var_00,iVar1);
    if (sVar3 < 0x220) {
      bVar4 = false;
    }
    else {
      bVar4 = *param_2 == 1;
    }
  }
  return CONCAT71((int7)((ulong)uVar2 >> 8),bVar4);
}

