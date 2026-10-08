
char FUN_100364560(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = (**(code **)(*param_1 + 0x28))();
  lVar1 = *(long *)(param_1[1] + 0x48);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) || (*(long *)(param_1[1] + 0x50) == 0)) {
    bVar5 = false;
  }
  else {
    iVar4 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
    bVar5 = iVar4 == 3;
    if ((iVar3 == 3) && (iVar4 == 3)) {
      return '\x03';
    }
  }
  cVar2 = '\x02';
  if (iVar3 != 3) {
    cVar2 = bVar5 * '\x02';
  }
  return cVar2;
}

