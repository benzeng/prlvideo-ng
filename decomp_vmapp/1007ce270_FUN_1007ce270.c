
bool FUN_1007ce270(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = FUN_1007d0570();
  plVar4 = operator_new(0x20);
  *(undefined4 *)(plVar4 + 1) = 1;
  plVar4[2] = lVar3;
  *plVar4 = (long)&PTR_FUN_1011a5f20;
  plVar4[3] = (long)FUN_10086c430;
  LOCK();
  plVar1 = plVar4 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return lVar3 != 0;
}

