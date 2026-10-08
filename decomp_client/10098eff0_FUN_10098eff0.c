
void FUN_10098eff0(undefined8 param_1,long *param_2,QString *param_3,QString *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  lVar3 = *param_2;
  iVar1 = *(int *)(lVar3 + 0xc);
  iVar2 = *(int *)(lVar3 + 8);
  lVar6 = (long)iVar2;
  if (iVar2 == iVar1) {
    return;
  }
  piVar5 = (int *)(lVar3 + 0x10 + lVar6 * 8);
  lVar8 = (long)iVar1 * 8;
  lVar4 = lVar8 + lVar6 * -8;
  piVar7 = piVar5;
  do {
    if (*piVar7 == 0) {
      lVar4 = lVar8 + lVar6 * -8;
      piVar7 = piVar5;
      goto LAB_10098f060;
    }
    piVar7 = piVar7 + 2;
    lVar4 = lVar4 + -8;
  } while (lVar4 != 0);
  goto LAB_10098f06f;
  while( true ) {
    piVar7 = piVar7 + 2;
    lVar4 = lVar4 + -8;
    if (lVar4 == 0) break;
LAB_10098f060:
    if (*piVar7 == 1) {
      QMetaObject::tr((char *)&local_38,(char *)&PTR_staticMetaObject_1022339b0,0x1e321d7);
      QString::operator=(param_3,&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_29 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10098f125;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
LAB_10098f125:
      QMetaObject::tr((char *)&local_40,(char *)&PTR_staticMetaObject_1022339b0,0x1e32204);
      QString::operator=(param_4,&local_40);
      if (*(int *)local_40.field0_0x0 == -1) {
        return;
      }
      local_60.field0_0x0 = local_40.field0_0x0;
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) {
          return;
        }
        local_29 = 0;
      }
      goto LAB_10098f2eb;
    }
  }
LAB_10098f06f:
  if (iVar2 != iVar1) {
    lVar4 = lVar8 + lVar6 * -8;
    do {
      if (*piVar5 == 0) {
        QMetaObject::tr((char *)&local_48,(char *)&PTR_staticMetaObject_1022339b0,0x1e32241);
        QString::operator=(param_3,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_29 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10098f1e1;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_10098f1e1:
        QMetaObject::tr((char *)&local_50,(char *)&PTR_staticMetaObject_1022339b0,0x1e32204);
        QString::operator=(param_4,&local_50);
        if (*(int *)local_50.field0_0x0 == -1) {
          return;
        }
        local_60.field0_0x0 = local_50.field0_0x0;
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_50.field0_0x0 != 0) {
            return;
          }
          local_29 = 0;
        }
        goto LAB_10098f2eb;
      }
      piVar5 = piVar5 + 2;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    if (iVar2 != iVar1) {
      piVar5 = (int *)(lVar3 + 0x10 + lVar6 * 8);
      lVar8 = lVar8 + lVar6 * -8;
      do {
        if (*piVar5 == 1) {
          QMetaObject::tr((char *)&local_58,(char *)&PTR_staticMetaObject_1022339b0,0x1e3225c);
          QString::operator=(param_3,&local_58);
          if (*(int *)local_58.field0_0x0 != -1) {
            if (*(int *)local_58.field0_0x0 != 0) {
              LOCK();
              *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
              local_29 = *(int *)local_58.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_10098f29d;
            }
            QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
          }
LAB_10098f29d:
          QMetaObject::tr((char *)&local_60,(char *)&PTR_staticMetaObject_1022339b0,0x1e3227c);
          QString::operator=(param_4,&local_60);
          if (*(int *)local_60.field0_0x0 == -1) {
            return;
          }
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_29 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) {
              return;
            }
          }
LAB_10098f2eb:
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          return;
        }
        piVar5 = piVar5 + 2;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
  }
  return;
}

