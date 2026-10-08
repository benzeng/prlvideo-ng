
undefined8 * FUN_100062330(undefined8 *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_30 [12];
  
  puVar1 = PTR_staticMetaObject_1021e1498;
  QMetaObject::indexOfEnumerator(PTR_staticMetaObject_1021e1498);
  local_30 = QMetaObject::enumerator((int)puVar1);
  pcVar2 = (char *)QMetaEnum::valueToKey((int)local_30);
  iVar5 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar3 = _strlen(pcVar2);
    iVar5 = (int)sVar3;
  }
  uVar4 = QString::fromAscii_helper(pcVar2,iVar5);
  *param_1 = uVar4;
  return param_1;
}

