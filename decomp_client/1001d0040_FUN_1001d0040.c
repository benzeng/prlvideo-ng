
void FUN_1001d0040(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102271250;
  QDeclarativePrivate::qdeclarativeelement_destructor(param_1);
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

