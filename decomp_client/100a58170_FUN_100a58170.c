
undefined8 FUN_100a58170(undefined8 param_1,QString *param_2)

{
  short sVar1;
  undefined *puVar2;
  undefined *self;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_init_102268ca8);
  uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSDateFormatter_10226aaf8,PTR_s_alloc_102268b58);
  uVar5 = (*(code *)puVar2)(uVar5,PTR_s_init_102268ca8);
  uVar5 = (*(code *)puVar2)(uVar5,PTR_s_autorelease_102269a10);
  (*(code *)puVar2)(uVar5,PTR_s_setTimeStyle__10226a588,param_1);
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar5 = (*(code *)puVar2)(uVar5,PTR_s_dateFormat_10226a590);
  if (self == (undefined *)0x0) {
    local_58 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,(ID)self,PTR_s_QStringWithString__1022696d0,uVar5);
  }
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("SA",2);
  QString::fromUtf8_helper((char *)&local_50,0x1e3cfb6);
  QString::append(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5828e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a5828e:
  QString::fromUtf8_helper((char *)&local_48,0x1e41978);
  QString::operator=(param_2,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a582dc;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100a582dc:
  if (0 < *(int *)(local_58 + 4)) {
    lVar8 = 0;
    bVar10 = false;
    do {
      sVar1 = *(short *)(local_58 + lVar8 * 2 + *(long *)(local_58 + 0x10));
      uVar9 = (uint)param_2;
      if (sVar1 == 0x27) {
        pQVar6 = param_2->field0_0x0;
        uVar7 = *(uint *)(pQVar6 + 4);
        if ((1 < *(uint *)pQVar6) || ((*(uint *)(pQVar6 + 8) & 0x7fffffff) < uVar7 + 2)) {
          QString::reallocData(uVar9,SUB41(uVar7 + 2,0));
          pQVar6 = param_2->field0_0x0;
          uVar7 = *(uint *)(pQVar6 + 4);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        *(uint *)(pQVar6 + 4) = uVar7 + 1;
        *(undefined2 *)(pQVar6 + (long)(int)uVar7 * 2 + *(long *)(pQVar6 + 0x10)) = 0x27;
        *(undefined2 *)(pQVar6 + (long)(int)*(uint *)(pQVar6 + 4) * 2 + *(long *)(pQVar6 + 0x10)) =
             0;
      }
      else if (bVar10) {
        pQVar6 = param_2->field0_0x0;
        uVar7 = *(uint *)(pQVar6 + 4);
        if ((1 < *(uint *)pQVar6) || ((*(uint *)(pQVar6 + 8) & 0x7fffffff) < uVar7 + 2)) {
          QString::reallocData(uVar9,SUB41(uVar7 + 2,0));
LAB_100a5843a:
          pQVar6 = param_2->field0_0x0;
          uVar7 = *(uint *)(pQVar6 + 4);
        }
LAB_100a58441:
        *(uint *)(pQVar6 + 4) = uVar7 + 1;
        *(short *)(pQVar6 + (long)(int)uVar7 * 2 + *(long *)(pQVar6 + 0x10)) = sVar1;
        *(undefined2 *)(pQVar6 + (long)(int)*(uint *)(pQVar6 + 4) * 2 + *(long *)(pQVar6 + 0x10)) =
             0;
      }
      else {
        iVar3 = QString::indexOf(&local_60,sVar1,0,1);
        if (iVar3 == -1) {
          if (sVar1 == 0x6b) {
            QString::append(param_2,0x48);
          }
          else if (sVar1 == 0x61) {
            QString::fromUtf8_helper((char *)&local_40,0x1e1f170);
            QString::append(param_2);
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                local_31 = *(int *)local_40 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a58464;
              }
              QArrayData::deallocate(local_40,2,8);
            }
          }
          else {
            if (sVar1 != 0x4b) {
              pQVar6 = param_2->field0_0x0;
              uVar7 = *(uint *)(pQVar6 + 4);
              if ((1 < *(uint *)pQVar6) || ((*(uint *)(pQVar6 + 8) & 0x7fffffff) < uVar7 + 2)) {
                QString::reallocData(uVar9,SUB41(uVar7 + 2,0));
                goto LAB_100a5843a;
              }
              goto LAB_100a58441;
            }
            QString::append(param_2,0x68);
          }
        }
      }
LAB_100a58464:
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(local_58 + 4));
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_release_1022699b8);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a58512;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a58512:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return 1;
}

