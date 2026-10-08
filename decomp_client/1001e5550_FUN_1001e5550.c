
undefined4 FUN_1001e5550(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 local_24 [4];
  
  QMutex::lock();
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x10);
  uVar6 = 0x80000013;
  lVar5 = 0;
  if (lVar2 != 0) {
    do {
      while (lVar3 = lVar2, iVar1 = *(int *)(lVar3 + 0x18), param_2 <= iVar1) {
        lVar2 = *(long *)(lVar3 + 8);
        lVar5 = lVar3;
        if (*(long *)(lVar3 + 8) == 0) goto LAB_1001e55b8;
      }
      lVar2 = *(long *)(lVar3 + 0x10);
    } while (*(long *)(lVar3 + 0x10) != 0);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
LAB_1001e55b8:
      if (iVar1 <= param_2) {
        puVar4 = (undefined4 *)FUN_1001e5930(*(long *)(param_1 + 0x10) + 0x10,local_24);
        uVar6 = *puVar4;
      }
    }
  }
  QMutex::unlock();
  return uVar6;
}

