
void FUN_1001cfb80(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1022711c0;
  QDeclarativePrivate::qdeclarativeelement_destructor(param_1);
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

