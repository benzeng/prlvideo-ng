
void FUN_10008fe00(QObject *param_1,undefined8 param_2,undefined8 param_3)

{
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f7f20;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e15e8;
  FUN_1000949e0("QList<TResolvedPath>",0,0);
  FUN_100094ab0("PRL_RESULT",0,0);
  FUN_100094ba0("ULONG64",0,0);
  param_1[0x28] = (QObject)0x0;
  return;
}

