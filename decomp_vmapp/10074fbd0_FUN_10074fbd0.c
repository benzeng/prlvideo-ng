
long FUN_10074fbd0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  iVar4 = (int)param_1 + 0x18;
  QSemaphore::acquire(iVar4);
  plVar3 = *(long **)(param_1 + 0x28);
  while( true ) {
    if (plVar3 == (long *)(param_1 + 0x20)) {
      FUN_1008e3970("","Compression",0,"CCompressionEngine::select_worker() not found");
      QSemaphore::release(iVar4);
      return 0;
    }
    lVar1 = plVar3[2];
    if (((*(char *)(lVar1 + 0x71) == '\0') && (*(char *)(lVar1 + 0x73) == '\0')) &&
       (*(char *)(lVar1 + 0x72) == '\0')) break;
    plVar3 = (long *)plVar3[1];
  }
  lVar2 = *plVar3;
  *(long *)(lVar2 + 8) = plVar3[1];
  *(long *)plVar3[1] = lVar2;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  operator_delete(plVar3);
  plVar3 = operator_new(0x18);
  plVar3[2] = lVar1;
  plVar3[1] = param_1 + 0x20;
  lVar2 = *(long *)(param_1 + 0x20);
  *plVar3 = lVar2;
  *(long **)(lVar2 + 8) = plVar3;
  *(long **)(param_1 + 0x20) = plVar3;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  return lVar1;
}

