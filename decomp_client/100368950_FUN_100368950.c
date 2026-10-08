
void FUN_100368950(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    lVar1 = FUN_10037a2b0(*(undefined8 *)(param_1 + 0x20));
    if (lVar1 != 0) {
      uVar2 = FUN_10037a2b0(*(undefined8 *)(param_1 + 0x20));
      FUN_10036a3c0(uVar2);
    }
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    lVar1 = FUN_100325f60(uVar2);
    if (lVar1 != 0) {
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
      }
      plVar3 = (long *)FUN_100325f60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001003689d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x70))(plVar3);
      return;
    }
  }
  return;
}

