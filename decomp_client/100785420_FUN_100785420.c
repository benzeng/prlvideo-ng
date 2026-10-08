
void FUN_100785420(QObject *param_1,QObject *param_2)

{
  CSystemStatusBarItem *pCVar1;
  long local_88;
  QArrayData *local_80;
  QPixmap local_78 [32];
  QArrayData *local_58;
  QPixmap local_50 [32];
  QIcon local_30 [15];
  undefined1 local_21;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222af50;
  QIcon::QIcon(local_30);
  local_58 = (QArrayData *)QString::fromAscii_helper(":/images/Feedback_menu",0x16);
  QPixmap::QPixmap(local_50,&local_58,0,0);
  QIcon::addPixmap(local_30,local_50,0,1);
  QPixmap::~QPixmap(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007854bf;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007854bf:
  local_80 = (QArrayData *)QString::fromAscii_helper(":/images/Feedback_menu_pressed",0x1e);
  QPixmap::QPixmap(local_78,&local_80,0,0);
  QIcon::addPixmap(local_30,local_78,3,1);
  QPixmap::~QPixmap(local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100785535;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100785535:
  pCVar1 = operator_new(0x18);
  CSystemStatusBarItem::CSystemStatusBarItem(pCVar1,3,local_30,param_1);
  *(CSystemStatusBarItem **)(param_1 + 0x10) = pCVar1;
  QObject::connect(&local_88,pCVar1,"2clicked()",param_1,"1onIconClicked()",0);
  if (local_88 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  QIcon::~QIcon(local_30);
  return;
}

