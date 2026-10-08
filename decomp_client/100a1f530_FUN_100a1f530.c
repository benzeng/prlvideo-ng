
undefined1  [16] FUN_100a1f530(undefined8 *param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  QArrayData *pQVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  undefined1 local_48 [12];
  undefined1 local_31;
  
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
    iVar2 = QMetaObject::methodCount();
    if (2 < iVar2) {
      iVar2 = 2;
      do {
        iVar3 = (**(code **)*param_1)(param_1);
        auVar8 = QMetaObject::method(iVar3);
        local_48 = auVar8;
        QMetaMethod::methodSignature();
        pQVar7 = local_60 + *(long *)(local_60 + 0x10);
        lVar6 = 0;
        if (pQVar7 != (QArrayData *)0x0) {
          lVar6 = 0;
          if (*(uint *)(local_60 + 4) != 0) {
            lVar6 = 0;
            do {
              if (pQVar7[lVar6] == (QArrayData)0x0) break;
              lVar6 = lVar6 + 1;
            } while ((uint)lVar6 < *(uint *)(local_60 + 4));
          }
        }
        pQVar7 = (QArrayData *)QString::fromAscii_helper((char *)pQVar7,(int)lVar6);
        local_58 = pQVar7;
        FUN_100a1f320(&local_50,&local_58);
        if (*(int *)pQVar7 != -1) {
          if (*(int *)pQVar7 != 0) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a1f624;
          }
          QArrayData::deallocate(pQVar7,2,8);
        }
LAB_100a1f624:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a1f654;
          }
          QArrayData::deallocate(local_60,1,8);
        }
LAB_100a1f654:
        cVar1 = operator==(&local_50,param_2);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a1f694;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_100a1f694:
        if (cVar1 != '\0') {
          uVar5 = (ulong)(uint)local_48._8_4_;
          goto LAB_100a1f758;
        }
        iVar2 = iVar2 + 1;
        (**(code **)*param_1)(param_1);
        iVar3 = QMetaObject::methodCount();
      } while (iVar2 < iVar3);
    }
    if (3 < DAT_10230ffd0) {
      QString::toLatin1();
      lVar6 = *(long *)(local_68 + 0x10);
      (**(code **)*param_1)(param_1);
      uVar4 = QMetaObject::className();
      FUN_100df99c0("","MetaObjectUtils",4,"No method %s was found for object %s",local_68 + lVar6,
                    uVar4);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          UNLOCK();
          if (*(int *)local_68 != 0) goto LAB_100a1f745;
          local_31 = 0;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
  }
LAB_100a1f745:
  uVar5 = 0;
  local_48._0_8_ = 0;
LAB_100a1f758:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = local_48._0_8_;
  return auVar9;
}

