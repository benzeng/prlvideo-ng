
void FUN_1006935a0(undefined8 param_1)

{
  long lVar1;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1500);
  if (lVar1 != 0) {
    FUN_10084d110(param_1,lVar1);
    return;
  }
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != action"
                ,"ActionManager/CActionStorage.cpp",0x95,"onActionTriggered");
  return;
}

