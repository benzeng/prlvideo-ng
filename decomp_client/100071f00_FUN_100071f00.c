
void FUN_100071f00(CTaskGenericId *param_1)

{
  QVariant local_38;
  QVariant local_28;
  
  CTaskGenericId::CTaskGenericId(param_1,0x82);
  *(undefined ***)param_1 = &PTR_FUN_10226c670;
  QObject::property((char *)&local_28);
  CTaskGenericId::addParam((QVariant *)param_1);
  QVariant::~QVariant(&local_28);
  QObject::property((char *)&local_38);
  CTaskGenericId::addParam((QVariant *)param_1);
  QVariant::~QVariant(&local_38);
  return;
}

