
void FUN_1000d0580(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (*(int *)(lVar2 + 0x14) == 10) {
    if (*(int *)(lVar2 + 0x28) == 0) {
      iVar1 = *(int *)(param_1 + 500);
    }
    else {
      iVar1 = **(int **)(lVar2 + 0x30);
      *(int *)(param_1 + 500) = iVar1;
    }
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 500) = 0x80000275;
    }
    FUN_1000cee20(param_1);
    uVar3 = 0;
  }
  else if (*(int *)(lVar2 + 0x14) == 8) {
    FUN_1000cee20(param_1);
    *(undefined1 *)(param_1 + 0x80) = 0;
    FUN_10008eef0(param_1);
    FUN_10008f9b0(param_1);
    FUN_10008f940(param_1);
    uVar3 = 0;
  }
  else {
    FUN_10008fa70(*(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x1810),2);
    uVar3 = 0x80000001;
  }
  FUN_10008f910(param_1,uVar3);
  return;
}

