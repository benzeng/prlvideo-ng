
undefined8 FUN_100bf67c0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (DAT_1023160c0 == 0) {
    FUN_100bf3a80(3);
    DAT_1023160c0 = FUN_100c608e0(FUN_100bf64b0,FUN_100bf6500);
    FUN_100bf3a80(2);
    if (DAT_1023160c0 == 0) {
      return 0;
    }
  }
  puVar2 = (uint *)FUN_100bf3540(0x18,"o_names.c",0xbf);
  uVar5 = 0;
  if (puVar2 != (uint *)0x0) {
    *(undefined8 *)(puVar2 + 2) = param_1;
    puVar2[1] = param_2 & 0x8000;
    *puVar2 = param_2 & 0xffff7fff;
    *(undefined8 *)(puVar2 + 4) = param_3;
    piVar3 = (int *)FUN_100c60be0(DAT_1023160c0,puVar2);
    if (piVar3 == (int *)0x0) {
      if (*(int *)(DAT_1023160c0 + 0xa8) != 0) {
        return 0;
      }
    }
    else {
      if ((DAT_1023160c8 != 0) && (iVar1 = FUN_100c60800(), *piVar3 < iVar1)) {
        lVar4 = FUN_100c60820(DAT_1023160c8);
        (**(code **)(lVar4 + 0x10))(*(undefined8 *)(piVar3 + 2),*piVar3,*(undefined8 *)(piVar3 + 4))
        ;
      }
      FUN_100bf3910(piVar3);
    }
    uVar5 = 1;
  }
  return uVar5;
}

