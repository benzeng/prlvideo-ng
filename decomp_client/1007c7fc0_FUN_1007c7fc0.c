
undefined8 * FUN_1007c7fc0(undefined8 *param_1)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined *puVar4;
  undefined1 local_30 [12];
  
  iVar1 = QMetaObject::indexOfEnumerator((char *)&PTR_staticMetaObject_10222de80);
  puVar4 = PTR_shared_null_1021e1288;
  if (iVar1 != -1) {
    local_30 = QMetaObject::enumerator(0x222de80);
    pcVar2 = (char *)QMetaEnum::valueToKey((int)local_30);
    iVar1 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar3 = _strlen(pcVar2);
      iVar1 = (int)sVar3;
    }
    puVar4 = (undefined *)QString::fromLatin1_helper(pcVar2,iVar1);
  }
  *param_1 = puVar4;
  return param_1;
}

