
undefined8 FUN_100bf68d0(undefined8 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint local_30 [2];
  undefined8 local_28;
  
  uVar4 = 0;
  if (DAT_1023160c0 != 0) {
    local_30[0] = param_2 & 0xffff7fff;
    local_28 = param_1;
    piVar2 = (int *)FUN_100c60e10(DAT_1023160c0,local_30);
    if (piVar2 != (int *)0x0) {
      if (DAT_1023160c8 != 0) {
        iVar1 = FUN_100c60800();
        if (*piVar2 < iVar1) {
          lVar3 = FUN_100c60820(DAT_1023160c8);
          (**(code **)(lVar3 + 0x10))
                    (*(undefined8 *)(piVar2 + 2),*piVar2,*(undefined8 *)(piVar2 + 4));
        }
      }
      FUN_100bf3910(piVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}

