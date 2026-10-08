
undefined1
FUN_1006a80b0(QObject *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
             )

{
  char cVar1;
  QObject *this;
  undefined1 uVar2;
  long local_88;
  long local_80;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  QVariant local_58;
  QObject local_48;
  undefined1 local_31;
  
  if (param_5 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != context","ActionManager/ActionUpdater/CActionUpdater.cpp",0xdd,
                  "scheduleUpdate");
  }
  FUN_1006a68e0(&local_78,param_1,param_4,param_5);
  cVar1 = FUN_10019cd90(&local_78);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    this = operator_new(0x48);
    QObject::QObject(this,param_1);
    *(undefined ***)this = &PTR_FUN_102237a10;
    *(int **)(this + 0x10) = local_78;
    *(undefined8 *)(this + 0x18) = uStack_70;
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + 1;
      local_31 = *local_78 != 0;
      UNLOCK();
    }
    *(undefined8 *)(this + 0x28) = local_60;
    *(undefined8 *)(this + 0x20) = local_68;
    QVariant::QVariant((QVariant *)(this + 0x30),&local_58);
    this[0x40] = local_48;
    QObject::connect(&local_80,param_2,param_3,this,"1invoke()",0);
    if (local_80 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    QObject::connect(&local_88,param_5,"2destroyed(QObject*)",this,"1cleanup()",0);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_88 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    uVar2 = 1;
    if (cVar1 == '\0') {
      FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "connected","ActionManager/ActionUpdater/CActionUpdater.cpp",0xea,
                    "scheduleUpdate");
    }
  }
  QVariant::~QVariant(&local_58);
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_31 = *local_78 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
  return uVar2;
}

