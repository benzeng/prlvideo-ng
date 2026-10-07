
void FUN_10029c560(undefined4 *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  switch(param_2) {
  case 0:
    *(undefined8 *)(param_1 + 6) = 1;
    *(undefined8 *)(param_1 + 8) = 0xff00000008;
    goto LAB_10029c57d;
  case 1:
    *(undefined8 *)(param_1 + 6) = 2;
    *(undefined8 *)(param_1 + 8) = 0xffff00000010;
    lVar1 = 2;
    goto LAB_10029c60f;
  case 2:
    *(undefined8 *)(param_1 + 6) = 4;
    uVar2 = 0xfffff00000000014;
    break;
  case 3:
    *(undefined8 *)(param_1 + 6) = 4;
    uVar2 = 0xffffff0000000018;
    break;
  case 4:
  case 5:
  case 6:
    *(undefined8 *)(param_1 + 6) = 4;
    uVar2 = 0xffffffff00000020;
    break;
  default:
    *(undefined8 *)(param_1 + 6) = 1;
    *(undefined8 *)(param_1 + 8) = 0;
LAB_10029c57d:
    lVar1 = 1;
    goto LAB_10029c60f;
  }
  *(undefined8 *)(param_1 + 8) = uVar2;
  lVar1 = 4;
LAB_10029c60f:
  *(ulong *)(param_1 + 4) = (ulong)(uint)param_1[1] * lVar1;
  FUN_10029c780();
  return;
}

