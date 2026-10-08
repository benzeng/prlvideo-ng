
void FUN_1004e6b80(long param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      CMacToolbarSearchField::startSearching();
      return;
    case 2:
      FUN_1004e6250(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 3:
      FUN_1004e6650(param_1,**(undefined4 **)(param_4 + 8),1);
      return;
    case 4:
      iVar1 = **(int **)(param_4 + 8);
      iVar4 = FUN_100524aa0(param_1 + 0x40);
      if ((-1 < iVar1) && (iVar1 < iVar4)) {
        if (*(long *)(param_1 + 0x88) == 0) {
          return;
        }
        if (*(int *)(*(long *)(param_1 + 0x88) + 4) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x90) == 0) {
          return;
        }
        FUN_10006f080(*(long *)(param_1 + 0x90),iVar1);
        return;
      }
    case 1:
      FUN_1004e61b0(param_1);
      return;
    case 5:
      uVar2 = **(undefined4 **)(param_4 + 8);
      uVar3 = **(undefined4 **)(param_4 + 0x10);
      FUN_1004e61b0(param_1);
      FUN_1003a3a70(*(undefined8 *)(param_1 + 0x18),uVar2,uVar3);
      return;
    }
  }
  return;
}

