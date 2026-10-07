
undefined8 FUN_10037ebf0(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x82dc);
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x110) & 0x10) == 0) {
    if (iVar1 == 0) {
      (*DAT_1011c5c78)(0xbe2);
      puVar2 = &DAT_1011c5bc0;
    }
    else {
      (*DAT_1011c5bc0)(0xbe2);
      puVar2 = &DAT_1011c5c78;
    }
    (*(code *)*puVar2)(0xbe2);
  }
  else {
    (*DAT_1011c5c78)(0xbe2);
    (*DAT_1011c5bc0)(0xbe2);
    uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x110) & *(uint *)(*(long *)(param_1 + 8) + 0x114) &
            0xf;
    if (uVar3 != 0) {
      iVar4 = 0;
      do {
        if ((uVar3 & 1) != 0) {
          if (iVar1 != 0) {
            (*DAT_1011c7580)(0xbe2,iVar4);
          }
          iVar4 = iVar4 + 1;
        }
        uVar3 = uVar3 >> 1;
      } while (uVar3 != 0);
    }
  }
  return 0;
}

