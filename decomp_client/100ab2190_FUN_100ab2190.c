
void FUN_100ab2190(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 local_58 [64];
  
  if ((*(byte *)((long)param_1 + 0x3c) & 1) != 0) {
    (**(code **)(*(long *)param_1[3] + 0x20))();
  }
  FUN_100aafe50(local_58,*(long *)(param_1[2] + 0x10) + 200);
  lVar1 = param_1[2];
  if ((*(byte *)((long)param_1 + 0x3c) & 4) == 0) {
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x20) = param_1[4];
    }
    *(long *)param_1[4] = lVar2;
    (**(code **)(*param_1 + 8))(param_1);
    if (*(long *)(lVar1 + 0x18) == *(long *)(lVar1 + 0x20)) {
      FUN_100aaf5d0(lVar1 + 0x28);
    }
  }
  else {
    FUN_100ab1300(lVar1,param_1,0,0);
  }
  FUN_100aafde0(local_58);
  return;
}

