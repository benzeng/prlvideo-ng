
undefined8 FUN_10058a340(long param_1,undefined4 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)*(undefined8 *)(param_1 + 0x60);
  if (iVar4 != 0) {
    lVar3 = 0;
    do {
      uVar2 = *(long *)(param_1 + 0x58) + lVar3;
      plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar2 >> 9) * 8) +
                         (uVar2 & 0x1ff) * 8);
      (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
      lVar3 = lVar3 + 1;
    } while (iVar4 != (int)lVar3);
  }
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return 0;
}

