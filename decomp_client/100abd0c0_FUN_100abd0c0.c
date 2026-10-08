
void FUN_100abd0c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    uVar5 = FUN_100319390();
    FUN_10018c2b0(uVar5);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    uVar4 = CVmCommonOptions::getOsVersion();
    plVar1 = (long *)(param_1 + 0x40);
    if ((uVar4 < 0x80f) || ((uVar4 & 0xffffff00) != 0x800)) {
      plVar2 = (long *)*plVar1;
      *plVar1 = 0;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100abd194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x10))();
          return;
        }
      }
    }
    else if ((*plVar1 == 0) || (*(long *)(*plVar1 + 0x10) == 0)) {
      pvVar6 = operator_new(8);
      FUN_100abc920(pvVar6,param_1);
      FUN_100abf120(plVar1,pvVar6);
      return;
    }
  }
  return;
}

