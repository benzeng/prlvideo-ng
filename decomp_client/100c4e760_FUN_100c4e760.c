
undefined8 FUN_100c4e760(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long local_30;
  
  local_30 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  uVar4 = 0xffffffff;
  piVar5 = (int *)0x0;
  if ((((*(int *)(param_2 + 0x28) != 0) && (piVar5 = (int *)0x0, *(long *)(lVar1 + 0x18) != 0)) &&
      (piVar5 = (int *)0x0, *(long *)(lVar1 + 0x20) != 0)) &&
     (piVar5 = (int *)0x0, *(long *)(lVar1 + 0x28) != 0)) {
    piVar5 = (int *)FUN_100c8b280();
    if (piVar5 == (int *)0x0) {
      FUN_100c62ee0(10,0x76,0x41,"dsa_ameth.c",0x8d);
      piVar5 = (int *)0x0;
      goto LAB_100c4e843;
    }
    iVar2 = FUN_100c4d920(lVar1,piVar5 + 2);
    *piVar5 = iVar2;
    uVar4 = 0x10;
    if (iVar2 < 1) {
      FUN_100c62ee0(10,0x76,0x41,"dsa_ameth.c",0x92);
      goto LAB_100c4e843;
    }
  }
  *(undefined4 *)(lVar1 + 0x10) = 0;
  iVar2 = FUN_100c4d960(lVar1,&local_30);
  if (iVar2 < 1) {
    FUN_100c62ee0(10,0x76,0x41,"dsa_ameth.c",0x9e);
  }
  else {
    uVar3 = FUN_100bf6fe0(0x74);
    iVar2 = FUN_100c7b960(param_1,uVar3,uVar4,piVar5,local_30,iVar2);
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_100c4e843:
  if (local_30 != 0) {
    FUN_100bf3910();
  }
  if (piVar5 != (int *)0x0) {
    FUN_100c8b2f0(piVar5);
  }
  return 0;
}

