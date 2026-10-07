
void FUN_1002f7a50(undefined8 param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x454) = 0;
    *(undefined4 *)(param_2 + 0x468) = 2;
    lVar3 = *(long *)(param_2 + 0x458);
    if ((1 < DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0x69)) {
      FUN_1002da980(2,param_2);
    }
    uVar2 = *(uint *)(param_2 + 0x470);
    *(undefined4 *)(param_2 + 0x464) = 1;
    LOCK();
    piVar1 = (int *)(*(long *)(lVar3 + 0xc0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((uVar2 & 4) != 0) {
      FUN_1002c9070(param_2);
      return;
    }
  }
  return;
}

