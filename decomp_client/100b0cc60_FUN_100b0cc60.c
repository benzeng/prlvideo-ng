
int FUN_100b0cc60(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  int local_2c;
  
  local_2c = 0;
  *param_2 = 0x80000000;
  plVar2 = (long *)FUN_100b0cd70(2,0,&local_2c);
  if (plVar2 == (long *)0x0) {
    return local_2c;
  }
  local_2c = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,0x401);
  if (local_2c < 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    plVar2 = (long *)FUN_100b0cd70(1,0,&local_2c);
    if (plVar2 == (long *)0x0) {
      return local_2c;
    }
    uVar3 = 1;
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,1);
    local_2c = iVar1;
    if (iVar1 != 0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      return iVar1;
    }
  }
  else {
    uVar3 = 2;
  }
  *param_2 = uVar3;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  return 0;
}

