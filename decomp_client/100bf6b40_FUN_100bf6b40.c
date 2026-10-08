
void FUN_100bf6b40(uint *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  if ((param_1 != (uint *)0x0) &&
     (((local_28[0] = *param_1, (int)DAT_1023160d0 < 0 ||
       (local_28[0] = DAT_1023160d0, DAT_1023160d0 == *param_1)) && (DAT_1023160c0 != 0)))) {
    local_20 = *(undefined8 *)(param_1 + 2);
    local_28[0] = local_28[0] & 0xffff7fff;
    piVar2 = (int *)FUN_100c60e10(DAT_1023160c0,local_28);
    if (piVar2 != (int *)0x0) {
      if ((DAT_1023160c8 != 0) && (iVar1 = FUN_100c60800(), *piVar2 < iVar1)) {
        lVar3 = FUN_100c60820(DAT_1023160c8);
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)(piVar2 + 2),*piVar2,*(undefined8 *)(piVar2 + 4))
        ;
      }
      FUN_100bf3910(piVar2);
    }
  }
  return;
}

