
void FUN_1000919d0(long param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  
  if (*(uint *)(param_1 + 0xa4) < 0xe) {
    return;
  }
  if ((((DAT_1011c5668 < 2) && (*(long **)(param_1 + 0x10800) != (long *)0x0)) &&
      (cVar1 = (**(code **)(**(long **)(param_1 + 0x10800) + 0x10))(), cVar1 != '\0')) ||
     ((*(long **)(param_1 + 0x10808) == (long *)0x0 ||
      (cVar1 = (**(code **)(**(long **)(param_1 + 0x10808) + 0x10))(), cVar1 == '\0')))) {
    puVar2 = (undefined8 *)(param_1 + 0x10800);
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x10808);
  }
  (**(code **)(*(long *)*puVar2 + 0x20))((long *)*puVar2,param_2,param_3);
  if (((param_2 == 0x88) &&
      (bVar3 = param_3 == 0, bVar4 = DAT_1011b64b0 == '\0', DAT_1011b64b0 = bVar3, bVar4)) &&
     (bVar3)) {
    FUN_1002592b0(FUN_100091ac0,0);
    return;
  }
  return;
}

