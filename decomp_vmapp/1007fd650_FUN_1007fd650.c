
undefined8 FUN_1007fd650(int *param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x60))(param_3);
  iVar4 = 0x28;
  if (*param_1 != 0x300) {
    iVar4 = iVar2;
  }
  if (iVar2 != 0x46) {
    iVar4 = iVar2;
  }
  if (-1 < iVar4) {
    if ((param_2 == 2) && (*(long *)(param_1 + 0x4c) != 0)) {
      FUN_100814230(*(undefined8 *)(param_1 + 0x5c));
    }
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(lVar1 + 0x1d4) = 1;
    *(char *)(lVar1 + 0x1d8) = (char)param_2;
    *(char *)(*(long *)(param_1 + 0x20) + 0x1d9) = (char)iVar4;
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x11c) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007fd6fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1);
      return uVar3;
    }
  }
  return 0xffffffff;
}

