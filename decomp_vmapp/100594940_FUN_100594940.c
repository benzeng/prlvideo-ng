
undefined8 FUN_100594940(long param_1)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  
  plVar3 = *(long **)(param_1 + 0x20);
  while( true ) {
    if (plVar3 == (long *)(param_1 + 0x28)) {
      return 0;
    }
    cVar2 = FUN_100684c00((int)plVar3[6]);
    if (cVar2 != '\0') break;
    plVar1 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar1 = (long *)plVar3[2];
        bVar4 = (long *)*plVar1 != plVar3;
        plVar3 = plVar1;
      } while (bVar4);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return 1;
}

