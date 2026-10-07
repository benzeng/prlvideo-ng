
void FUN_1000fb340(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)param_2[0xc];
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  uVar4 = 0;
  if (*param_2 != 0) {
    uVar4 = *(undefined8 *)(*param_2 + 0x10);
  }
  FUN_1007964d0(uVar4,0);
  if ((*(int *)(plVar2[2] + 0x40) == 0xbbb) || (*(int *)(plVar2[2] + 0x40) == 0x1389)) {
    FUN_1000faf70(param_1,param_2);
  }
  else {
    FUN_1008e3970("","vm",0,"Error: unknow package type: 0x%x");
  }
  LOCK();
  plVar1 = plVar2 + 1;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000fb3de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return;
  }
  return;
}

