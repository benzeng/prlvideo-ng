
undefined1
FUN_1005b43d0(long param_1,uint param_2,undefined8 param_3,undefined1 *param_4,undefined1 *param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  
  *param_5 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_4 + 8);
    lVar2 = 0;
    if ((param_2 & 1) != 0) {
      if (*(int *)(param_1 + 0xc) == iVar1) {
        *(undefined1 *)(param_1 + 0x10) = *param_4;
        *param_5 = 1;
      }
      lVar2 = 1;
    }
    if (param_2 != 1) {
      iVar3 = (param_2 + 1) - (int)(lVar2 + 1);
      puVar4 = (undefined1 *)(param_1 + 0x10 + (lVar2 + 1) * 0x20);
      do {
        if (*(int *)(puVar4 + -0x24) == iVar1) {
          puVar4[-0x20] = *param_4;
          *param_5 = 1;
        }
        if (*(int *)(puVar4 + -4) == iVar1) {
          *puVar4 = *param_4;
          *param_5 = 1;
        }
        puVar4 = puVar4 + 0x40;
        iVar3 = iVar3 + -2;
      } while (iVar3 != 0);
    }
  }
  return 1;
}

