
int * FUN_100c8c5a0(undefined8 param_1,code *param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_30;
  
  if ((param_3 == (long *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) {
    piVar2 = (int *)FUN_100c8b280();
    if (piVar2 == (int *)0x0) {
      FUN_100c62ee0(0xd,0x7c,0x41,"asn_pack.c",0x86);
      return (int *)0x0;
    }
    if (param_3 != (long *)0x0) {
      *param_3 = (long)piVar2;
    }
  }
  iVar1 = (*param_2)(param_1,0);
  *piVar2 = iVar1;
  if (iVar1 == 0) {
    uVar3 = 0x70;
    uVar4 = 0x8f;
  }
  else {
    local_30 = FUN_100bf3540(iVar1,"asn_pack.c",0x92);
    if (local_30 != 0) {
      *(long *)(piVar2 + 2) = local_30;
      (*param_2)(param_1,&local_30);
      return piVar2;
    }
    uVar3 = 0x41;
    uVar4 = 0x93;
    local_30 = 0;
  }
  FUN_100c62ee0(0xd,0x7c,uVar3,"asn_pack.c",uVar4);
  if (param_3 == (long *)0x0) {
    FUN_100c8b2f0(piVar2);
  }
  else {
    if (*param_3 != 0) {
      return (int *)0x0;
    }
    FUN_100c8b2f0(piVar2);
    *param_3 = 0;
  }
  return (int *)0x0;
}

