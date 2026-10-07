
void FUN_100593e40(long *param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_1008e3970("","vdisk",0,
                "Error: process error, req=%p, req->lba=%llu, req->state=%u, dio_err=%u, sys_err=%u"
                ,param_1,param_1[0x21f],(int)param_1[0x21b],param_2,param_3);
  lVar6 = param_1[0x223];
  lVar5 = param_1[0x225];
  lVar4 = param_1[0x227];
  param_1[0x228] = 0;
  param_1[0x227] = 0;
  param_1[0x226] = 0;
  param_1[0x225] = 0;
  param_1[0x224] = 0;
  param_1[0x223] = 0;
  QMutex::lock();
  if ((int)param_1[0x22e] - 1U < 2) {
    lVar1 = param_1[1];
    uVar3 = *(long *)(lVar1 + 0x60) + 0xffffffff;
    plVar2 = *(long **)(*(long *)(*(long *)(lVar1 + 0x40) +
                                 ((uVar3 & 0xffffffff) + *(long *)(lVar1 + 0x58) >> 9) * 8) +
                       ((ulong)(uint)((int)*(long *)(lVar1 + 0x58) + (int)uVar3) & 0x1ff) * 8);
    (**(code **)(*plVar2 + 0x110))(plVar2,(int)param_1[0x21e]);
  }
  *(undefined4 *)(param_1 + 0x21b) = 8;
  *(uint *)(param_1 + 0x220) = param_2;
  *(undefined4 *)((long)param_1 + 0x1104) = param_3;
  QWaitCondition::wakeAll();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10059a420(lVar1,param_1 + 0x21c);
  }
  QMutex::unlock();
  if (lVar6 != 0) {
    do {
      lVar1 = *(long *)(lVar6 + 0x20);
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | param_2 & 0xfc;
      *(undefined4 *)(lVar6 + 0x28) = param_3;
      FUN_10070aed0(lVar6);
      lVar6 = lVar1;
    } while (lVar1 != 0);
  }
  if (lVar5 != 0) {
    do {
      lVar6 = *(long *)(lVar5 + 0x20);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | param_2 & 0xfc;
      *(undefined4 *)(lVar5 + 0x28) = param_3;
      FUN_10070aed0(lVar5);
      lVar5 = lVar6;
    } while (lVar6 != 0);
  }
  if (lVar4 != 0) {
    do {
      lVar6 = *(long *)(lVar4 + 0x20);
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | param_2 & 0xfc;
      *(undefined4 *)(lVar4 + 0x28) = param_3;
      FUN_10070aed0(lVar4);
      lVar4 = lVar6;
    } while (lVar6 != 0);
  }
  return;
}

