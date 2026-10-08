
undefined1 FUN_100a338e0(int *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  if (param_2 < 0x28) {
    if (DAT_10230ffd0 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      FUN_100df99c0("","CPBitmapOperations",1,"Input Bitmap should have minimum header");
    }
  }
  else {
    *(undefined2 *)((long)param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    *param_3 = 0;
    *(undefined2 *)param_3 = 0x4d42;
    *(uint *)((long)param_3 + 2) = param_2 + 0xe;
    if (param_1[4] == 3) {
      iVar1 = *param_1 + 0x1a;
    }
    else if (param_1[4] == 6) {
      iVar1 = *param_1 + 0x1e;
    }
    else {
      iVar1 = *param_1 + 0xe;
    }
    *(int *)((long)param_3 + 10) = iVar1;
    uVar2 = 1;
  }
  return uVar2;
}

