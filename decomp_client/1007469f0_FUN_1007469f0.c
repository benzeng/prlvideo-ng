
void FUN_1007469f0(long param_1)

{
  QObject *pQVar1;
  
  pQVar1 = *(QObject **)(param_1 + 0x10);
  if ((((*(int *)(pQVar1 + 0x20) == 1) && (*(long *)(pQVar1 + 0x70) != 0)) &&
      (*(int *)(*(long *)(pQVar1 + 0x70) + 4) != 0)) &&
     (*(QObject **)(pQVar1 + 0x78) != (QObject *)0x0)) {
    QObject::disconnect(*(QObject **)(pQVar1 + 0x78),(char *)0x0,pQVar1,(char *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000100746a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(pQVar1 + 0x78) + 0x78))(*(long **)(pQVar1 + 0x78),0x80000275);
    return;
  }
  return;
}

