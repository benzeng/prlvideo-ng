
void FUN_1007b47f0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  char *pcVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  undefined8 uVar7;
  Connection local_70 [8];
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QVariant local_58;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  if (param_3 != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  QVariant::toList();
  if (*(int *)(local_40 + 0xc) - *(int *)(local_40 + 8) < 3) goto LAB_1007b4a24;
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  QVariant::toString();
  uVar2 = QVariant::toBool();
  pcVar3 = (char *)FUN_100194250(uVar7,&local_48,uVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b48d0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007b48d0:
  if (pcVar3 == (char *)0x0) goto LAB_1007b4a24;
  QVariant::toStringList();
  QVariant::QVariant(&local_58,(QStringList *)&local_60.field0);
  QObject::setProperty(pcVar3,(QVariant *)"linkedClones");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b49a0;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar6 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1007b497f:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1007b497f;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)local_60.field1);
  }
LAB_1007b49a0:
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,0x1dcde5b);
  FUN_100862860(param_1,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b49fb;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007b49fb:
  QObject::connect(local_70,pcVar3,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onDeleteFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_70);
LAB_1007b4a24:
  FUN_100035ea0(&local_40);
  return;
}

