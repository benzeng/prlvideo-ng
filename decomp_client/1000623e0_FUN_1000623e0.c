
void FUN_1000623e0(long param_1,int param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10005faa0(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 1:
      FUN_10005f9b0(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 2:
      FUN_10005fb90(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 3:
      FUN_10005fc80(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 4:
      if (**(int **)(param_4 + 0x10) == 0) {
        uVar5 = *(undefined8 *)(param_4 + 8);
        lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
        lVar2 = *(long *)(lVar1 + 0x18);
        uVar4 = 0;
        if ((lVar2 != 0) && (uVar4 = 0, *(int *)(lVar2 + 4) != 0)) {
          uVar4 = *(undefined8 *)(lVar1 + 0x20);
        }
        iVar3 = FUN_100060e10(uVar4);
        if (iVar3 != 3) {
          uVar4 = FUN_100152280();
          uVar5 = FUN_100152a20(uVar4,uVar5);
          FUN_10005f5d0(param_1,uVar5);
          return;
        }
      }
      break;
    case 5:
      FUN_10005fd70(param_1,*(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    case 6:
      FUN_10005f3d0(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 7:
      FUN_10005ffe0(param_1,**(undefined8 **)(param_4 + 8));
      return;
    case 8:
      FUN_1000609f0(param_1);
      return;
    case 9:
      FUN_100060aa0(param_1);
      return;
    }
  }
  return;
}

