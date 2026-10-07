
undefined8 FUN_100707f10(long *param_1,off_t param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x98))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = _ftruncate((int)param_1[1],param_2);
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
  }
  return uVar3;
}

