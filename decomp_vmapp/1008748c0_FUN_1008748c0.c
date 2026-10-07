
undefined8 FUN_1008748c0(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = _strcmp(param_2,"dsa_paramgen_bits");
  if (iVar1 == 0) {
    iVar1 = _atoi(param_3);
    uVar3 = 0x1001;
  }
  else {
    iVar1 = _strcmp(param_2,"dsa_paramgen_q_bits");
    if (iVar1 != 0) {
      iVar1 = _strcmp(param_2,"dsa_paramgen_md");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      uVar2 = FUN_100890b60(param_3);
      uVar3 = 0x1003;
      iVar1 = 0;
      goto LAB_100874977;
    }
    iVar1 = _atoi(param_3);
    uVar3 = 0x1002;
  }
  uVar2 = 0;
LAB_100874977:
  uVar3 = FUN_1008964c0(param_1,0x74,2,uVar3,iVar1,uVar2);
  return uVar3;
}

