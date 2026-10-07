
undefined8 FUN_100821160(undefined8 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint local_30 [2];
  undefined8 local_28;
  
  uVar4 = 0;
  if (DAT_1011c06d0 != 0) {
    local_30[0] = param_2 & 0xffff7fff;
    local_28 = param_1;
    piVar2 = (int *)FUN_100885c10(DAT_1011c06d0,local_30);
    if (piVar2 != (int *)0x0) {
      if (DAT_1011c06d8 != 0) {
        iVar1 = FUN_100885600();
        if (*piVar2 < iVar1) {
          lVar3 = FUN_100885620(DAT_1011c06d8);
          (**(code **)(lVar3 + 0x10))
                    (*(undefined8 *)(piVar2 + 2),*piVar2,*(undefined8 *)(piVar2 + 4));
        }
      }
      FUN_10081e1a0(piVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}

