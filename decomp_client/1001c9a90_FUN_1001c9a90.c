
void FUN_1001c9a90(void)

{
  MetaTypes::registerMetaTypes();
  MetaTypes::registerQmlTypes();
  GUI::registerMetaTypes();
  DeclarativeWidgets::initialize();
  FUN_1001ce4a0("QPointer<CServerWrap>",0,1);
  FUN_1001ce5a0("SdkHandleWrap",0,1);
  return;
}

