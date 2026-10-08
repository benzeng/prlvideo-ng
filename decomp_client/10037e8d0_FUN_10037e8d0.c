
void FUN_10037e8d0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102273908;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022739d0;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_102273b08;
  QDeclarativePrivate::qdeclarativeelement_destructor(param_1);
  FUN_100735770(param_1);
  operator_delete(param_1);
  return;
}

