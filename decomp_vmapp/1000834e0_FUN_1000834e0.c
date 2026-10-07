
undefined8 FUN_1000834e0(undefined8 param_1)

{
  int iVar1;
  QScriptValue local_30 [8];
  
  iVar1 = QScriptContext::argumentCount();
  if (iVar1 < 1) {
    DAT_1011b6388 = 0;
  }
  else {
    QScriptContext::argument((int)local_30);
    DAT_1011b6388 = QScriptValue::toInt32();
    QScriptValue::~QScriptValue(local_30);
  }
  DAT_1011b638c = 1;
  QScriptEngine::undefinedValue();
  return param_1;
}

