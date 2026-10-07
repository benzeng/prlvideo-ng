
undefined1 FUN_1004ee340(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  
  QMutex::lock();
  plVar3 = *(long **)(param_1 + 0x48);
  do {
    if (plVar3 == (long *)(param_1 + 0x40)) {
      uVar2 = 0;
LAB_1004ee3a0:
      QMutex::unlock();
      return uVar2;
    }
    if (plVar3[3] == param_2) {
      lVar1 = *plVar3;
      *(long *)(lVar1 + 8) = plVar3[1];
      *(long *)plVar3[1] = lVar1;
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
      operator_delete(plVar3);
      uVar2 = 1;
      goto LAB_1004ee3a0;
    }
    plVar3 = (long *)plVar3[1];
  } while( true );
}

