
void FUN_1002c15f0(long param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  
  if (((param_2 & 1) != 0) && (*(long **)(param_1 + 0x2e8) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x2e8) + 0x30))();
  }
  if (((param_2 & 2) != 0) && (*(long **)(param_1 + 0x2f0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x2f0) + 0x30))();
  }
  if (((param_2 & 4) != 0) && (*(long **)(param_1 + 0x2f8) != (long *)0x0)) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x2f8) + 0x30))();
    if (iVar1 != 0) {
      param_2 = param_2 | 8;
    }
  }
  if ((param_2 & 8) != 0) {
    lVar4 = FUN_100257d80(param_1);
    uVar2 = *(uint *)(lVar4 + 0x202c);
    do {
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x202c);
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *(uint *)(lVar4 + 0x202c) = uVar2 & 0xfffffffb;
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
      UNLOCK();
    } while (!bVar5);
    *param_3 = 0xffffffff;
    if (*(long *)(param_1 + 0x2e8) != 0) {
      lVar4 = FUN_100257d80(param_1);
      if (((*(byte *)(lVar4 + 0x2000) & 1) == 0) ||
         (lVar4 = FUN_100257d80(param_1), (*(byte *)(lVar4 + 0x2002) & 0x20) != 0)) {
        *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x48) = 0xffff;
      }
      else {
        uVar3 = (**(code **)(**(long **)(param_1 + 0x2e8) + 0x38))();
        *(ulong *)(*(long *)(param_1 + 0x2d0) + 0xf0) = (ulong)uVar3;
        uVar2 = *param_3;
        if (uVar3 < *param_3) {
          uVar2 = uVar3;
        }
        *param_3 = uVar2;
      }
    }
    lVar4 = FUN_100257d80(param_1);
    uVar2 = *(uint *)(lVar4 + 0x202c);
    do {
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x202c);
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *(uint *)(lVar4 + 0x202c) = uVar2 | 8;
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
      UNLOCK();
    } while (!bVar5);
    if ((*(long *)(param_1 + 0x2f0) != 0) &&
       (lVar4 = FUN_100257d80(param_1), (*(byte *)(lVar4 + 0x1020) & 1) != 0)) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x2f0) + 0x38))();
      *(ulong *)(*(long *)(param_1 + 0x2d8) + 0xf0) = (ulong)uVar3;
      uVar2 = *param_3;
      if (uVar3 < *param_3) {
        uVar2 = uVar3;
      }
      *param_3 = uVar2;
    }
    if ((*(long *)(param_1 + 0x2f8) != 0) &&
       (lVar4 = FUN_100257d80(param_1), (*(byte *)(lVar4 + 0x80) & 1) != 0)) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x2f8) + 0x38))();
      *(ulong *)(*(long *)(param_1 + 0x2e0) + 0xf0) = (ulong)uVar3;
      uVar2 = *param_3;
      if (uVar3 < *param_3) {
        uVar2 = uVar3;
      }
      *param_3 = uVar2;
    }
  }
  return;
}

