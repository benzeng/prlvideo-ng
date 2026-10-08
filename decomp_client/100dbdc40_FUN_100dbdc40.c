
undefined8 * FUN_100dbdc40(undefined8 *param_1,long *param_2)

{
  long lVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  sVar2 = _strlen((char *)(lVar1 + 0xf3));
  uVar3 = QString::fromAscii_helper((char *)(lVar1 + 0xf3),(int)sVar2);
  *param_1 = uVar3;
  return param_1;
}

