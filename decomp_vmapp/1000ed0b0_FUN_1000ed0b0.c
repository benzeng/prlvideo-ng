
undefined1
FUN_1000ed0b0(long param_1,undefined4 *param_2,long param_3,uint param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  QArrayData *pQVar7;
  undefined1 uVar8;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar9;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  uVar3 = *(uint *)(param_1 + 0x1c);
  if ((uVar3 & 0x10) != 0) {
    *param_2 = param_5;
    param_2[2] = 4;
    param_2[1] = 0x8a9ffffc;
    puVar1 = (undefined4 *)(param_3 + (ulong)(uint)param_2[3]);
    if ((ulong)param_4 < (ulong)(uint)param_2[3] + 4) {
      uVar8 = 0;
      FUN_1008e3970("","vm",0,"Ptr is out of range. Item %s (%p,0x%zx,%p,0x%x)",
                    *(undefined8 *)(param_1 + 0x2c),puVar1,4,param_3,param_4);
    }
    else {
      QString::toUtf8();
      *puVar1 = *(undefined4 *)(local_40 + 4);
      uVar8 = 1;
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ed360;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
    goto LAB_1000ed360;
  }
  if ((uVar3 & 0x20) == 0) {
    uVar8 = 0;
    FUN_1008e3970("","vm",0,"Invalid item %s, Flag=0x%x, line=%u",*(undefined8 *)(param_1 + 0x2c),
                  uVar3,0x52c);
    goto LAB_1000ed360;
  }
  if ((*(uint *)(param_1 + -0x20) & 0x10) == 0) {
    uVar8 = 0;
    FUN_1008e3970("","vm",0,"Invalid prev item %s, Flag=0x%x, line=%u",
                  *(undefined8 *)(param_1 + 0x2c),*(uint *)(param_1 + -0x20),0x537);
    goto LAB_1000ed360;
  }
  uVar3 = param_2[3];
  QString::toUtf8();
  uVar4 = *(uint *)(local_48 + 4);
  uVar6 = (ulong)uVar4;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ed26d;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1000ed26d:
  pvVar2 = (void *)(param_3 + (ulong)uVar3);
  if ((ulong)param_4 < uVar3 + uVar6) {
    uVar8 = 0;
    FUN_1008e3970("","vm",0,"Ptr is out of range. Item %s (%p,0x%x,%p,0x%x)",
                  *(undefined8 *)(param_1 + 0x2c),pvVar2,CONCAT44(uVar9,uVar4),param_3,param_4);
    goto LAB_1000ed360;
  }
  *param_2 = param_5;
  param_2[2] = uVar4;
  param_2[1] = 0x8a9ffffc;
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  pQVar7 = local_50;
  _memcpy(pvVar2,local_50 + *(long *)(local_50 + 0x10),uVar6);
  if (*(uint *)pQVar7 != 0xffffffff) {
    if (*(uint *)pQVar7 != 0) {
      LOCK();
      *(uint *)pQVar7 = *(uint *)pQVar7 - 1;
      local_31 = *(uint *)pQVar7 != 0;
      UNLOCK();
      pQVar7 = local_50;
      if ((bool)local_31) goto LAB_1000ed349;
    }
    QArrayData::deallocate(pQVar7,1,8);
  }
LAB_1000ed349:
  uVar8 = 1;
  if (1 < (uint)DAT_1011c37a0) {
    FUN_1000eae00(pvVar2,uVar6);
  }
LAB_1000ed360:
  puVar5 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_31 = *(int *)puVar5 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar8;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,1,8);
  }
  return uVar8;
}

