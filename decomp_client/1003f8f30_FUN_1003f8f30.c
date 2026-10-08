
void FUN_1003f8f30(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (-1 < param_2) {
    uVar1 = QObject::sender();
    lVar2 = ___dynamic_cast(uVar1,PTR_typeinfo_1021e1720,&PTR_vtable_102205010,0);
    FUN_1003f8b90(param_1,*(undefined4 *)(lVar2 + 0x34));
  }
  CMappingValueHandler::handleValueFinished(SUB81(*(undefined8 *)(param_1 + 0x10),0));
  return;
}

