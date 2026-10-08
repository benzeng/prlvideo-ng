
undefined1 FUN_100130090(long *param_1,char param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  
  if (param_2 == '\0') {
LAB_1001300f0:
    uVar5 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar3 = (ulong)*(uint *)(lVar2 + 8);
    uVar5 = 1;
    lVar4 = 0;
    if ((int)*(uint *)(lVar2 + 8) < *(int *)(lVar2 + 0xc)) {
      do {
        iVar1 = FUN_10012f780(**(undefined8 **)(lVar2 + 0x10 + ((int)uVar3 + lVar4) * 8));
        if (iVar1 == 2) goto LAB_1001300f0;
        lVar4 = lVar4 + 1;
        lVar2 = *param_1;
        uVar3 = (ulong)*(int *)(lVar2 + 8);
      } while (lVar4 < (long)((long)*(int *)(lVar2 + 0xc) - uVar3));
    }
  }
  return uVar5;
}

