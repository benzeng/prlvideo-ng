
undefined1
FUN_100557f60(long param_1,undefined8 param_2,long *param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar11;
  ulong uVar12;
  undefined1 uVar13;
  ulong uVar10;
  
  QMutex::lock();
  uVar12 = param_1 + 0x50U | 1;
  uVar11 = param_1 + 0x50U & 0xfffffffffffffffe;
  uVar5 = FUN_100557890(param_1,param_2,param_3,uVar11);
  if ((int)uVar5 < 0) {
    uVar13 = 0;
  }
  else {
    puVar3 = *(ushort **)(param_1 + 0x10);
    uVar1 = *(uint *)(*(long *)(puVar3 + 0x28) + (long)(int)uVar5 * 4);
    uVar9 = uVar1 + 0xfff & 0xfffff000;
    uVar10 = (ulong)uVar9;
    if (uVar9 - 1 < *param_4) {
      uVar9 = *(uint *)(puVar3 + 2);
      lVar8 = -1;
      if ((uVar5 < *(uint *)(puVar3 + 4)) &&
         (uVar2 = *(uint *)(*(long *)(puVar3 + 0x20) + (ulong)uVar5 * 4),
         uVar2 < *(uint *)(puVar3 + 6))) {
        iVar7 = 1;
        if (*puVar3 < 0x201) {
          iVar7 = *(int *)(puVar3 + 0x12);
        }
        lVar8 = (ulong)(iVar7 * uVar2 + *(int *)(puVar3 + 10)) << 0xc;
      }
      QMutex::unlock();
      uVar6 = FUN_100761ca0(**(undefined4 **)(param_1 + 8),param_5,uVar10,lVar8);
      if (uVar10 == uVar6) {
        uVar6 = 0;
        if (uVar11 != 0) {
          QMutex::lock();
          uVar6 = uVar12;
        }
        lVar8 = (ulong)uVar9 * (long)(int)uVar5;
        *param_3 = lVar8;
        uVar12 = uVar6;
        if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
           (cVar4 = (**(code **)(param_1 + 0x20))
                              (*(undefined8 *)(param_1 + 0x28),param_5,uVar10,lVar8,0),
           cVar4 != '\0')) {
          *param_4 = uVar1;
          uVar13 = 1;
        }
        else {
          uVar13 = 0;
          FUN_1008e3970("","TransMem",0,"Failed to get block %u: cancelled",uVar5);
        }
      }
      else {
        uVar13 = 0;
        FUN_1008e3970("","TransMem",0,"Failed to read block %u");
        uVar12 = uVar11;
      }
    }
    else {
      uVar13 = 0;
      FUN_1008e3970("","TransMem",0,"Failed to get block %u: invalid size %u",uVar5);
    }
  }
  if ((uVar12 & 1) != 0) {
    QMutex::unlock();
  }
  return uVar13;
}

