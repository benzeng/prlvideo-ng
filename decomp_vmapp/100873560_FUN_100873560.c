
undefined8 FUN_100873560(undefined8 param_1,long param_2)

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
    piVar5 = (int *)FUN_1008afd00();
    if (piVar5 == (int *)0x0) {
      FUN_100887ce0(10,0x76,0x41,"dsa_ameth.c",0x8d);
      piVar5 = (int *)0x0;
      goto LAB_100873643;
    }
    iVar2 = FUN_100872720(lVar1,piVar5 + 2);
    *piVar5 = iVar2;
    uVar4 = 0x10;
    if (iVar2 < 1) {
      FUN_100887ce0(10,0x76,0x41,"dsa_ameth.c",0x92);
      goto LAB_100873643;
    }
  }
  *(undefined4 *)(lVar1 + 0x10) = 0;
  iVar2 = FUN_100872760(lVar1,&local_30);
  if (iVar2 < 1) {
    FUN_100887ce0(10,0x76,0x41,"dsa_ameth.c",0x9e);
  }
  else {
    uVar3 = FUN_100821870(0x74);
    iVar2 = FUN_1008a03e0(param_1,uVar3,uVar4,piVar5,local_30,iVar2);
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_100873643:
  if (local_30 != 0) {
    FUN_10081e1a0();
  }
  if (piVar5 != (int *)0x0) {
    FUN_1008afd70(piVar5);
  }
  return 0;
}

