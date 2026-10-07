
undefined8 FUN_100585990(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((*(char *)(param_1 + 0x7c) != '\0') && (*(long *)(param_1 + 0x60) != 0)) {
    lVar1 = *(long *)(param_1 + 0x58);
    if ((ulong)*(uint *)(param_1 + 0xac) == 0xffffffff) {
      uVar2 = *(long *)(param_1 + 0x60) + 0xffffffff;
      plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) +
                                   ((uVar2 & 0xffffffff) + lVar1 >> 9) * 8) +
                         ((ulong)(uint)((int)lVar1 + (int)uVar2) & 0x1ff) * 8);
    }
    else {
      uVar2 = lVar1 + (ulong)*(uint *)(param_1 + 0xac);
      plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar2 >> 9) * 8) +
                         (uVar2 & 0x1ff) * 8);
    }
                    /* WARNING: Could not recover jumptable at 0x000100585a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar4 + 0x30))();
    return uVar3;
  }
  return 0x80021021;
}

