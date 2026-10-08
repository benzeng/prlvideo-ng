
undefined8 FUN_1001e8960(int *param_1)

{
  int iVar1;
  char cVar2;
  uid_t uVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  
  cVar2 = FUN_100d80630(1);
  iVar1 = *param_1;
  uVar4 = 0;
  if (cVar2 != '\0') {
    uVar3 = _getuid();
    uVar4 = CONCAT44(extraout_var,uVar3);
  }
  return CONCAT71((int7)((ulong)uVar4 >> 8),iVar1 == (int)uVar4);
}

