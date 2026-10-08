
int * FUN_100c8c6c0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_3 == (long *)0x0) || (piVar3 = (int *)*param_3, piVar3 == (int *)0x0)) {
    piVar3 = (int *)FUN_100c8b280();
    if (piVar3 == (int *)0x0) {
      uVar4 = 0x41;
      uVar5 = 0xac;
      goto LAB_100c8c785;
    }
    if (param_3 != (long *)0x0) {
      *param_3 = (long)piVar3;
    }
  }
  plVar1 = (long *)(piVar3 + 2);
  if (*(long *)(piVar3 + 2) != 0) {
    FUN_100bf3910();
    *plVar1 = 0;
  }
  iVar2 = FUN_100c80850(param_1,plVar1,param_2);
  *piVar3 = iVar2;
  if (iVar2 == 0) {
    uVar4 = 0x70;
    uVar5 = 0xba;
  }
  else {
    if (*plVar1 != 0) {
      return piVar3;
    }
    uVar4 = 0x41;
    uVar5 = 0xbe;
  }
LAB_100c8c785:
  FUN_100c62ee0(0xd,0xc6,uVar4,"asn_pack.c",uVar5);
  return (int *)0x0;
}

