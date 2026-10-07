
undefined8 FUN_1002db960(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x448);
  if (lVar2 == 0) {
    uVar4 = 0;
    if (-1 < DAT_1011c568c) {
      uVar4 = 0;
      FUN_1008e3970("","USB",0,"[HUB] can\'t process io packet ep = %p",0);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x468) = 0;
    uVar3 = DAT_1011c5664;
    if (*(uint *)(param_2 + 0x43c) < DAT_1011c5664) {
      uVar3 = *(uint *)(param_2 + 0x43c);
    }
    *(uint *)(param_2 + 0x454) = uVar3;
    _memcpy((void *)(param_2 + 0x4d8),(void *)(param_1 + 0xb8),(ulong)uVar3);
    if ((1 < DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0x69)) {
      FUN_1002da980(2,param_2);
    }
    uVar3 = *(uint *)(param_2 + 0x470);
    *(undefined4 *)(param_2 + 0x464) = 1;
    LOCK();
    piVar1 = (int *)(*(long *)(lVar2 + 0xc0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    uVar4 = 1;
    if ((uVar3 & 4) != 0) {
      FUN_1002c9070(param_2);
    }
  }
  return uVar4;
}

