
bool FUN_1003fe950(long param_1,long *param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  undefined1 local_38 [16];
  int local_28;
  
  lVar6 = (param_3 & 0xffffffff) * 0x8048;
  iVar4 = FUN_100410280(*(long *)(param_1 + 0x830) + 0x28 + lVar6,local_38,
                        *(undefined4 *)(*(long *)(param_1 + 0x840) + 0x48));
  if (iVar4 == 0) {
    if (local_28 == 2) {
      *param_2 = param_1;
      param_2[7] = *(long *)(param_1 + 0x830) + 0x18 + lVar6;
      *(undefined4 *)((long)param_2 + 0x44) = 1;
      FUN_100403020(*(undefined8 *)(param_1 + 0x840),FUN_1003fe3a0,param_2);
      bVar7 = true;
    }
    else {
      FUN_1003fe740(param_1,param_2,local_38,*(long *)(param_1 + 0x830) + 0x18 + lVar6);
      FUN_1003fe690(param_1,param_2);
      bVar7 = local_28 == 1;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x830);
    *(undefined4 *)(lVar3 + 0x40 + lVar6) = 0xf0000002;
    uVar5 = *(uint *)(lVar3 + 0x38 + lVar6);
    do {
      puVar1 = (uint *)(lVar3 + 0x38 + lVar6);
      LOCK();
      uVar2 = *puVar1;
      bVar7 = uVar5 == uVar2;
      if (bVar7) {
        *puVar1 = uVar5 & 0xfffffffa;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
      UNLOCK();
    } while (!bVar7);
    (**(code **)(**(long **)(param_1 + 0x838) + 0x18))(*(long **)(param_1 + 0x838),4);
    bVar7 = false;
  }
  return bVar7;
}

