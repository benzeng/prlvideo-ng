
char FUN_100364f20(long *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  if ((iVar1 != 3) || (cVar3 = '\x03', iVar2 != 3)) {
    cVar3 = '\x02';
    if (iVar1 != 3) {
      cVar3 = (iVar2 == 3) * '\x02';
    }
  }
  return cVar3;
}

