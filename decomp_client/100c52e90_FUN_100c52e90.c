
undefined8 FUN_100c52e90(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _strcmp(param_2,"dh_paramgen_prime_len");
  if (iVar1 == 0) {
    iVar1 = _atoi(param_3);
    uVar2 = 0x1001;
  }
  else {
    iVar1 = _strcmp(param_2,"dh_paramgen_generator");
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    iVar1 = _atoi(param_3);
    uVar2 = 0x1002;
  }
  uVar2 = FUN_100c71a40(param_1,0x1c,2,uVar2,iVar1,0);
  return uVar2;
}

