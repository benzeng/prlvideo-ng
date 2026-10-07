
void FUN_1003fee10(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  if ((((*(long *)(param_1 + 0x78) == 0) ||
       (plVar1 = *(long **)(*(long *)(param_1 + 0x78) + 8), plVar1 == (long *)0x0)) ||
      ((*(uint *)(plVar1 + 3) & 2) == 0)) || ((*(byte *)(param_1 + 0xa8) & 1) != 0)) {
    if ((*(uint *)(param_1 + 0xc0) & 0xc) != 0) {
      FUN_1008e3970("","HddUtils",0,"ERROR: %x",*(uint *)(param_1 + 0xc0) & 0xfc);
    }
    if (*(code **)(param_1 + 0x80) != (code *)0x0) {
      (**(code **)(param_1 + 0x80))(param_1);
    }
    if ((*(code **)(param_1 + 8) != (code *)0x0) && (*(long *)(param_1 + 0xb0) == param_1 + 0xb0)) {
      (**(code **)(param_1 + 8))(param_1);
    }
    if ((*(byte *)(param_1 + 0xa9) & 2) == 0) {
      FUN_10008d470(param_1 + 200);
      return;
    }
  }
  else {
    plVar4 = operator_new(0x18);
    plVar4[2] = param_1;
    plVar4[1] = (long)plVar1;
    lVar2 = *plVar1;
    *plVar4 = lVar2;
    *(long **)(lVar2 + 8) = plVar4;
    *plVar1 = (long)plVar4;
    plVar1[2] = plVar1[2] + 1;
    if ((char)plVar1[10] == '\0') {
      *(undefined1 *)(plVar1 + 10) = 1;
      if ((int)plVar1[4] == 0) {
        iVar3 = _rand();
        *(uint *)(plVar1 + 4) = (iVar3 % 0x3c) * 1000 | 1;
      }
      FUN_1007d9fa0(plVar1[9],plVar1 + 5);
      return;
    }
  }
  return;
}

