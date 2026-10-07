
void FUN_1007ea840(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
    *(ushort *)(param_2 + 1) = CONCAT11(param_1[4],param_1[5]);
    *(ushort *)((long)param_2 + 6) = CONCAT11(param_1[6],param_1[7]);
    uVar1 = param_1[8];
    uVar2 = param_1[9];
    *(ushort *)(param_2 + 2) = CONCAT11(uVar1,uVar2);
    *(undefined2 *)((long)param_2 + 0xe) = *(undefined2 *)(param_1 + 0xe);
    *(undefined4 *)((long)param_2 + 10) = *(undefined4 *)(param_1 + 10);
    *(undefined1 *)(param_2 + 2) = uVar1;
    *(undefined1 *)((long)param_2 + 9) = uVar2;
  }
  return;
}

