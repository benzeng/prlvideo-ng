
undefined8 * FUN_10076e0c0(undefined8 *param_1,long *param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 uVar5;
  int iVar6;
  
  puVar3 = (undefined8 *)_getpwuid(*(undefined4 *)(*param_2 + 0x1a4));
  if (puVar3 == (undefined8 *)0x0) {
    piVar2 = (int *)param_2[0xf];
    *param_1 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  else {
    pcVar1 = (char *)*puVar3;
    iVar6 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar4 = _strlen(pcVar1);
      iVar6 = (int)sVar4;
    }
    uVar5 = QString::fromAscii_helper(pcVar1,iVar6);
    *param_1 = uVar5;
  }
  return param_1;
}

