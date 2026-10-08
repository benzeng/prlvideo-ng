
void FUN_1001431f0(QWidgetAction *param_1,QObject *param_2,QObject *param_3)

{
  long lVar1;
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  QWidgetAction::QWidgetAction(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021fbe88;
  lVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    lVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(long *)(param_1 + 0x10) = lVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) || (param_2 == (QObject *)0x0)) {
    FUN_100df99c0("","prl_client_app",0,"(?)Warning: passing NULL menu pointer to CColorAction...");
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("CColorAction",0xc);
  QObject::setObjectName((QString *)param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001432c7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001432c7:
  QObject::connect(local_38,param_1,"2hovered()",param_1,"1onHovered()",0);
  QMetaObject::Connection::~Connection(local_38);
  return;
}

