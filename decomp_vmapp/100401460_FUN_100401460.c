
void FUN_100401460(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined8 *)(param_1 + 0x50) = 0x200000002;
  }
  else {
    iVar1 = FUN_1003fac50();
    *(int *)(param_1 + 0x54) = iVar1;
    *(int *)(param_1 + 0x50) = iVar1;
    if ((iVar1 == 3) && ((*(byte *)(param_1 + 0x16c) & 8) != 0)) {
      FUN_1008e3970("","HddUtils",0,"hdd: BRC enabled.");
      *(undefined4 *)(param_1 + 0x50) = 1;
      uVar2 = 1;
      goto LAB_1004014d0;
    }
  }
  FUN_1008e3970("","HddUtils",0,"hdd: BRC disabled.");
  *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) & 0xf7;
  uVar2 = *(undefined4 *)(param_1 + 0x50);
LAB_1004014d0:
  FUN_1008e3970("","HddUtils",0,"hdd: cmode %d",uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100401509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 200))
            (*(long **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x50));
  return;
}

