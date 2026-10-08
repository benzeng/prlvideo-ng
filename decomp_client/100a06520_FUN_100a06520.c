
void FUN_100a06520(undefined8 param_1,QObject *param_2,long param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  undefined1 local_58 [8];
  AnonymousUnion0 local_50;
  void *local_48;
  QObject *local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (*(long *)PTR__kMDQueryDidFinishNotification_1021e19e0 != param_3) goto LAB_100a06625;
  FUN_100a066c0(local_58,*(undefined8 *)(param_2 + 0x28));
  pQVar2 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_50.field0,local_58,
             (int)*(undefined8 *)(pQVar2 + 0x10) + (int)pQVar2);
  QString::operator=((QString *)(param_2 + 0x18),(QString *)&local_50.field0);
  if (*(int *)local_50.field1 != -1) {
    if (*(int *)local_50.field1 != 0) {
      LOCK();
      *(int *)local_50.field1 = *(int *)local_50.field1 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_50.field1 != 0);
      if (*(int *)local_50.field1 != 0) goto LAB_100a065ca;
    }
    QArrayData::deallocate((QArrayData *)local_50.field1,2,8);
  }
LAB_100a065ca:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)pQVar2 != 0);
      if (*(int *)pQVar2 != 0) goto LAB_100a065f7;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a065f7:
  FUN_100039a80(local_58);
  param_2[0x22] = (QObject)0x0;
  local_48 = (void *)0x0;
  local_40 = param_2 + 0x18;
  QMetaObject::activate(param_2,(QMetaObject *)&PTR_staticMetaObject_102236cc0,0,&local_48);
LAB_100a06625:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

