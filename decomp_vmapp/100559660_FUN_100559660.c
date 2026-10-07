
undefined1 FUN_100559660(long param_1,long param_2,ulong param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  uint uVar9;
  undefined1 uVar10;
  
  QMutex::lock();
  bVar8 = true;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    uVar10 = 0;
    FUN_1008e3970("","TransMem",0,"Failed to write a compressed block: the engine is stopped");
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    auVar2 = auVar2 / ZEXT416(*(uint *)(lVar6 + 4));
    uVar5 = auVar2._0_8_;
    uVar9 = param_4 + 0xfffU & 0xfffff000;
    if (*(uint *)(param_2 + 0xc) < uVar9) {
      uVar10 = 0;
      FUN_1008e3970("","TransMem",0,"Failed to write compressed block %u: invalid data size %u",
                    uVar5 & 0xffffffff);
    }
    else {
      uVar7 = uVar5 >> 5 & 0x7ffffff;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x78) + uVar7 * 4);
      bVar3 = auVar2[0];
      if ((uVar1 >> (bVar3 & 0x1f) & 1) == 0) {
        *(uint *)(*(long *)(param_1 + 0x78) + uVar7 * 4) = uVar1 | 1 << (bVar3 & 0x1f);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        QWaitCondition::wakeAll();
        lVar6 = *(long *)(param_1 + 0x10);
      }
      lVar6 = FUN_100559b40(lVar6,uVar5 & 0xffffffff,param_4);
      if (lVar6 == -1) {
        uVar10 = 0;
        FUN_1008e3970("","TransMem",0,"Failed to place block %u",uVar5 & 0xffffffff);
      }
      else if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
              (cVar4 = (**(code **)(param_1 + 0x20))
                                 (*(undefined8 *)(param_1 + 0x28),param_5,uVar9,param_3,1),
              cVar4 != '\0')) {
        bVar8 = false;
        QMutex::unlock();
        uVar7 = FUN_100761d70(**(undefined4 **)(param_1 + 8),param_5,(ulong)uVar9,lVar6);
        uVar10 = 1;
        if (uVar9 != uVar7) {
          uVar10 = 0;
          FUN_1008e3970("","TransMem",0,"Failed to write compressed block %u",uVar5);
        }
      }
      else {
        uVar10 = 0;
        FUN_1008e3970("","TransMem",0,"Failed to write compressed block %u: cancelled",uVar5);
      }
    }
  }
  if (bVar8) {
    QMutex::unlock();
  }
  return uVar10;
}

