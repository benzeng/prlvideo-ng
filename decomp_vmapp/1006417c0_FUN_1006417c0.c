
void FUN_1006417c0(undefined8 param_1,QObject *param_2,long param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  QChar local_58 [8];
  QString local_50;
  void *local_48;
  QObject *local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  if (*(long *)PTR__kMDQueryDidFinishNotification_100ba24c8 != param_3) goto LAB_1006418c5;
  FUN_100641960(local_58,*(undefined8 *)(param_2 + 0x28));
  pQVar2 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_50,local_58,(int)*(undefined8 *)(pQVar2 + 0x10) + (int)pQVar2);
  QString::operator=((QString *)(param_2 + 0x18),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_50.field0_0x0 != 0);
      if (*(int *)local_50.field0_0x0 != 0) goto LAB_10064186a;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10064186a:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)pQVar2 != 0);
      if (*(int *)pQVar2 != 0) goto LAB_100641897;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100641897:
  FUN_100013180(local_58);
  param_2[0x22] = (QObject)0x0;
  local_48 = (void *)0x0;
  local_40 = param_2 + 0x18;
  QMetaObject::activate(param_2,(QMetaObject *)&PTR_staticMetaObject_100bc9600,0,&local_48);
LAB_1006418c5:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

