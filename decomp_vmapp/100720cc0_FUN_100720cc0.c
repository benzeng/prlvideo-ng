
undefined8 FUN_100720cc0(long param_1,char *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x60);
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)(param_1 + 0x60)) {
      return 0;
    }
    iVar1 = _strcasecmp(param_2,(char *)plVar2[2]);
  } while (iVar1 != 0);
  return plVar2[3];
}

