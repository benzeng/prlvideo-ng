
void FUN_100793bb0(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    cVar1 = '\0';
    QObject::connect(&local_28,*(long *)(param_1 + 0x20),"2undoAvailableChanged(bool)",param_1,
                     "1setUndoAvailable(bool)",0);
    if (local_28 != 0) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar2 = '\0';
    QObject::connect(&local_30,uVar3,"2cutAvailableChanged(bool)",param_1,"1setCutAvailable(bool)",0
                    );
    if (cVar1 != '\0') {
      if (local_30 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar1 = '\0';
    QObject::connect(&local_38,uVar3,"2copyAvailableChanged(bool)",param_1,"1setCopyAvailable(bool)"
                     ,0);
    if (cVar2 != '\0') {
      if (local_38 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar2 = '\0';
    QObject::connect(&local_40,uVar3,"2pasteAvailableChanged(bool)",param_1,
                     "1setPasteAvailable(bool)",0);
    if (cVar1 != '\0') {
      if (local_40 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar1 = '\0';
    QObject::connect(&local_48,uVar3,"2selectAllAvailableChanged(bool)",param_1,
                     "1setSelectAllAvailable(bool)",0);
    if (cVar2 != '\0') {
      if (local_48 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar2 = '\0';
    QObject::connect(&local_50,uVar3,"2startDictationAvailableChanged(bool)",param_1,
                     "1setStartDictationAvailable(bool)",0);
    if (cVar1 != '\0') {
      if (local_50 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    QObject::connect(&local_58,uVar3,"2specialCharactersAvailableChanged(bool)",param_1,
                     "1setSpecialCharactersAvailable(bool)",0);
    if ((cVar2 != '\0') && (local_58 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
  }
  FUN_100790b60(param_1);
  return;
}

