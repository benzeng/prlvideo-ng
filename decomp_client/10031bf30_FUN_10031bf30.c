
void FUN_10031bf30(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  
  plVar2 = (long *)FUN_100334b60();
  plVar5 = *(long **)(param_1 + 0xd0);
  if ((plVar2 != (long *)0x0) && (plVar5 != (long *)0x0)) {
    (**(code **)*plVar5)();
    pcVar3 = (char *)QMetaObject::className();
    (**(code **)*plVar2)(plVar2);
    pcVar4 = (char *)QMetaObject::className();
    iVar1 = qstrcmp(pcVar3,pcVar4);
    plVar5 = *(long **)(param_1 + 0xd0);
    if (iVar1 == 0) {
      FUN_100334ca0(plVar5,0);
      (**(code **)(*plVar2 + 0x20))(plVar2);
      plVar2 = *(long **)(param_1 + 0xd0);
      goto LAB_10031bfbb;
    }
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(long **)(param_1 + 0xd0) = plVar2;
LAB_10031bfbb:
  if (plVar2 != (long *)0x0) {
    if (param_3 == 3) {
      FUN_100334ca0(plVar2,1);
      return;
    }
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010031bfda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x68))(plVar2);
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010031c00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x60))(plVar2,0);
      return;
    }
  }
  return;
}

