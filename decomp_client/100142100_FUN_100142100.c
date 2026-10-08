
void FUN_100142100(long param_1,ulong param_2)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  undefined8 local_78;
  QArrayData *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  FUN_100141550(&local_78,param_2,0x200000000,0xc00000000);
  *(undefined8 *)(param_1 + 0xb0) = local_78;
  if (local_70 != *(QArrayData **)(param_1 + 0xb8)) {
    if (*(int *)local_70 == 0) {
      if ((int)*(uint *)(local_70 + 8) < 0) {
        pQVar1 = (QArrayData *)QArrayData::allocate(0x18,8,*(uint *)(local_70 + 8) & 0x7fffffff,0);
        if (pQVar1 == (QArrayData *)0x0) {
          qBadAlloc();
        }
        pQVar1[0xb] = (QArrayData)((byte)pQVar1[0xb] | 0x80);
        pQVar5 = pQVar1;
      }
      else {
        pQVar1 = (QArrayData *)QArrayData::allocate(0x18,8,(long)*(int *)(local_70 + 4),0);
        pQVar5 = pQVar1;
        if (pQVar1 == (QArrayData *)0x0) {
          qBadAlloc();
          pQVar5 = (QArrayData *)0x0;
        }
      }
      if ((*(uint *)(pQVar5 + 8) & 0x7fffffff) != 0) {
        if ((long)*(int *)(local_70 + 4) * 0x18 != 0) {
          pQVar2 = local_70 + *(long *)(local_70 + 0x10);
          pQVar3 = pQVar2 + (long)*(int *)(local_70 + 4) * 0x18;
          pQVar4 = pQVar5 + *(long *)(pQVar5 + 0x10);
          do {
            *(undefined8 *)pQVar4 = *(undefined8 *)pQVar2;
            *(undefined4 *)(pQVar4 + 8) = *(undefined4 *)(pQVar2 + 8);
            *(undefined2 *)(pQVar4 + 0x14) = *(undefined2 *)(pQVar2 + 0x14);
            *(undefined8 *)(pQVar4 + 0xc) = *(undefined8 *)(pQVar2 + 0xc);
            *(undefined8 *)pQVar4 = *(undefined8 *)pQVar2;
            pQVar2 = pQVar2 + 0x18;
            pQVar4 = pQVar4 + 0x18;
          } while (pQVar2 != pQVar3);
        }
        *(int *)(pQVar5 + 4) = *(int *)(local_70 + 4);
      }
    }
    else {
      pQVar1 = local_70;
      if (*(int *)local_70 != -1) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
      }
    }
    pQVar5 = *(QArrayData **)(param_1 + 0xb8);
    *(QArrayData **)(param_1 + 0xb8) = pQVar1;
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_29 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100142271;
      }
      QArrayData::deallocate(pQVar5,0x18,8);
    }
  }
LAB_100142271:
  *(undefined8 *)(param_1 + 0xe8) = local_40;
  *(undefined8 *)(param_1 + 0xe0) = local_48;
  *(undefined8 *)(param_1 + 0xd8) = local_50;
  *(undefined8 *)(param_1 + 0xd0) = local_58;
  *(undefined8 *)(param_1 + 200) = local_60;
  *(undefined8 *)(param_1 + 0xc0) = local_68;
  *(undefined4 *)(param_1 + 0xf0) = local_38;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001422ec;
    }
    QArrayData::deallocate(local_70,0x18,8);
  }
LAB_1001422ec:
  QWidget::update();
  FUN_1007fc2b0(param_1,param_2 & 0xffffffff);
  return;
}

