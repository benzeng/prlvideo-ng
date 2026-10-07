
undefined8 FUN_10052aed0(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  if (0 < (long)*(int *)(lVar2 + 4)) {
    piVar4 = (int *)(lVar2 + 0x1c + *(long *)(lVar2 + 0x10));
    lVar3 = 0;
    do {
      if ((((piVar4[-1] <= *param_2) &&
           (*param_2 <= (int)((uint)*(ushort *)(piVar4 + -6) + piVar4[-1]))) &&
          (iVar1 = *piVar4, iVar1 <= param_2[1])) &&
         (param_2[1] <= (int)((uint)*(ushort *)((long)piVar4 + -0x16) + iVar1))) {
        return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
      lVar3 = lVar3 + 1;
      piVar4 = piVar4 + 8;
    } while (lVar3 < *(int *)(lVar2 + 4));
  }
  return 0;
}

