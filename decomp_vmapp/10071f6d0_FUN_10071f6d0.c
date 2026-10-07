
undefined8 FUN_10071f6d0(char *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  iVar1 = _rename(param_1,param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = ___error();
  uVar4 = 0xfffffff8;
  if (*piVar2 != 0xd) {
    uVar4 = 0xfffffffc;
  }
  piVar2 = ___error();
  pcVar3 = _strerror(*piVar2);
  uVar4 = FUN_10071e690(uVar4,"Can\'t move file %s to %s, error %s",param_1,param_2,pcVar3);
  return uVar4;
}

