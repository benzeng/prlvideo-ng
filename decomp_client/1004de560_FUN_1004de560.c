
void FUN_1004de560(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  (**(code **)(*param_1 + 0x200))();
  if (param_1[6] != 0) {
    uVar4 = FUN_1003b0ad0(param_1[8]);
    lVar5 = FUN_1003e5be0(uVar4,param_2,param_3);
    plVar1 = (long *)param_1[6];
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x68);
    cVar2 = FUN_1003b55f0(param_2);
    uVar3 = 0;
    if ((lVar5 != 0) && (cVar2 != '\0')) {
      uVar3 = FUN_1003a4e60(lVar5,2);
    }
                    /* WARNING: Could not recover jumptable at 0x0001004de5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,uVar3);
    return;
  }
  return;
}

