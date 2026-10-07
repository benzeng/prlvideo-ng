
undefined4 FUN_1002b53c0(long param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = 0;
  iVar4 = -1;
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x98 + lVar3);
    iVar5 = 1;
    if ((iVar1 == param_2) || (iVar5 = 0, iVar1 == 0x1ffff)) {
      iVar1 = *(int *)(param_1 + 0x9c + lVar3);
      if (iVar1 == param_3) {
        iVar5 = iVar5 + 1;
      }
      else if (iVar1 != 0x1ffff) goto LAB_1002b5449;
      iVar1 = *(int *)(param_1 + 0xa0 + lVar3);
      if (iVar1 == param_4) {
        iVar5 = iVar5 + 1;
      }
      else if (iVar1 != 0x1ff) goto LAB_1002b5449;
      if (iVar4 <= iVar5) {
        uVar2 = *(undefined4 *)(param_1 + 0xa4 + lVar3);
        iVar4 = iVar5;
      }
    }
LAB_1002b5449:
    lVar3 = lVar3 + 0x10;
    if (lVar3 == 0x200) {
      return uVar2;
    }
  } while( true );
}

