
void FUN_10035d690(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 0xa8) = 0;
  pvVar3 = operator_new(0x10);
  FUN_100361dd0(pvVar3,param_1);
  *(void **)(param_1 + 0x38) = pvVar3;
  pvVar3 = operator_new(0x18);
  FUN_10035fbd0(pvVar3,param_1);
  *(void **)(param_1 + 0x30) = pvVar3;
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    lVar4 = FUN_100319390();
    if (lVar4 != 0) {
      plVar1 = *(long **)(param_1 + 0x28);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x140);
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar5 = 0;
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar5 = FUN_100319390(*(long *)(param_1 + 0x18));
        }
      }
      FUN_10018c2b0(uVar5);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      uVar2 = CVmRunTimeOptions::getOptimizeModifiers();
                    /* WARNING: Could not recover jumptable at 0x00010035d76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2);
      return;
    }
  }
  return;
}

