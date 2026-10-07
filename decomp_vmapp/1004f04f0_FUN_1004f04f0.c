
undefined8 * FUN_1004f04f0(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  QString *pQVar3;
  
  FUN_1004f0400();
  puVar2 = (uint *)*param_1;
  if (*puVar2 < 2) {
    pQVar3 = (QString *)(puVar2 + (long)(int)puVar2[2] * 2 + 4);
  }
  else {
    FUN_100022c80(param_1,puVar2[1]);
    puVar2 = (uint *)*param_1;
    pQVar3 = (QString *)(puVar2 + (long)(int)puVar2[2] * 2 + 4);
    if (1 < *puVar2) {
      FUN_100022c80(param_1,puVar2[1]);
      puVar2 = (uint *)*param_1;
    }
  }
  uVar1 = puVar2[3];
  for (; pQVar3 != (QString *)(puVar2 + (long)(int)uVar1 * 2 + 4); pQVar3 = pQVar3 + 1) {
    QString::append(pQVar3);
  }
  return param_1;
}

