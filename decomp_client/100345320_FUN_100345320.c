
void FUN_100345320(QObject *param_1,QObject *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  void *pvVar6;
  QObject *pQVar7;
  undefined1 auVar8 [16];
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  QArrayData *local_60;
  long local_58;
  long local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220d1e0;
  lVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(long *)(param_1 + 0x10) = lVar2;
  *(QObject **)(param_1 + 0x18) = param_2;
  param_1[0x30] = (QObject)0x0;
  param_1[0x31] = (QObject)0x0;
  param_1[0x32] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[400] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  pQVar7 = (QObject *)0x0;
  if ((lVar2 != 0) && (pQVar7 = (QObject *)0x0, *(int *)(lVar2 + 4) != 0)) {
    pQVar7 = param_2;
  }
  uVar3 = FUN_100319bf0(pQVar7);
  local_40 = (QArrayData *)
             QString::fromAscii_helper("parallels.UserInputEmulation.guest.cross.TextInput",0x32);
  lVar2 = FUN_10032d8b0(uVar3,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100345421;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100345421:
  cVar1 = '\x01';
  if (lVar2 != 0) {
    QObject::connect(&local_48,lVar2,"2tisRecordRemoved( SdkHandleWrap )",param_1,
                     "1onTisTextInputRemoved( SdkHandleWrap )",0);
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,lVar2,"2tisRecordChanged( SdkHandleWrap, PRL_UINT32 )",param_1,
                     "1onTisTextInputChanged( SdkHandleWrap, PRL_UINT32 )",0);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_50 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = FUN_100319390(param_2);
    QObject::connect(&local_58,uVar4,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                     param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",0);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_58 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
  }
  local_60 = (QArrayData *)
             QString::fromAscii_helper("parallels.UserInputEmulation.guest.cross.EdgeSwipes",0x33);
  lVar2 = FUN_10032d8b0(uVar3,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100345588;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100345588:
  if (lVar2 != 0) {
    QObject::connect(&local_68,lVar2,"2tisRecordRemoved( SdkHandleWrap )",param_1,
                     "1onTisEdgeSwipesRemoved( SdkHandleWrap )",0);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_68 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,lVar2,"2tisRecordChanged( SdkHandleWrap, PRL_UINT32 )",param_1,
                     "1onTisEdgeSwipesChanged( SdkHandleWrap, PRL_UINT32 )",0);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_70 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_70);
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319c40(uVar3);
  QObject::connect(&local_78,uVar3,"2caretLocationReceived( UIEMU_CARET_INFO )",param_1,
                   "1onCaretLocationReceived( UIEMU_CARET_INFO )",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_78 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319c40(uVar3);
  QObject::connect(&local_80,uVar3,"2elementAtPosReceived( UIEMU_ELEMENT_AT_POS )",param_1,
                   "1onElementAtPosReceived( UIEMU_ELEMENT_AT_POS )",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_80 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319c40(uVar3);
  QObject::connect(&local_88,uVar3,"2inputInfoReceived( UIEMU_INPUT_INFO )",param_1,
                   "1onInputInfoReceived( UIEMU_INPUT_INFO )",0);
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
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319c40(uVar3);
  QObject::connect(&local_90,uVar3,"2autokeyboardReceived( UIEMU_AUTOKEYBOARD )",param_1,
                   "1onAutokeyboardReceived( UIEMU_AUTOKEYBOARD )",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_90 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319c40(uVar3);
  QObject::connect(&local_98,uVar3,"2hintingInfoReceived( UIEMU_HINTING_INFO )",param_1,
                   "1onHintingInfoReceived( UIEMU_HINTING_INFO )",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_98 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319c40(uVar3);
  QObject::connect(&local_a0,uVar3,"2dictionaryInfoReceived(UIEMU_DICTIONARY_INFO)",param_1,
                   "1onDictionaryInfoReceived( UIEMU_DICTIONARY_INFO )",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_a0 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319d40(uVar3);
  QObject::connect(&local_a8,uVar3,
                   "2keyboardGrabStateChanged( QString, bool, GUI::InputStateChangeReason )",param_1
                   ,"1onKeyboardGrabStateChanged( QString, bool, GUI::InputStateChangeReason )",0);
  if ((cVar1 != '\0') && (local_a8 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  ___bzero(param_1 + 0x3c,0x154);
  pauVar5 = operator_new(0x18);
  auVar8._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar8._0_8_ = PTR_shared_null_1021e1288;
  auVar8._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *pauVar5 = auVar8;
  *(undefined1 (**) [16])(param_1 + 0x1a0) = pauVar5;
  *(undefined8 *)pauVar5[1] = 0;
  pvVar6 = operator_new(8);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10009da00(pvVar6,uVar3);
  *(void **)(param_1 + 0x1a8) = pvVar6;
  return;
}

