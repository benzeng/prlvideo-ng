
void FUN_1000ad0b0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)in_RAX >> 0x20);
  uVar1 = FUN_1007da300("kernel.power.period",1000000);
  uVar2 = FUN_1007da300("kernel.power.policy",2);
  uVar3 = 0;
  switch(uVar2) {
  case 0:
    uVar3 = 0;
    if (*(int *)(param_1 + 0x1ac0) != 0) goto switchD_1000ad122_caseD_2;
    if (*(int *)(param_1 + 0x1ac4) == 0) {
      uVar1 = 0;
    }
    break;
  case 1:
    uVar3 = 0;
    if (*(int *)(param_1 + 0x1ac0) != 0) goto switchD_1000ad122_caseD_2;
    break;
  case 2:
    goto switchD_1000ad122_caseD_2;
  case 3:
    break;
  default:
    FUN_1008e3970("","vm",0,"Bad LW policy");
    return;
  }
  uVar3 = uVar1;
switchD_1000ad122_caseD_2:
  FUN_1008e3970("","vm",0,"LW: %u (online %d, enabled %d)",uVar3,*(undefined4 *)(param_1 + 0x1ac0),
                CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x1ac4)));
                    /* WARNING: Could not recover jumptable at 0x0001000ad199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1950) + 0x48))(*(long **)(param_1 + 0x1950),uVar3);
  return;
}

