
QString * FUN_100d30210(QString *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  plVar3 = (long *)FUN_100d2fb50(param_2);
  uVar2 = 1;
  if (plVar3 != (long *)0x0) {
    lVar1 = plVar3[1];
    if (*(int *)(lVar1 + 8) < *(int *)(lVar1 + 0xc)) {
      QString::operator=(param_1,(QString *)
                                 (*(long *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8) + 8));
    }
    uVar2 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uVar2;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return param_1;
}

