
undefined8 * FUN_100641960(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  QArrayData *pQVar7;
  long lVar8;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_100ba2188;
  if ((param_2 != 0) && (lVar3 = _MDQueryGetResultCount(param_2), 0 < lVar3)) {
    uVar1 = *(undefined8 *)PTR__kMDItemPath_100ba24b8;
    uVar2 = *(undefined8 *)PTR__kMDItemVersion_100ba24c0;
    lVar8 = 0;
    do {
      uVar4 = _MDQueryGetResultAtIndex(param_2,lVar8);
      lVar5 = _MDItemCopyAttribute(uVar4,uVar1);
      lVar6 = _MDItemCopyAttribute(uVar4,uVar2);
      FUN_100788b70(&local_40,lVar5);
      FUN_100788b70(&local_48,lVar6);
      pQVar7 = (QArrayData *)QString::fromAscii_helper(" : ",3);
      local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      QString::append(&local_58);
      local_50.field0_0x0 = local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_50);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641aa7;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_100641aa7:
      if (*(int *)pQVar7 != -1) {
        if (*(int *)pQVar7 != 0) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641ad7;
        }
        QArrayData::deallocate(pQVar7,2,8);
      }
LAB_100641ad7:
      FUN_10000c490(param_1,&local_50);
      if (lVar5 != 0) {
        _CFRelease(lVar5);
      }
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641b2d;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100641b2d:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641b5d;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100641b5d:
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641b8d;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100641b8d:
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar3);
  }
  return param_1;
}

