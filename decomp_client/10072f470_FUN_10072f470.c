
void FUN_10072f470(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    uVar4 = FUN_10018c2b0();
    FUN_1007301c0(param_1,uVar4);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar3 = FUN_10018a9d0(uVar4);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    FUN_10072e240(uVar4,uVar3);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar3 = FUN_10018a9d0(uVar4);
    FUN_10072f900(param_1,uVar3);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar3 = FUN_10018bce0(uVar4);
    FUN_10072ff10(param_1,uVar3);
    if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
       (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar2 = FUN_10018ffd0(uVar4);
      FUN_10072e360(lVar1,uVar2);
      return;
    }
  }
  return;
}

