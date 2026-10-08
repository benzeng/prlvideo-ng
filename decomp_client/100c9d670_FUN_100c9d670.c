
long FUN_100c9d670(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  if (*(long *)(param_1 + 8) == 0) {
    iVar1 = (**(code **)(param_1 + 0x28))(param_4,0);
    local_38 = FUN_100bf3540(iVar1,"v3_conf.c",0xc1);
    if (local_38 == 0) goto LAB_100c9d72a;
    local_40 = local_38;
    (**(code **)(param_1 + 0x28))(param_4,&local_40);
  }
  else {
    local_38 = 0;
    iVar1 = FUN_100c80850(param_4,&local_38);
    if (iVar1 < 0) goto LAB_100c9d72a;
  }
  piVar2 = (int *)FUN_100c8b370(4);
  if (piVar2 != (int *)0x0) {
    *(long *)(piVar2 + 2) = local_38;
    *piVar2 = iVar1;
    lVar3 = FUN_100c97900(0,param_2,param_3,piVar2);
    if (lVar3 != 0) {
      FUN_100c8b2f0(piVar2);
      return lVar3;
    }
  }
LAB_100c9d72a:
  FUN_100c62ee0(0x22,0x87,0x41,"v3_conf.c",0xd3);
  return 0;
}

