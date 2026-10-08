
void FUN_100751670(QObject *param_1)

{
  QObject::disconnect(*(QObject **)(param_1 + 0x18),"2finished()",param_1,"1onSearchFinished()");
  CSpotlightWrapper::stopSearch();
  FUN_100858f80(param_1);
  return;
}

