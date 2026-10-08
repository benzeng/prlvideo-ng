
undefined8 * FUN_1007868d0(undefined8 *param_1)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_30 [12];
  
  QMetaObject::indexOfEnumerator((char *)&PTR_staticMetaObject_10222b090);
  local_30 = QMetaObject::enumerator(0x222b090);
  pcVar1 = (char *)QMetaEnum::valueToKey((int)local_30);
  iVar4 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    iVar4 = (int)sVar2;
  }
  uVar3 = QString::fromAscii_helper(pcVar1,iVar4);
  *param_1 = uVar3;
  return param_1;
}

