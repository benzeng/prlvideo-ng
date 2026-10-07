
int FUN_100594b10(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar2 = -0x7ffdefdf;
  if ((*(char *)(param_1 + 0x7c) != '\0') && (lVar4 = *(long *)(param_1 + 0x60), lVar4 != 0)) {
    if ((ulong)*(uint *)(param_1 + 0xac) == 0xffffffff) {
      iVar1 = 0;
    }
    else {
      uVar3 = (ulong)*(uint *)(param_1 + 0xac) + *(long *)(param_1 + 0x58);
      iVar1 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar3 >> 9) * 8) +
                                      (uVar3 & 0x1ff) * 8) + 0x68))();
      lVar4 = *(long *)(param_1 + 0x60);
    }
    iVar2 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) +
                                              ((lVar4 + 0xffffffffU & 0xffffffff) +
                                               *(long *)(param_1 + 0x58) >> 9) * 8) +
                                    ((ulong)(uint)((int)*(long *)(param_1 + 0x58) +
                                                  (int)(lVar4 + 0xffffffffU)) & 0x1ff) * 8) + 0x68))
                      ();
    if (iVar1 != 0) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

