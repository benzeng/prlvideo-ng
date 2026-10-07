
long FUN_1005f48e0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  *param_3 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (iVar2 = FUN_1007ea6f0(param_2,*(long *)(param_1 + 0x20) + 0x18), iVar2 == 0)) {
    return *(long *)(param_1 + 0x20);
  }
  cVar1 = FUN_1007ea210(param_2);
  if (cVar1 == '\0') {
    *param_3 = 0x80000014;
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) {
      lVar3 = FUN_100575720(*(undefined8 *)(param_1 + 0x30),0x80,param_3);
      *(long *)(param_1 + 0x28) = lVar3;
    }
  }
  return lVar3;
}

