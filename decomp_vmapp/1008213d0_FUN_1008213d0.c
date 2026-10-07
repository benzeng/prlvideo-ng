
void FUN_1008213d0(uint *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  if ((param_1 != (uint *)0x0) &&
     (((local_28[0] = *param_1, (int)DAT_1011c06e0 < 0 ||
       (local_28[0] = DAT_1011c06e0, DAT_1011c06e0 == *param_1)) && (DAT_1011c06d0 != 0)))) {
    local_20 = *(undefined8 *)(param_1 + 2);
    local_28[0] = local_28[0] & 0xffff7fff;
    piVar2 = (int *)FUN_100885c10(DAT_1011c06d0,local_28);
    if (piVar2 != (int *)0x0) {
      if ((DAT_1011c06d8 != 0) && (iVar1 = FUN_100885600(), *piVar2 < iVar1)) {
        lVar3 = FUN_100885620(DAT_1011c06d8);
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)(piVar2 + 2),*piVar2,*(undefined8 *)(piVar2 + 4))
        ;
      }
      FUN_10081e1a0(piVar2);
    }
  }
  return;
}

