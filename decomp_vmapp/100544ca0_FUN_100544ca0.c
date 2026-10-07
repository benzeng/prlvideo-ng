
long FUN_100544ca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar4 = 1;
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    uVar4 = 3;
  }
  lVar1 = _mmap(0,param_3,uVar4,0x401,*(undefined4 *)*param_1,param_2);
  if (lVar1 == -1) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    lVar1 = 0;
    FUN_1008e3970("","TransMem",0,"Mmap failed %s",pcVar3);
  }
  return lVar1;
}

