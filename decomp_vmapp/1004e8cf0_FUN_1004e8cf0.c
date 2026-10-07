
long FUN_1004e8cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  QArrayData *pQVar5;
  long *plVar6;
  uint uVar7;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined1 local_68 [24];
  long local_50;
  long *local_48;
  long local_40;
  undefined1 local_31;
  
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar3 = FUN_1004e7cb0(param_3);
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      FUN_1004e8990(&local_98,param_3,param_4);
      FUN_1004eb600(param_1,&local_98);
      if (local_40 != 0) {
        lVar1 = *local_48;
        *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(local_50 + 8);
        **(long **)(local_50 + 8) = lVar1;
        local_40 = 0;
        plVar6 = local_48;
        while (plVar6 != &local_50) {
          plVar2 = (long *)plVar6[1];
          pQVar5 = (QArrayData *)plVar6[2];
          if (*(int *)pQVar5 != -1) {
            if (*(int *)pQVar5 != 0) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_31 = *(int *)pQVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004e8db0;
              pQVar5 = (QArrayData *)plVar6[2];
            }
            QArrayData::deallocate(pQVar5,2,8);
          }
LAB_1004e8db0:
          operator_delete(plVar6);
          plVar6 = plVar2;
        }
      }
      FUN_1004eb9a0(local_68);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004e8e39;
        }
        QArrayData::deallocate(local_80,1,8);
      }
LAB_1004e8e39:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004e8e6c;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1004e8e6c:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004e8ea9;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1004e8ea9:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004e8edf;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1004e8edf:
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  uVar4 = FUN_1004e7cb0(param_3);
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  return param_1;
}

