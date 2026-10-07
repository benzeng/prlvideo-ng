
void FUN_100593420(long *param_1,long param_2,long *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_2 + 0x50);
  uVar2 = *(uint *)(param_1 + 3);
  lVar3 = (**(code **)(*param_1 + 0x30))();
  lVar4 = *param_3;
  lVar5 = 0;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x10);
  }
  if (param_4 == -1 || lVar3 * (ulong)uVar2 <= (ulong)uVar1) {
    *(undefined1 *)(lVar5 + 0x1114) = 1;
    lVar5 = *(long *)(lVar4 + 0x10);
    *(undefined4 *)(lVar5 + 0x10d8) = 3;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    FUN_100594070(lVar5);
    lVar4 = *(long *)(param_1[0xe] + 0x1348);
  }
  else {
    lVar3 = 0;
    *(undefined4 *)(lVar5 + 0x10d8) = 2;
    if (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x10);
    }
    FUN_10056e0d0(param_1[0xe],lVar3 + 0x1148);
    lVar4 = *(long *)(param_1[0xe] + 0x1368);
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0xf0) = *(long *)(lVar4 + 0xf0) + 1;
  }
  return;
}

