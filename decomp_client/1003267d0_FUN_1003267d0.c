
void FUN_1003267d0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 != 1) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x98);
    }
    FUN_100322e30(uVar3,0);
    return;
  }
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    lVar2 = FUN_100319390();
    if (lVar2 != 0) {
      iVar1 = FUN_10018a9d0(lVar2);
      if (iVar1 == 0x30000004) {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x90) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x98);
        }
        FUN_1003231d0(uVar3);
      }
    }
  }
  FUN_1003261e0(param_1);
  if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
     (*(long **)(param_1 + 0x78) != (long *)0x0)) {
    lVar2 = **(long **)(param_1 + 0x78);
    if (*(int *)(param_1 + 0x34) == 2) {
                    /* WARNING: Could not recover jumptable at 0x000100326864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x70))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010032689e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x78))();
    return;
  }
  return;
}

