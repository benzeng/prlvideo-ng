
void FUN_100746190(QObject *param_1)

{
  long *plVar1;
  
  if ((((*(int *)(param_1 + 0x20) == 1) && (*(long *)(param_1 + 0x70) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
     (*(QObject **)(param_1 + 0x78) != (QObject *)0x0)) {
    plVar1 = (long *)0x0;
    QObject::disconnect(*(QObject **)(param_1 + 0x78),(char *)0x0,param_1,(char *)0x0);
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (plVar1 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
      plVar1 = *(long **)(param_1 + 0x78);
    }
                    /* WARNING: Could not recover jumptable at 0x0001007461f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x78))(plVar1,0x80000275);
    return;
  }
  return;
}

