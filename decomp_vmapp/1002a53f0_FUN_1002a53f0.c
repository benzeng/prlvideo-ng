
undefined8 FUN_1002a53f0(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  
  QMutex::lock();
  if (param_2 < 0x10000) {
    uVar8 = 0;
    iVar7 = 0;
    uVar6 = *(uint *)(param_1 + 0x18);
    while (uVar5 = uVar6, uVar5 != 0) {
      uVar6 = uVar5 >> 1;
      uVar1 = uVar6 + iVar7;
      lVar3 = *(long *)(param_1 + 0x20);
      lVar4 = (ulong)uVar1 * 0x10;
      uVar2 = *(uint *)(lVar3 + lVar4);
      if (param_2 > uVar2 || uVar2 == param_2) {
        if (param_2 <= uVar2) {
          uVar8 = 0;
          if (*(int *)(lVar3 + 4 + lVar4) == param_3) {
            uVar8 = *(undefined8 *)(lVar3 + 8 + lVar4);
            _memmove((void *)(lVar3 + lVar4),(void *)(lVar3 + 0x10 + lVar4),
                     (ulong)(*(uint *)(param_1 + 0x18) + ~uVar1) << 4);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
          }
          break;
        }
        iVar7 = uVar1 + 1;
        uVar6 = (uVar5 - 1) - uVar6;
      }
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    lVar4 = (ulong)(param_2 - 0x10000) * 0x10;
    uVar8 = 0;
    if (*(int *)(lVar3 + lVar4) == -1) {
      uVar8 = *(undefined8 *)(lVar3 + 8 + lVar4);
      *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = param_2 - 0x10000;
    }
  }
  QMutex::unlock();
  return uVar8;
}

