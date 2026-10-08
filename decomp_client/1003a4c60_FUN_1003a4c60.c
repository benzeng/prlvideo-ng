
void FUN_1003a4c60(QObject *param_1,uint param_2,int param_3)

{
  QVariant local_40;
  QVariant local_30;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1022104e0;
  *(undefined4 *)(param_1 + 0x10) = 2;
  FUN_1003a4e90("CVmEditorItem::Attributes",0,1);
  QVariant::QVariant(&local_30,param_2);
  QObject::setProperty((char *)param_1,(QVariant *)PTR_s_configItemType_1021f1e88);
  QVariant::~QVariant(&local_30);
  QVariant::QVariant(&local_40,param_3);
  QObject::setProperty((char *)param_1,(QVariant *)PTR_s_configItemId_1021f1e90);
  QVariant::~QVariant(&local_40);
  return;
}

