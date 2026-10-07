
uint FUN_1002d7030(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  uVar5 = DAT_1011c564c;
  if ((*(int *)(param_1 + 0x1c) == 0) && (DAT_1011c5650 <= DAT_1011c564c)) {
    uVar5 = DAT_1011c5650;
  }
  if (((*(long **)(param_1 + 0x10) == (long *)0x0) ||
      (iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x58))(), iVar2 != 0)) &&
     (*(uint *)(param_1 + 0x858) <= uVar5)) {
    uVar5 = *(uint *)(param_1 + 0x858);
  }
  uVar3 = uVar5;
  if ((*(long *)(param_1 + 0x850) != 0) && (cVar1 = FUN_1000afc00(DAT_1011c3698), cVar1 == '\0')) {
    lVar4 = FUN_1000b3d20(DAT_1011c3698);
    uVar3 = 0;
    if ((ulong)DAT_1011c5658 <= (ulong)(lVar4 - *(long *)(param_1 + 0x850))) {
      *(undefined8 *)(param_1 + 0x850) = 0;
      uVar3 = uVar5;
    }
  }
  return uVar3;
}

