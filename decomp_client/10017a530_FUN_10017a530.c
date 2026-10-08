
void FUN_10017a530(QMenu *param_1,undefined8 param_2,QWidget *param_3)

{
  char cVar1;
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  QMenu::QMenu(param_1,param_3);
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_1021fd148;
  param_1->field2_0x10 = (undefined4 **)&PTR_FUN_1021fd2f8;
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)((long)&param_1[1].field0_0x0 + 6));
  *(undefined8 *)((long)&param_1[7].field0_0x0 + 2) = 0;
  cVar1 = FUN_10018c2b0(param_2);
  CBaseNode::toString(SUB81(&local_30,0),(bool)(cVar1 + '\x10'));
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)((long)&param_1[1].field2_0x10 + 6),
             SUB81(&local_30,0),(QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10017a5dd;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10017a5dd:
  FUN_10017a680(param_1);
  QObject::connect(local_38,param_2,"2destroyed(QObject*)",param_1,"1hide()",0);
  QMetaObject::Connection::~Connection(local_38);
  return;
}

