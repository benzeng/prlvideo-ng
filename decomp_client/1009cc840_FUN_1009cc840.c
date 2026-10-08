
void FUN_1009cc840(undefined8 *param_1)

{
  char cVar1;
  long in_RAX;
  long local_28;
  
  local_28 = in_RAX;
  FUN_1009da3a0();
  *param_1 = &PTR_FUN_1022364d0;
  QObject::connect(&local_28,param_1,"2showHelp( unsigned int, QWidget* )",
                   *(undefined8 *)PTR_self_1021e1388,"1showHelp( unsigned int, QWidget* )",0);
  if (local_28 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  if (cVar1 == '\0' && 0 < DAT_10230ffd0) {
    FUN_100df99c0("","PTProblemReporting",1,"Warning : Unable to connect \'showHelp\' signal.");
  }
  return;
}

