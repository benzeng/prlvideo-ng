
long * FUN_10085c130(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar3 = (long *)FUN_10085b6e0(param_2);
  if (plVar3 == (long *)0x0) {
    return (long *)0x0;
  }
  pcVar1 = *(code **)(*plVar3 + 0x60);
  if (pcVar1 == (code *)0x0) {
    uVar4 = 0x42;
    uVar5 = 0x2d1;
  }
  else {
    if (*plVar3 == *param_1) {
      if (plVar3 == param_1) {
        return param_1;
      }
      iVar2 = (*pcVar1)(plVar3,param_1);
      if (iVar2 != 0) {
        return plVar3;
      }
      goto LAB_10085c1a3;
    }
    uVar4 = 0x65;
    uVar5 = 0x2d5;
  }
  FUN_100887ce0(0x10,0x72,uVar4,"ec_lib.c",uVar5);
LAB_10085c1a3:
  if (*(code **)(*plVar3 + 0x50) != (code *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3);
  }
  FUN_10081e1a0(plVar3);
  return (long *)0x0;
}

